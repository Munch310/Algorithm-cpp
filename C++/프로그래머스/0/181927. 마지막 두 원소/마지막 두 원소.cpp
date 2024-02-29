#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int last = num_list.back();
    int secondLast = num_list[num_list.size() - 2];
    num_list.push_back(last > secondLast ? last - secondLast : last * 2);
    return num_list;
}