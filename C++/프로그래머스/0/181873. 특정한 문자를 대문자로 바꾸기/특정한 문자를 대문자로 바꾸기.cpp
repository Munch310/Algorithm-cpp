#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for(char ch : my_string){
        ch == alp[0] ? answer += toupper(ch) : answer += ch;
    }
    return answer;
}