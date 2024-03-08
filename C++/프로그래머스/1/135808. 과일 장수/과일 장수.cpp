#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end(), greater<int>());
    int boxes = score.size() / m;
    for(int i = 0; i < boxes; ++i){
        int min_score = score[i * m + (m - 1)];
        answer += min_score * m;
    }
    return answer;
}