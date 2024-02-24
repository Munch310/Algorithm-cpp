#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    int answer = 0;
    for(int cost : d) {
        if(budget < cost) break;
        budget -= cost;
        answer++;
    }
    return answer;
}
