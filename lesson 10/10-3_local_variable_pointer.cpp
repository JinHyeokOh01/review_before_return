#include <iostream>
using namespace std;

/*
int* func() {
	int a = 10;
	int* pA = &a;
	return pA;
}

int main() {
	int* pRes = func(); //pRes���� �ǹ̾��� �ּҰ� ����Ǿ������.
}
*/

int* func() {
	static int a = 10;
	int* pA = &a;
	return pA;
}

int main() {
	int* pRes = func();
}