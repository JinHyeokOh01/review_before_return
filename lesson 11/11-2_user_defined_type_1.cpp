//������(enumerated data type)
//enum �������� { �ĺ���1, �ĺ���2, �ĺ���3 };

#include <iostream>
using namespace std;

enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main() {
	Week w; //�������� ���ź�����
	w = SUN;

	switch (w) {
	case SUN: cout << "�Ͽ���" << endl;
		break;
	case MON: cout << "������" << endl;
		break;
	case TUE: cout << "ȭ����" << endl;
		break;
	case WED: cout << "������" << endl;
		break;
	case THU: cout << "�����" << endl;
		break;
	case FRI: cout << "�ݿ���" << endl;
		break;
	case SAT: cout << "�����" << endl;
	}

	return 0;
}