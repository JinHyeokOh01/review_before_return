//����ü(structure data type)
//�ٸ� ������ �����ִ� ���
//����ü�� ���� : � ���� ������ �����ϴ� ��

/*
struct ����ü����{
	���� �ĺ���;
	���� �ĺ���;
};

*/

//����ü���� ����ü ������;

//�� ������ ��� ��� �θ�. ����� �̿��ϱ� ���ؼ��� ��Ʈ ������(.) �̿�. ����� �����Ѵ�.

#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

int main() {
	Car car1;

	cout << "���� ��ȣ�� �Է��Ͻʽÿ�." << endl;
	cin >> car1.num;

	cout << "���ᷮ�� �Է��Ͻʽÿ�." << endl;
	cin >> car1.gas;

	cout << "���� ��ȣ�� " << car1.num << " : ���ᷮ�� " << car1.gas << "�Դϴ�." << endl;

	return 0;
}