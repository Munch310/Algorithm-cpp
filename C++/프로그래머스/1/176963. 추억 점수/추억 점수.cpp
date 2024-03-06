#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> scores;
    for(int i = 0; i < name.size(); ++i){
        scores.emplace(name[i], yearning[i]);
    }
    for(const auto& group : photo){
        int groupSum = 0;
        for(const auto& name : group){
            auto it = scores.find(name);
            if(it != scores.end()){
                groupSum += it -> second;
            }
        }
        answer.emplace_back(groupSum);
    }
    return answer;
}