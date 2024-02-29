#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    double sqrtn = sqrt(n);
    return n % static_cast<int>(sqrtn) == 0 ? 1 : 2;
}