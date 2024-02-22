#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    int length = end_num - start_num;
    for(int i = 0; i <= length; i++){
        answer.push_back(start_num + i);
    }
    return answer;
}