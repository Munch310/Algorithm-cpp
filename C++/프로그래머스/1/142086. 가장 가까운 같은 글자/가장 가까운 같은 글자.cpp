#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    unordered_map<char, int> lastPos;
    vector<int> answer;
    for(int i = 0; i < s.length(); ++i){
        char c = s[i];
        if(lastPos.find(c) != lastPos.end()){
            answer.emplace_back(i - lastPos[c]);
        } else {
            answer.emplace_back(-1);
        }
        lastPos[c] = i;
    }
    return answer;
}