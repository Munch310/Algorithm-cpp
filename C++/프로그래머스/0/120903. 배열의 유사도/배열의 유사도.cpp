#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(const auto& s1save : s1){
        if(find(s2.begin(), s2.end(), s1save) != s2.end()){
            answer++;
        }
    }
    return answer;
}