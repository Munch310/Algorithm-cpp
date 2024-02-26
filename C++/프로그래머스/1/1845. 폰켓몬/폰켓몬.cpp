#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums) {
    unordered_set<int> pokemonTypes(nums.begin(), nums.end());
    int maxTypes = min(pokemonTypes.size(), nums.size() / 2);
    return maxTypes;
}
