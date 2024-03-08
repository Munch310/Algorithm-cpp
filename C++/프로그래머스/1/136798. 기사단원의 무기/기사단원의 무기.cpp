#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> numbers(number + 1, 0);
    for(int i = 1; i <= number; ++i){
        for(int j = 1; j * j <= i; ++j){
            if(i % j == 0){
                numbers[i] += 2;
                if(j * j == i){
                    numbers[i]--;
                }
            }
        }
    }
    for(int i = 1; i <= number; ++i){
        if(numbers[i] > limit) numbers[i] = power;
    }
    answer = accumulate(numbers.begin(), numbers.end(), 0);
    return answer;
}