#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    for(int i = 0; i < section.size();){
        int start = section[i];
        int end = start + m - 1;
        while(i < section.size() && section[i] <= end){
            i++;
        }
        answer++;
    }
    return answer;
}