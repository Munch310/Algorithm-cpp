#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> hashTable;
    for(const auto& person : participant){
        hashTable[person]++;
    }
    for(const auto& person : completion){
        hashTable[person]--;
    }
    for(const auto& item : hashTable){
        if(item.second > 0){
            return item.first;
        }
    }
    return "";
}