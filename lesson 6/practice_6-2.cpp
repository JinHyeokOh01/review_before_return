//6장 2번 문제
//키보드로 시험 점수를 입력받은 후, 그 합계를 출력하는 코드를 작성하십시오. 0을 입력받으면 결과를 출력받도록 합니다.
/*
시험 점수를 입력하십시오. (0으로 종료)
52(입력)
68(입력)
75(입력)
83(입력)
36(입력)
0
시험 점수의 합계는 314점 입니다.
*/

#include <iostream>
using namespace std;

int main() {
	int num = 1, sum = 0;
	cout << "시험 점수를 입력하십시오. (0 입력시 종료)" << endl;
	while (num) {
		cin >> num;
		sum += num;
	}
	cout << "시험 점수의 합계는 " << sum << "점 입니다." << endl;

	return 0;
}