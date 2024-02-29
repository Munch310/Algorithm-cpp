#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> frMap;
    int maxFr = 0;
    vector<int> modes;
    
    for(int num : array){
        ++frMap[num];
        maxFr = max(maxFr, frMap[num]);
    }
    
    for(const auto& pair : frMap){
        if(pair.second == maxFr){
            modes.push_back(pair.first);
        }
    }
    if(modes.size() > 1){
        return -1;
    }
    
    return modes.front();
}