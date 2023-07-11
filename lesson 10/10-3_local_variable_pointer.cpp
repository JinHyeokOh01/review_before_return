#include <iostream>
using namespace std;

/*
int* func() {
	int a = 10;
	int* pA = &a;
	return pA;
}

int main() {
	int* pRes = func(); //pRes에는 의미없는 주소가 저장되어버린다.
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