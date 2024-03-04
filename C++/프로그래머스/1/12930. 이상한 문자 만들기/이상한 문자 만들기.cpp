#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for(char c : s){
        if(isalpha(c)){
            answer += idx % 2 == 0 ? toupper(c) : tolower(c);
            idx++;
        }else{
            answer += c;
            idx = 0;
        }
    }
    return answer;
}