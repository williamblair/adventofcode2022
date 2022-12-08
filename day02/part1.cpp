#include <cstdio>
#include <map>
#include <array>
#include <vector>

std::vector<std::array<char,2>> testInput = {
{'A','Y'},
{'B','X'},
{'C','Z'}
};

std::vector<std::array<char,2>> input = {
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'C','Z'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'C','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'C','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'A','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','Z'},
{'B','Z'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'C','Z'},
{'C','Z'},
{'A','Z'},
{'A','Y'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'C','X'},
{'B','Z'},
{'B','Z'},
{'C','Z'},
{'B','Z'},
{'B','X'},
{'C','X'},
{'A','Z'},
{'C','X'},
{'B','Z'},
{'A','Y'},
{'C','Z'},
{'B','Y'},
{'C','Y'},
{'B','X'},
{'A','X'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'A','X'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'B','X'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'C','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'C','X'},
{'B','Z'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','X'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'C','Y'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'C','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'B','Y'},
{'C','Y'},
{'C','X'},
{'A','Y'},
{'A','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','Z'},
{'A','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'C','X'},
{'B','Y'},
{'C','Z'},
{'A','Z'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'A','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'C','Z'},
{'B','X'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'A','Z'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'C','Z'},
{'C','X'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'A','Y'},
{'C','X'},
{'B','Y'},
{'A','Y'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'C','Y'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'C','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'A','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'C','X'},
{'A','X'},
{'B','Z'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'C','Z'},
{'A','Y'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'A','X'},
{'A','Z'},
{'C','Z'},
{'B','Y'},
{'C','Z'},
{'B','X'},
{'C','Z'},
{'C','X'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'B','Y'},
{'C','X'},
{'A','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'C','Y'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'C','Z'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Y'},
{'C','Y'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'C','Y'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'C','X'},
{'C','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'A','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','X'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'C','X'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'C','X'},
{'A','Z'},
{'A','X'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'A','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'C','Z'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'C','Z'},
{'B','X'},
{'A','Z'},
{'C','Z'},
{'C','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Y'},
{'B','Y'},
{'C','Z'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'A','Y'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'A','Y'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'C','Y'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'B','Z'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'A','Z'},
{'C','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'A','Y'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'A','Z'},
{'C','X'},
{'C','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'C','Z'},
{'A','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'C','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'C','Z'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'C','X'},
{'C','Z'},
{'A','Y'},
{'A','Z'},
{'C','X'},
{'C','Y'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'A','Y'},
{'C','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'C','Y'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'C','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'B','X'},
{'C','Y'},
{'A','Z'},
{'B','Z'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'C','Z'},
{'A','Z'},
{'C','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'C','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'C','X'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'A','Z'},
{'B','X'},
{'C','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'C','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'A','Y'},
{'C','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'A','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'A','X'},
{'B','X'},
{'C','X'},
{'B','X'},
{'C','X'},
{'B','X'},
{'A','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','Y'},
{'C','X'},
{'A','Z'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'A','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'B','Z'},
{'A','Y'},
{'C','X'},
{'B','X'},
{'B','X'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'A','X'},
{'A','X'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'C','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'C','Z'},
{'A','X'},
{'B','Y'},
{'C','X'},
{'A','X'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'A','X'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'C','Z'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Y'},
{'C','X'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'A','X'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'C','X'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'A','Y'},
{'C','X'},
{'B','Z'},
{'B','Z'},
{'C','Z'},
{'B','Z'},
{'B','Z'},
{'C','Y'},
{'A','Z'},
{'C','Z'},
{'A','Z'},
{'C','Z'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'C','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'C','Z'},
{'A','X'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'C','Y'},
{'B','Z'},
{'B','Z'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','Z'},
{'C','X'},
{'A','Z'},
{'C','X'},
{'A','X'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'C','Z'},
{'B','Y'},
{'C','Z'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'C','Y'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'C','X'},
{'C','Y'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'C','Y'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'B','Z'},
{'A','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','Z'},
{'B','X'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'C','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'A','Y'},
{'A','Z'},
{'C','Y'},
{'B','Z'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','X'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'A','Y'},
{'A','Y'},
{'C','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'C','Y'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'C','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'A','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'C','Z'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'C','Y'},
{'C','Z'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'A','Y'},
{'A','Y'},
{'B','Y'},
{'A','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','Z'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'C','X'},
{'C','X'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'C','Z'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Y'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'C','Z'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'C','Z'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'C','Z'},
{'C','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'B','Z'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'A','Y'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'C','Z'},
{'A','Z'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'C','Z'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'A','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'A','Y'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'C','Y'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'C','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'B','X'},
{'B','X'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'C','Z'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'C','Y'},
{'A','Z'},
{'B','Z'},
{'A','Z'},
{'C','X'},
{'C','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'C','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'C','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'A','X'},
{'A','Z'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'A','Y'},
{'C','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'C','X'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'C','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'C','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'C','Z'},
{'C','X'},
{'A','Z'},
{'A','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'A','Y'},
{'C','X'},
{'B','X'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'C','Y'},
{'C','X'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'C','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'C','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'C','Y'},
{'C','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'A','Y'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'A','X'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'A','Y'},
{'C','X'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'C','Y'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'A','Y'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'C','X'},
{'C','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'A','Z'},
{'C','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'C','X'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'C','Y'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'A','Y'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','Z'},
{'C','X'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'C','Z'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','Z'},
{'B','Z'},
{'C','X'},
{'C','Z'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'C','Z'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'C','X'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'B','Z'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'A','Z'},
{'C','Y'},
{'B','Z'},
{'A','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'C','Z'},
{'B','Y'},
{'A','X'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'C','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'C','Y'},
{'B','X'},
{'A','Z'},
{'C','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'B','X'},
{'B','Z'},
{'C','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'A','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'C','Y'},
{'A','Z'},
{'B','Z'},
{'C','X'},
{'B','X'},
{'C','Z'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','X'},
{'B','Y'},
{'C','Z'},
{'A','Z'},
{'B','X'},
{'C','Z'},
{'C','Z'},
{'B','X'},
{'A','Z'},
{'B','X'},
{'C','Z'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'C','Z'},
{'C','X'},
{'B','Y'},
{'C','Y'},
{'B','Z'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'A','Z'},
{'C','X'},
{'A','Z'},
{'C','X'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Y'},
{'B','Y'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'A','Y'},
{'A','Z'},
{'C','X'},
{'A','Z'},
{'C','X'},
{'A','X'},
{'B','Y'},
{'B','Y'},
{'A','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'C','X'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'C','Z'},
{'C','Z'},
{'C','Z'},
{'C','X'},
{'B','Y'},
{'C','Z'},
{'A','Z'},
{'C','Z'},
{'B','Y'},
{'A','Z'},
{'B','Z'},
{'B','X'},
{'A','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'A','Z'},
{'C','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'B','Z'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'B','Y'},
{'C','X'},
{'A','Z'},
{'C','Z'},
{'B','X'},
{'A','Z'},
{'B','Y'},
{'B','Y'},
{'C','Z'},
{'B','Z'},
{'A','Z'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','Z'},
{'C','Z'},
{'A','Y'},
{'A','Z'},
{'B','X'},
{'B','X'},
{'A','Z'},
{'C','Y'},
{'B','Y'},
{'A','X'},
{'A','Z'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'A','Z'},
{'C','X'},
{'B','Y'},
{'B','Y'},
{'C','X'},
{'A','X'},
{'B','Y'},
{'A','Z'},
{'A','Z'},
{'B','Y'},
{'B','Z'},
{'B','Y'},
{'B','Y'},
{'B','Y'},
{'B','X'},
{'B','Y'},
{'B','X'},
{'B','X'},
{'B','X'},
{'B','Y'},
{'A','Z'},
{'C','X'},
{'A','Z'},
{'A','Z'},
{'A','X'},
{'A','Z'},
{'B','X'},
{'B','Z'},
{'B','Y'},
{'A','Z'}
};

std::map<char,int> scoreMap = {
    {'A',1},
    {'B',2},
    {'C',3},
    {'X',1},
    {'Y',2},
    {'Z',3}
};

namespace OpponentChars
{
static const char Rock = 'A';
static const char Paper = 'B';
static const char Scissors = 'C';
}

namespace PlayerChars
{
static const char Rock = 'X';
static const char Paper = 'Y';
static const char Scissors = 'Z';
}

namespace OutcomeScores
{
static const int Lost = 0;
static const int Draw = 3;
static const int Won = 6;
}

static inline int calcPlayerRoundScore(char opponentChar, char playerChar)
{
    int score = 0;
    int outcomeScore = 0;
    switch (opponentChar)
    {
    case OpponentChars::Rock:
        switch (playerChar)
        {
        case PlayerChars::Rock:
            outcomeScore = OutcomeScores::Draw;
            break;
        case PlayerChars::Paper:
            outcomeScore = OutcomeScores::Won;
            break;
        case PlayerChars::Scissors:
            outcomeScore = OutcomeScores::Lost;
            break;
        default:
            break;
        }
        break;
    case OpponentChars::Paper:
        switch (playerChar)
        {
        case PlayerChars::Rock:
            outcomeScore = OutcomeScores::Lost;
            break;
        case PlayerChars::Paper:
            outcomeScore = OutcomeScores::Draw;
            break;
        case PlayerChars::Scissors:
            outcomeScore = OutcomeScores::Won;
            break;
        default:
            break;
        }
        break;
    case OpponentChars::Scissors:
        switch (playerChar)
        {
        case PlayerChars::Rock:
            outcomeScore = OutcomeScores::Won;
            break;
        case PlayerChars::Paper:
            outcomeScore = OutcomeScores::Lost;
            break;
        case PlayerChars::Scissors:
            outcomeScore = OutcomeScores::Draw;
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
    score = scoreMap[playerChar];
    return score + outcomeScore;
}

static int runGameStrategy(const std::vector<std::array<char,2>>& input)
{
    int playerTotalScore = 0;
    for (const std::array<char,2>& opponentPlayerChars : input)
    {
        playerTotalScore += calcPlayerRoundScore(opponentPlayerChars[0], opponentPlayerChars[1]);
    }
    return playerTotalScore;
}

int main()
{
    if (runGameStrategy(testInput) != 15) {
        printf("Test failed\n");
    }
    printf("test passed\n");

    printf("Player total score: %d\n", runGameStrategy(input));
    return 0;
}


