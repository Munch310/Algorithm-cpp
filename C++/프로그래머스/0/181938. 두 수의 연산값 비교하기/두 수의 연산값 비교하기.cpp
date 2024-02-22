#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int length = b > 0 ? (int) log10(b) + 1 : 1;
    int ab = a * pow(10, length) + b;
    int answer = 2 * a * b;
    return (ab > answer || ab == answer) ? ab : answer;
}