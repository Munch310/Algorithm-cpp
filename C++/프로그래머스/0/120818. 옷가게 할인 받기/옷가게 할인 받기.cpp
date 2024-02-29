#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int price) {
    double discount = 0.0;
    if(price >= 500000){
        discount = 0.2;
    } else if(price >= 300000){
        discount = 0.1;
    } else if(price >= 100000){
        discount = 0.05;
    }
    double discountedPrice = price - (price * discount);
    return static_cast<int>(floor(discountedPrice));
}