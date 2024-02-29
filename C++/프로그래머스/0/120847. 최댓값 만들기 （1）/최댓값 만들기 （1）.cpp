#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    nth_element(numbers.begin(), numbers.end() - 1, numbers.end());
    int largest = numbers.back();

    nth_element(numbers.begin(), numbers.end() - 2, numbers.end() - 1);
    int secondLargest = numbers[numbers.size() - 2];

    return largest * secondLargest;
}
