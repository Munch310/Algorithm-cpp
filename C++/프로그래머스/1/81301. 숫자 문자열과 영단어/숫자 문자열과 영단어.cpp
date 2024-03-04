#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string s) {
    unordered_map<string, int> wordToNum = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };
    string answerStr = "";
    string tempWord = "";
    for(char c : s){
        if(isdigit(c)){
            answerStr += c;
        } else {
            tempWord += c;
            if(wordToNum.find(tempWord) != wordToNum.end()){
                answerStr += to_string(wordToNum[tempWord]);
                tempWord = "";
            }
        }
    }
    int answer = stoi(answerStr);
    return answer;
}