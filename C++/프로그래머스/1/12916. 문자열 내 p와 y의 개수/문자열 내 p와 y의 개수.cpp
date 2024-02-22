#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int countp = 0;
    int county = 0;
    for(int i = 0; i < s.size(); i++){
        char lowerChar = tolower(s[i]);
        if(lowerChar == 'p'){
            countp++;
        }
        else if(lowerChar == 'y'){
            county++;
        }            
    }
    return countp == county;
}
