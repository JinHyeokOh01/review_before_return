//9장 2번 문제
//문자열의 길이를 알아내는 함수 int length(char* str)를 작성하십시오.
//실제로 키보드로 입력받은 문자열의 길이를 알아내는 코드를 작성하십시오.

#include <iostream>
using namespace std;

int length(char* str);

int main() {
	char ch[100];

	cout << "문자열을 입력하십시오." << endl;
	cin >> ch;
	cout << "문자열의 길이는 " << length(ch) << "입니다.";
	return 0;
}

int length(char* str) {
	int count = 0;
	while (str[count])
		count++;
	return count;
}