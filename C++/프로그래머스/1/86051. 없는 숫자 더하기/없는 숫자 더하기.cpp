#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int temp = 0;
    for(int it : numbers){
        temp += it;
    }
    return 45 - temp;
}