#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(const auto& it : myString){
        answer += tolower(it);
    }
    return answer;
}