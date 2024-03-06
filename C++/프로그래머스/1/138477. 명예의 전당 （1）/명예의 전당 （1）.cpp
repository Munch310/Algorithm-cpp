#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> honors;
    for(int i = 0; i < score.size(); ++i){
        if(i < k) honors.push(score[i]);
        else{
            if(score[i] > honors.top()){
                honors.pop();
                honors.push(score[i]);
            }
        }
        answer.push_back(honors.top());
    }
    return answer;
}