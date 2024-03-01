#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int multiple = 1;
    int sum = 0;
    for(int i = 0; i < num_list.size(); i++){
        multiple *= num_list[i];
        sum += num_list[i];
    }
    return multiple < (sum * sum) ? 1 : 0;
}