//NULL 문자
//문자열의 마지막에 반드시 '\0'을 붙여라.
//문자열은 char형 배열, 요소 수는 문자열의 길이 +1 이상이 필요함.

#include <iostream>
using namespace std;

int main() {
	char str[] = "Hello"; // 이 방식은 초기화할때만 가능하다. 중간에 대입 불가.
	cout << str << endl;
	return 0;
}