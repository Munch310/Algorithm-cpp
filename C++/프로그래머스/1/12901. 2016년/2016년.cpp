#include <string>
#include <vector>
#include <ctime>
using namespace std;

string solution(int a, int b) {
    tm time = {};
    string answer = "";
    time.tm_year = 116;
    time.tm_mon = a - 1;
    time.tm_mday = b;
    mktime(&time);
    
    switch(time.tm_wday){
        case 0 : answer += "SUN"; break;
        case 1 : answer += "MON"; break;
        case 2 : answer += "TUE"; break;
        case 3 : answer += "WED"; break;
        case 4 : answer += "THU"; break;
        case 5 : answer += "FRI"; break;
        case 6 : answer += "SAT"; break;
    }
    return answer;
}