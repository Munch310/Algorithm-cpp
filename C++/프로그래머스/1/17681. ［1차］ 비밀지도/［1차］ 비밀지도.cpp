#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);

    for(int i = 0; i < n; i++){
        bitset<16> bit1(arr1[i]);
        bitset<16> bit2(arr2[i]);

        string mapLine = "";
        for(int j = n - 1; j >= 0; j--){
            mapLine += (bit1[j] | bit2[j]) ? '#' : ' ';
        }
        answer[i] = mapLine;
    }

    return answer;
}
