#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    size_t pos = my_string.rfind(is_suffix);
    return pos != string::npos && pos == my_string.length() - is_suffix.length() ? 1 : 0;
}