#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string vowels = "aeiou";
    for(char &ch : my_string){
        if(vowels.find(ch) == string::npos){
            answer += ch;
        }
    }
    return answer;
}