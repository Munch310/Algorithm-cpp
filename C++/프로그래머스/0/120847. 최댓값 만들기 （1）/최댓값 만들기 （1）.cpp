#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    nth_element(numbers.begin(), numbers.end() - 2, numbers.end());
    int secondLargest = numbers[numbers.size() - 2];

    return numbers.back() * secondLargest;
}