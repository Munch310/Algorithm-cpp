#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer;
    if(num_list.size() <= 10){
        answer = 1;
        for(const auto& it : num_list){
            answer *= it;
        }
    } else{
        answer = 0;
        for(const auto& it : num_list){
            answer += it;
        }
    }
    return answer;
}