#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(const auto& it : numbers){
        answer.push_back(it * 2);
    }
    return answer;
}