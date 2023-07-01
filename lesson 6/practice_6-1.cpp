//6장 1번 문제
//다음과 같이 화면에 출력하는 코드를 작성하십시오.
/*
1 ~ 10까지의 짝수를 출력합니다.
2
4
6
8
10
*/

#include <iostream>
using namespace std;

int main() {
	cout << "1 ~ 10까지의 짝수를 출력합니다." << endl;
	for (int i = 1; i <= 10; i++) {
		if (!(i % 2))
			cout << i << endl;
		else
			continue;
	}
	return 0;
}