#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int price) {
    return static_cast<int>(
        price >= 500000 ? 0.8 * price : 
        price >= 300000 ? 0.9 * price :
        price >= 100000 ? 0.95 * price :
        price
    );
}