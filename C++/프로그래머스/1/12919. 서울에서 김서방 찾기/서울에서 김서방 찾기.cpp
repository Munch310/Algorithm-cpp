#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    int pos = it - seoul.begin();
    return "김서방은 " + to_string(pos) + "에 있다";
}