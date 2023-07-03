//형명 배열명[요소 개수][요소 개수];
#include <iostream>
using namespace std;

int main() {
	const int sub = 2;
	const int num = 5;

	int test[sub][num];

	cout << "책에 제시된 값 입력" << endl;

	for (int i = 0; i < sub; i++) {
		for (int j = 0; j < num; j++) {
			cin >> test[i][j];
		}
	}

	for (int k = 0; k < num; k++) {
		cout << k + 1 << "번째 사람의 국어 점수는 " << test[0][k] << "입니다." << endl;
		cout << k + 1 << "번째 사람의 산수 점수는 " << test[1][k] << "입니다." << endl;
	}
	

	/*range based for (형 변수 이름 : 배열 이름) {
	}
	*/

	for (int a : test[0]) {
		cout << a << endl;
	}

}

/*
다차원 배열의 초기화
int test[2][5] = { {80, 60, 22, 50, 75}, {90, 55, 68, 72, 58} }
첫 번째 요소 수는 생략 가능
*/