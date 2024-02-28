#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(string dartResult) {
    vector<int> scores;
    int score = 0;
    char bonus, option;

    for (int i = 0; i < dartResult.length();) {
        score = 0;
        if (isdigit(dartResult[i])) {
            if (dartResult[i + 1] == '0') {
                score = 10;
                i += 2;
            } else {
                score = dartResult[i] - '0';
                i++;
            }
        }

        bonus = dartResult[i++];
        if (bonus == 'D') score = pow(score, 2);
        else if (bonus == 'T') score = pow(score, 3);

        if (i < dartResult.length() && (dartResult[i] == '*' || dartResult[i] == '#')) {
            option = dartResult[i++];
            if (option == '*') {
                if (!scores.empty()) scores.back() *= 2;
                score *= 2;
            } else if (option == '#') {
                score *= -1;
            }
        }

        scores.push_back(score);
    }
    int answer = 0;
    for (int s : scores) answer += s;
    return answer;
}
