#include <cstdio>
#include <cstdint>
#include <vector>
#include <queue>
#include <cassert>
#include <string>

std::vector<std::string> testInput = {
"addx 15",
"addx -11",
"addx 6",
"addx -3",
"addx 5",
"addx -1",
"addx -8",
"addx 13",
"addx 4",
"noop",
"addx -1",
"addx 5",
"addx -1",
"addx 5",
"addx -1",
"addx 5",
"addx -1",
"addx 5",
"addx -1",
"addx -35",
"addx 1",
"addx 24",
"addx -19",
"addx 1",
"addx 16",
"addx -11",
"noop",
"noop",
"addx 21",
"addx -15",
"noop",
"noop",
"addx -3",
"addx 9",
"addx 1",
"addx -3",
"addx 8",
"addx 1",
"addx 5",
"noop",
"noop",
"noop",
"noop",
"noop",
"addx -36",
"noop",
"addx 1",
"addx 7",
"noop",
"noop",
"noop",
"addx 2",
"addx 6",
"noop",
"noop",
"noop",
"noop",
"noop",
"addx 1",
"noop",
"noop",
"addx 7",
"addx 1",
"noop",
"addx -13",
"addx 13",
"addx 7",
"noop",
"addx 1",
"addx -33",
"noop",
"noop",
"noop",
"addx 2",
"noop",
"noop",
"noop",
"addx 8",
"noop",
"addx -1",
"addx 2",
"addx 1",
"noop",
"addx 17",
"addx -9",
"addx 1",
"addx 1",
"addx -3",
"addx 11",
"noop",
"noop",
"addx 1",
"noop",
"addx 1",
"noop",
"noop",
"addx -13",
"addx -19",
"addx 1",
"addx 3",
"addx 26",
"addx -30",
"addx 12",
"addx -1",
"addx 3",
"addx 1",
"noop",
"noop",
"noop",
"addx -9",
"addx 18",
"addx 1",
"addx 2",
"noop",
"noop",
"addx 9",
"noop",
"noop",
"noop",
"addx -1",
"addx 2",
"addx -37",
"addx 1",
"addx 3",
"noop",
"addx 15",
"addx -21",
"addx 22",
"addx -6",
"addx 1",
"noop",
"addx 2",
"addx 1",
"noop",
"addx -10",
"noop",
"noop",
"addx 20",
"addx 1",
"addx 2",
"addx 2",
"addx -6",
"addx -11",
"noop",
"noop",
"noop"
};

std::vector<std::string> input = {
"noop",
"addx 10",
"addx -4",
"addx -1",
"noop",
"noop",
"addx 5",
"addx -12",
"addx 17",
"noop",
"addx 1",
"addx 2",
"noop",
"addx 3",
"addx 2",
"noop",
"noop",
"addx 7",
"addx 3",
"noop",
"addx 2",
"noop",
"noop",
"addx 1",
"addx -38",
"addx 5",
"addx 2",
"addx 3",
"addx -2",
"addx 2",
"addx 5",
"addx 2",
"addx -4",
"addx 26",
"addx -19",
"addx 2",
"addx 5",
"addx -2",
"addx 7",
"addx -2",
"addx 5",
"addx 2",
"addx 4",
"addx -17",
"addx -23",
"addx 1",
"addx 5",
"addx 3",
"noop",
"addx 2",
"addx 24",
"addx 4",
"addx -23",
"noop",
"addx 5",
"addx -1",
"addx 6",
"noop",
"addx -2",
"noop",
"noop",
"noop",
"addx 7",
"addx 1",
"addx 4",
"noop",
"noop",
"noop",
"noop",
"addx -37",
"addx 5",
"addx 2",
"addx 1",
"noop",
"addx 4",
"addx -2",
"addx -4",
"addx 9",
"addx 7",
"noop",
"noop",
"addx 2",
"addx 3",
"addx -2",
"noop",
"addx -12",
"addx 17",
"noop",
"addx 3",
"addx 2",
"addx -3",
"addx -30",
"addx 3",
"noop",
"addx 2",
"addx 3",
"addx -2",
"addx 2",
"addx 5",
"addx 2",
"addx 11",
"addx -6",
"noop",
"addx 2",
"addx -19",
"addx 20",
"addx -7",
"addx 14",
"addx 8",
"addx -7",
"addx 2",
"addx -26",
"addx -7",
"noop",
"noop",
"addx 5",
"addx -2",
"addx 5",
"addx 15",
"addx -13",
"addx 5",
"noop",
"noop",
"addx 1",
"addx 4",
"addx 3",
"addx -2",
"addx 4",
"addx 1",
"noop",
"addx 2",
"noop",
"addx 3",
"addx 2",
"noop",
"noop",
"noop",
"noop",
"noop"
};

struct Cpu
{
    int32_t X;
    int32_t cycleCount;

    struct Instr
    {
        enum class Type
        {
            addx,
            noop
        };
        Type type;
        int32_t cycle;
        int32_t val;
    };
    std::queue<Instr> instrQueue;

    Cpu() :
        X(1),
        cycleCount(1)
    {}

    void queueInstruction(const std::string& instr)
    {
        if (instr == "noop") {
            instrQueue.push({Instr::Type::noop,cycleCount+1,0});
        }
        // addx
        else {
            int32_t V = 0;
            sscanf(instr.c_str(), "addx %d", &V);
            instrQueue.push({Instr::Type::addx,cycleCount+2,V});
        }
    }

    void addx(int32_t V) { X += V; }
    void noop() {}

    int32_t signalStrength() {
        return X*cycleCount;
    }

    // returns true if executed an instruction, false otherwise
    bool runCycle()
    {
        ++cycleCount;

        if (!instrQueue.empty() &&
            instrQueue.front().cycle == cycleCount)
        {
            Instr& instr = instrQueue.front();
            switch (instr.type)
            {
            case Instr::Type::addx: addx(instr.val); break;
            case Instr::Type::noop: noop(); break;
            default:
                assert(false);
                break;
            }
            instrQueue.pop();
            return true;
        }
        return false;
    }
};

static int32_t get20thCycleSignalStrengthsSum(const std::vector<std::string>& input)
{
    Cpu cpu;
    int32_t signalStrengthSum = 0;
    size_t i=0;
    size_t nextCycleForSum = 20;
    while ((i<input.size()) || !cpu.instrQueue.empty())
    {
        if (cpu.cycleCount == 1) {
            const std::string& instr = input[i++];
            cpu.queueInstruction(instr);
        }
        if (cpu.runCycle() && i<input.size()) {
            const std::string& instr = input[i++];
            cpu.queueInstruction(instr);
        }

        if ((cpu.cycleCount == int32_t(nextCycleForSum)) &&
            (cpu.cycleCount<=220))
        {
            signalStrengthSum += cpu.signalStrength();
            nextCycleForSum += 40;
        }
    }
    return signalStrengthSum;
}

int main()
{
    int32_t testSum = get20thCycleSignalStrengthsSum(testInput);
    if (testSum != 13140) {
        printf("Test failed: %d\n", testSum);
        return 1;
    }
    printf("Test passed\n\n");

    printf("Sig strength sum: %d\n", get20thCycleSignalStrengthsSum(input));
    return 0;
}

