//6장 3번 문제
//다음과 같이 화면에 출력하는 코드를 작성하십시오.
/*
* 
**
***
****
*****
*/

#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}