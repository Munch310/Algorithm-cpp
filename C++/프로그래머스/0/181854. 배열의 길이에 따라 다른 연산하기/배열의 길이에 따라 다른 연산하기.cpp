#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer = arr;
    int startIndex = arr.size() % 2 == 0 ? 1 : 0;
    for(int i = startIndex; i < arr.size(); i += 2){
        answer[i] += n;
    }
    return answer;
}