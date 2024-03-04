#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    for(char &c : s){
        if(c == ' ') continue;
        if(c >= 'A' && c <= 'Z'){
            c = 'A' + (c - 'A' + n) % 26;
        }
        else if(c >= 'a' && c <= 'z'){
            c = 'a' + (c - 'a' + n) % 26;
        }
    }
    return s;
}