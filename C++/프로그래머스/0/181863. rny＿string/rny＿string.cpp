#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(const auto& ch : rny_string){
        if(ch == 'm') answer += "rn";
        else answer += ch;
    }
    return answer;
}