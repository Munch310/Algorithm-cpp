#include <cmath>

using namespace std;

long long solution(long long n) {
    long long v = sqrt(n);
    return v * v == n ? pow(v + 1, 2) : -1;
}