#include <iostream>
using namespace std;

union Year {
	int ad;
	int dangi;
};

int main() {
	Year myyear;

	cout << "서기를 입력하십시오." << endl;
	cin >> myyear.ad;

	cout << "서기 " << myyear.ad << " 년입니다." << endl;
	cout << "단기 " << myyear.dangi << " 년입니다." << endl;

	return 0;

}

//공용체에는 단 하나의 값만 저장할 수 있다.