//같은 형의 값을 동시에 여러 개 기억하기
//형명 배열명[요소 개수];
//[] 안에 번호는 첨자(인덱스, index)라고 함.

#include <iostream>
using namespace std;

int main() {
	//배열 초기화
	//int test[5] = { 80, 60, 22, 50, 75 };
	//or int test[] = { 80, 60, 22, 50, 75 };
	//{}안에 작성된 값은 초기자(initializer)
	//배열을 초기화하면 선언과 동시에 값이 저장된다.

	const int num = 5; //상수
	int test[num];

	cout << num << "명의 점수를 입력하십시오." << endl;

	for (int i = 0; i < num; i++)
		cin >> test[i];
	for (int j = 0; j < num; j++)
		cout << j + 1 << "번째 사람의 점수는 " << test[j] << "입니다." << endl;
	return 0;
}