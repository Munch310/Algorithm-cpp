#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> failRate;
    
    for (int i = 1; i <= N; i++){
        int notCleared = 0;
        int reached = 0;
        
        for (int j = 0; j < stages.size(); j++){
            if (stages[j] > i){
                reached++;
            } else if (stages[j] == i){
                notCleared++;
                reached++;
            }
        }
        
        double rate = reached > 0 ? (double)notCleared / reached : 0;
        failRate.push_back({-rate, i});
    }
    sort(failRate.begin(), failRate.end());
    
    for (auto& fr : failRate){
        answer.push_back(fr.second);
    }
    return answer;
}