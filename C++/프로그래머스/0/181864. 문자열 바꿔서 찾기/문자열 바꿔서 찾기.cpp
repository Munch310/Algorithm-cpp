#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string temp = "";
    for(char ch : myString){
        ch == 'A' ? temp += 'B' : temp += 'A';
    }
    return temp.find(pat) != string :: npos ? 1 : 0;
}