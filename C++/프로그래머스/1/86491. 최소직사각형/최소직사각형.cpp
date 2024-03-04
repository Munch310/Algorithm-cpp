#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxW = 0;
    int maxH = 0;
    for(auto size : sizes){
        int w = max(size[0], size[1]);
        int h = min(size[0], size[1]);
        
        maxW = max(maxW, w);
        maxH = max(maxH, h);
    }
    return maxW * maxH;
}