#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer = strArr;
    for(size_t i = 0; i < answer.size(); ++i){
        if(i % 2 == 0){
            for(char &ch : answer[i]){
                ch = tolower(static_cast<unsigned char>(ch));
            }
        } else {
            for(char &ch : answer[i]){
                ch = toupper(static_cast<unsigned char>(ch));
            }
        }
    }
    return answer;
}