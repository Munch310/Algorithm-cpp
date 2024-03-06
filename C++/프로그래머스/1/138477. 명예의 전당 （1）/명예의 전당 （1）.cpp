#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honors;
    for(int i = 0; i < score.size(); ++i){
        if(i < k){
            honors.emplace_back(score[i]);
        } else {
            sort(honors.begin(), honors.end(), greater<int>());
            if(score[i] > honors.back()){
                honors.pop_back();
                honors.emplace_back(score[i]);
            }
        }
        sort(honors.begin(), honors.end());
        answer.emplace_back(honors.front());
    }
    return answer;
}