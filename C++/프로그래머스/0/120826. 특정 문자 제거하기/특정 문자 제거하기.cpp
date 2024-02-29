#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(char &ch : my_string){
        if(letter.find(ch) == string::npos){
            answer += ch;
        }
    }
    return answer;
}