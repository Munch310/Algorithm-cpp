#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int i = 0; i < code.length(); i++){
        if(code[i] == '1'){
            mode = !mode;
            continue;
        }
        if((mode && i % 2 == 1) || (!mode && i % 2 == 0)){
            answer.push_back(code[i]);
        }
    }
    if(answer.empty()){
        answer = "EMPTY";
    }
    return answer;
}
