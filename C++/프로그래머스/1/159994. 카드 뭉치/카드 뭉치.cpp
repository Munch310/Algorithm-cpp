#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int index1 = 0, index2 = 0;
    for(int i = 0; i < goal.size(); ++i){
        if(index1 < cards1.size() && goal[i] == cards1[index1]) index1++;
        else if (index2 < cards2.size() && goal[i] == cards2[index2]) index2++;
        else return "No";
    }
    return "Yes";
}