#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(const auto& it : arr){
        answer.push_back(k % 2 == 0 ? it + k : it * k);
    }
    return answer;
}