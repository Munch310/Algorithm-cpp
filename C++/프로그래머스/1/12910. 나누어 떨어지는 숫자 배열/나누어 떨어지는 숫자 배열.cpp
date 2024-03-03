#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int it : arr){
        if(it % divisor == 0) answer.emplace_back(it);
    }
    sort(answer.begin(), answer.end());
    if(answer.empty()) answer.emplace_back(-1);
    return answer;
}