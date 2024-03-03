#include <string>
#include <vector>
using namespace std;
bool solution(int x) {
    bool answer = true;
    int v = 0;
    int temp = x;
    while(temp > 0){
        v += temp % 10;
        temp /= 10;
    }
    return x % v == 0 ? answer : !answer;
}