//5장 1번 문제
//키보드로 정수값을 입력받은 후 다음과 같은 메시지를 출력하는 코드를 작성하십시오.
/*
값이 짝수인 경우 -> 'o(은)는 짝수입니다.'
값이 홀수인 경우 -> 'o(은)는 홀수입니다.'
단, o은 입력한 정수
*/

#include <iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "정수를 입력하십시오." << endl;
	cin >> num;
	
	if (num % 2)
		cout << num << "(은)는 홀수입니다." << endl;
	else
		cout << num << "(은)는 짝수입니다." << endl;

	return 0;
}