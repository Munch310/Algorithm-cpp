#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> possible = {"aya", "ye", "woo", "ma"};
    int answer = 0;
    
    for(const string& word : babbling){
        string prev = "";
        bool isValid = true;
        for(size_t i = 0; i < word.length() && isValid;){
            bool found = false;
            for(const string& sound : possible){
                if(word.substr(i, sound.length()) == sound){
                    if(sound == prev){
                        isValid = false;
                        break;
                    }
                    prev = sound;
                    i += sound.length();
                    found = true;
                    break;
                }
            }
            if(!found) isValid = false;
        }
        if(isValid) answer++;
    }
    return answer;
}