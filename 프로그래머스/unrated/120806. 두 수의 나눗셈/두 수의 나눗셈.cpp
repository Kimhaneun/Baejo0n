#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
	int answer = 0;
	float a = 0;
	a = (float)num1 /(float)num2;
	answer = a * 1000;
	return answer;
}