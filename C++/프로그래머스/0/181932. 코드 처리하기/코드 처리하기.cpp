#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for(int i = 0; i < code.length(); i++){
        if(mode == 0){
            if(i % 2 == 0 && code[i] != '1'){
                answer.push_back(code[i]);
            }
            else if(code[i] == '1'){
                mode = 1;
            }
        }
        else if (mode == 1){
            if(i % 2 == 1 && code[i] != '1'){
                answer.push_back(code[i]);
            }
            else if(code[i] == '1'){
                mode = 0;
            }
        }
        
    }
    if(answer.empty()){
        answer = "EMPTY";
    }
    return answer;
}