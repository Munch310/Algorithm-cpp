#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int it : arr){
        answer.push_back((it >= 50 && it % 2 == 0) ? it / 2 : 
                        (it < 50 && it % 2 != 0) ? it * 2 : it);
    }
    return answer;
}