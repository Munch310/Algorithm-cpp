#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    int sqrtNum = (int)sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) return false;
    }

    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int n = nums.size();

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = nums[i] + nums[j] + nums[k];
                if (isPrime(sum)) answer++;
            }
        }
    }

    return answer;
}