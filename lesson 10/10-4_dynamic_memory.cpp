//포인터 = new 형명;
//동적으로 확보했으면 이 주소를 사용하여 직접 접근해야함.
//delete 포인터 명;

#include <iostream>
using namespace std;

int main() {
	int* pA;
	pA = new int;
	cout << "동적으로 메모리를 확보함." << endl;
	*pA = 10;
	cout << "동적으로 확보한 메모리를 사용하여 " << *pA << "를 출력했습니다." << endl;
	delete pA;
	cout << "확보한 메모리를 해제했습니다." << endl;

	return 0;
}