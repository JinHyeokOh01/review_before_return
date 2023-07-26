//열거형(enumerated data type)
//enum 열거형명 { 식별자1, 식별자2, 식별자3 };

#include <iostream>
using namespace std;

enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main() {
	Week w; //열거형명 열거변수명
	w = SUN;

	switch (w) {
	case SUN: cout << "일요일" << endl;
		break;
	case MON: cout << "월요일" << endl;
		break;
	case TUE: cout << "화요일" << endl;
		break;
	case WED: cout << "수요일" << endl;
		break;
	case THU: cout << "목요일" << endl;
		break;
	case FRI: cout << "금요일" << endl;
		break;
	case SAT: cout << "토요일" << endl;
	}

	return 0;
}