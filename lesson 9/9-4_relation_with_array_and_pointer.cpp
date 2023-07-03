//&test[0] : 배열의 0번째 요소의 주소
//test : 배열 이름만 그대로 사용하면 배열의 첫 번째 요소의 주소를 나타냄 = &test[0]

#include <iostream>
using namespace std;

int main() {
	int test[] = { 80, 60, 55, 22, 75 };
	cout << "test[0]의 값 : " << test[0] << endl;
	cout << "test[0]의 주소는 " << &test[0] << endl;
	cout << "test의 값은 " << test << "입니다." << endl;
	cout << "즉 *test의 값은" << *test << "입니다." << endl;

	return 0;
}

/*
포인터 연산
+ : 다음 요소의 주소
- : 이전 요소의 주소
p1-p2 : p1과 p2 사이에 존재하는 요소의 개수
++ : 다음 요소의 주소
-- : 이전 요소의 주소
*/

//배열명으로 가리킨 포인터에는 다른 주소를 대입할 수 없다.