/*
	(형명) 식

	캐스트 연산자는,

	지정한 식의 형을 () 안에서 지정한 형으로 변환시키는 연산을 수행
*/

#include <iostream>
using namespace std;

int main() {
	double dnum = 160.5;
	int inum = 0;
	inum = (int)dnum;

	cout << inum;

	return 0;

}