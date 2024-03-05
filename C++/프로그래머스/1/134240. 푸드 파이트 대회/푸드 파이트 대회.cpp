#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int n = food.size();
    vector<int> eat(n, 0);
    for(int i = 1; i < n; ++i){
        eat[i] = food[i] / 2;
    }
    for(int i = 1; i < n; ++i){
        answer.append(eat[i], '0' + i);
    }
    answer += '0';
    for(int i = n - 1; i >= 1; --i){
        answer.append(eat[i], '0' + i);
    }
    return answer;
}