#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> stageReached(N+1, 0);
    vector<int> stageNotCleared(N+1, 0);
    vector<pair<double, int>> failRate;
    
    for(int stage : stages){
        if(stage <= N){
            stageNotCleared[stage]++;
        }
        for(int i = 1; i <= stage && i <= N; i++){
            stageReached[i]++;
        }
    }
    
    for(int i = 1; i <= N; i++){
        double rate = stageReached[i] > 0 ? (double) stageNotCleared[i] / stageReached[i] : 0;
        failRate.push_back({-rate, i});
    }
    
    sort(failRate.begin(), failRate.end());
    
    for(auto& fr : failRate){
        answer.push_back(fr.second);
    }
    return answer;
}