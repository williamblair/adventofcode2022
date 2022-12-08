#include <cassert>
#include <vector>
#include <string>
#include <cstdio>

static std::string input = "plhlsssjsrscspsffmrffwvfvrvvmbbnjnrnrfnndlnlznlznlnccdbbhvbvgvmvzmzvmzmbbrcclsslzslzzsztzftzzhggnjgnjnhnmnqnqqfdfnnrwnwsnwwvgvqqgpptvtrvvfmmzjzmmjssmwsmmhzzvvwzwcwrcrllpbppdgdvvwqvvsnsrnsncnwntnggwqgqhqrqprqrddjvddqsqhshchfffzddswdsshhcnhnqqfjffvlvwvssdqqwrwvrvhrvrzzgwggcjcgclcwchhzvzmzrrjwjqwwvbwwrmmvmpmzpzgpgsghgrrtmmlfmmnzzmpzzvmvjjsqqshqshsqqgtqggpvvrtttwbbhnbnlbnlnhnthtjhjshhrmrjjlclpprmrnrsrwrbwrwwjnwnbwbhbmbggdbgghllcvlvddzbdbdvdwvdvjvqvcvczvcvclvvrggrngrrwcwbcczgghnhznhnttbcbvcvttrrpbrppndppvvvgvtgvvhfvhhttppjmjllznlnldnldlwlnwlnlttgzzcfcggwmgmqgmmshmhqqdfqfpfqppprzrhrnrhnrrtsrrgpgnpngnqnmmrtrvtrrfccszszffvlfvlvssvdvvpggvcvscvvpmpgpqpfqqhttrhhsbhbqhhzggzrgrqrfqffwllggrgqqjzqzzsgglvgllsgllptltblbggvrggctczzllvsvcscrrzjrzzjnnbvvtntpntnvtntcntcnnwsnnnvjnnsccsddcvvgzgwggbnbwnwbwmwttzzsgzzjpzztwztwwhhzggplgplggwwwphpmmhchsccmwmttvjtjftffzbfffjljbbqvvstsggbbqrbqrbrhbbrmbmppvrpphptpggqgddtmdtmdmbbbcdbbgssmzzthhtjjrgjrgrzzchzhttgddjnjrjmjllrcrqqsvsjjjhvvphhgjhgjhjccwmcmjcmjmhmzznmmcbcscddcsssnppsnpnmnqmmtztftqtjtqqgvgvjjfnjffqbqbfqqwfqfcfsfttvccnssjvvpfvpvttvpvccwhwfwlwlclljqqststllgqgzqqfpflpplpssnntstqqpnnsrnsrrsvrsvsrvsrrtztmtptpcpssgnnfvflffscsqszzsppfnftfptfpfnfbbwzbzfbbtggrzrnntztnznhnnlbnbrbdddjhjchhdshhnzhnnsrnrrqwrrdsdlsstdsslqsqdqvqzvqvwqqlmmwzmwzwztzlzczhqfrclvgvnlchrggsrjhntctdbpfdcffwjngdvdrjmgvwvptlvlhvhshqphmrdznqbtchcvrwfrpvwhzmrwlcjwnrsgrqcbsgpwjthstvqzlwjjmqbvhhdfdsmqnmnswmwjtpgjhdpgcnvmlcjwjzrjhmrqmqnrqrmgdnbdgznwhgzncmcbzpntcdflvrbfdzwgpnqjqmrcqpbrzwhwdgtgshhmrwvhnrwslvcswjvdgglfrdvmqdspppwmvfzvdbvpcnhmvgfqwnvjvvzrvttwvbjrbjlllmwtlcltvqmwshnqsdtjrptvqjvdjgzwgzzhcdbwjzhdgsptfrtmmqvhsnsnpgwbncbnnvwmmrrjgfccbzcpcjmqvqsbvjrstzblsrngphwndfdswjnnnfdgpcbslvbjglqqnbbtjljsmdgcslmwlvgwpsqthlmmqfgpgmcvrpvvtzcjdrwcjgrbwthblwpwpbzvjvhzsphmfhfwvsthlfnhhfcmpsnmgrvrntlzpdvqwtrghnslnfhcjwrsvrngqqtwvcsfhbjwmsnmsmgvdhnzjgljtchbtwlfppvbtdclbdjdmwzcntvgfjlcwdplnjwqnzqhnfgcnbrgftqpdmqzrrhglbzzvjcdnbtfnvmsrbjdzhbqmhnsmprgvjzzgvllhqnzgpstqzcnlgsrcwzlhwqvcjlwnnjslmdtwqcpbrntrmrmmtscjwwtzjhghtqvvpldzvhtmspzlnlfgrfhmsndbdgpgvphwwgqhrtlwztgqqsrwnrnqphqfsrtbztqbrgmfbtpjwhhrglhbzmmjptppnfdzlpbqfcbdwzdtqbrvfmtdzdjlnzvqfnzmttpqgzgmrqwmdtmdzrttffpdlgwdhnlrhnnztphvrbzcrlvcpswlngcjhdzqwwwpzdmhhwpnzwgjsdsdbdvpfsrwmwvsggpcqbchwjpgljnbtpvjzbbvgsbsbjmtwtbjtzzsfvrmfvnmcngvvdsvljvjbrlfgstjrhtjplttzhjfbmphvbqdsmwfwspqpcvmgzgjnqlphshlgdwcvtmpwcfgdcbqwpnshfgrfjvlrtqbffwwtbnwtvjlsdgwgfmhlrsmfrjzcwccdzfwwdwhwdsjbllhjsqmnqvngvdmbvbssfjtjfbtngrdwgldcrtpmvrbrmpvwwsfrlnbqsqzfnftpbhslqccnbqwgbdbfpblpmwbgjzmnptnhdjzqjhdrhqbtfhsrdqwlmwzqlsmmslgfzpvtgtsrlszvqrhrzclbqhzzwwfmhrrvsrnsjbdjsqqlsmgdmgbdtmvfjmsbwjqmqrvrhqbchpqrwvlvwpvhjlbdzfjvrwmchccrsrfvhzmpfjqwnrbvqmgwjcbndjdtfgnrzrqwgzhrdvghdrvgtplcrthgchmvwtdrchfwpdszzzhqpmrlzvfdnfnlwghmmwvsscbrdbchhgttsnbzdbqgddqfvcgvqwltnqtcwrmhtftnlwvlglsvvctccnntznsjnmmgqlzmplsdspnjtmzlbvrfzfclnhgjzmvntdwhspqwtpgndspnjqjqwrpwhjhpvjwfptpndnwvcjdwsvdtcrtwpsprgmrspgmcsdgtjbbgsgvcjhrcldlvgvqwqwthplzgwbzmszjfrlnznvgphnqzcwsztvvljlrlzrndbzccstprhntnlmshhclnrsmsvvvsbmpfdjsmspwcqtmlrrdmfzjjjhmsmdfqddzpgtbzbsnhhhpsfrdrdvpvpnjmvnhdrzrqggrpqdcmctvqfrtfmjjqjwgzzbrdfplhzjbnqlmjlcgvmsbpgdlfjmbgqtrvzzdgtlmbqthjrdtlstqtzqvfjvmmstsmtsbnjvstjjvrrjqcbjvhfpslpvjmdznrcnsvlpbpzmslqtpczmvhdwzrhwbwtfvrrmbszvrhwsjrclcscgngwvblbbrqprgshwzhlqgwmpfsmqsvpjbdccdmtnnhqfwvlgjlszmmmdmtmpzwhplzsjztrnwngbvspqqbmghwzgvfjdrblfmtwcvnczsrflmsjmrsvzldmttjwcmnvwcbjfvznhgntnqfbfchcqqshhjldgltqhdlqldlpfjnjvtbvbntzdjzstcqbzdnmsvcdgvjmmvtdfvdplqfndqqlzlspmjgdfbgsvwzqzsvvbbldltbtzwzpqrzfmfzgdbpqnwtrfcgwmlbpzrgscbjvfdwnjzjdfzltsbppnljzrgggplmttpmgwnhdlwfhwzsrcflnrqqzwsbqllwjqlrgwbhvcvqdvjvpbzgnfbbbtccvplzggplbrsbldllwmttwtvltsfljfbbprtvlfshhwdhdgvzfzjttvnphpnjnzsbvfwflfpqwnhvwjdsrtbwsjzqhgfldnssfbbzzqqrwtjvwjschmndgqzjtpsbfhwtmqbtfstrbghgtnldjqtshdnrwzvwddchhvdbsfjnqzfjdpvhvwwjspftgbtgwzdfgzzhpvjpdlrrdfnpftshthwzjzmzdghnfdqcbmjhfdgzrcgrzbrjtmhwbjhcpgjdsmnqzncdlwhqqzqblgdbbdsmrqgbdbmdczvvpnbbjdwrlmrwgnnbbzpcnsjgcmshgzwnjzwjlrdmvmhvjrzphgpczppqvwjthcdphprhhrggjdpzmgtpjjfvpczzrvsssfrrptnzlstrhmbhvzmwjnddshrrtgspbllvqlsptrtvtldsgnjjbwtfmtbjdvmgbptjlzhpttjmvpgnjphswhtdq";

static inline bool fourCharsDifferent(char a, char b, char c, char d)
{
    if (a == b ||
        a == c ||
        a == d ||
        b == c ||
        b == d ||
        c == d)
    {
        return false;
    }
    return true;
}
static size_t countFirst4DiffChars(const std::string& input)
{
    for (size_t i=0; i<input.size()-4; ++i)
    {
        if (fourCharsDifferent(
            input[i+0],
            input[i+1],
            input[i+2],
            input[i+3]))
        {
            return i+3+1;
        }
    }
    assert(false && "Failed to find four different chars");
    return 0;
}

static bool runTests()
{
    if (countFirst4DiffChars("bvwbjplbgvbhsrlpgdmjqwftvncz") != 5) return false;
    if (countFirst4DiffChars("nppdvjthqldpwncqszvftbrmjlhg") != 6) return false;
    if (countFirst4DiffChars("nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg") != 10) return false;
    if (countFirst4DiffChars("zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw") != 11) return false;
    return true;
}

int main()
{
    if (!runTests()) {
        printf("Tests failed\n");
        return 1;
    }
    printf("Tests passed\n\n");

    printf("First different input: %lu\n", countFirst4DiffChars(input));
    return 0;
}

