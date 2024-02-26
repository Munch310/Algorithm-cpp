#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    int originalLength = nums.size();
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    int answer = min((int)nums.size(), originalLength / 2);
    return answer;
}
