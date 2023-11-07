#include <string>
#include <vector>

using namespace std;
int solution(string s) {
    int answer = 0;
    string num[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    string str;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') answer = answer * 10 + s[i] - '0'; //isdigit(s[i])
        else {
            str += s[i];
            for (int i = 0; i < 10; i++) {
                if (str == num[i]) {
                    answer = answer * 10 + i;
                    str.clear();
                }

            }
        }
    }
    return answer;
}