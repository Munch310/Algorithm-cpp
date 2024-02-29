#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(const auto& c : my_string){
        answer += string(n, c);
    }
    return answer;
}