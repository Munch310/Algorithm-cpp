#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(int it : arr){
        if(find(delete_list.begin(), delete_list.end(), it) == delete_list.end()){
            answer.emplace_back(it);
        }
    }
    return answer;
}