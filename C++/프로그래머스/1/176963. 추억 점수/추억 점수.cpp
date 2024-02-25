#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i = 0; i < photo.size(); i++){
        int photoYearning = 0;
        for(int j = 0; j < name.size(); j++){
            for(int k = 0; k < photo[i].size(); k++){
                if(name[j] == photo[i][k]){
                    photoYearning += yearning[j];
                    break;
                }
            }
        }
        answer.push_back(photoYearning);
    }
    return answer;
}