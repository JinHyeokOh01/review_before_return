//6�� 1�� ����
//������ ���� ȭ�鿡 ����ϴ� �ڵ带 �ۼ��Ͻʽÿ�.
/*
1 ~ 10������ ¦���� ����մϴ�.
2
4
6
8
10
*/

#include <iostream>
using namespace std;

int main() {
	cout << "1 ~ 10������ ¦���� ����մϴ�." << endl;
	for (int i = 1; i <= 10; i++) {
		if (!(i % 2))
			cout << i << endl;
		else
			continue;
	}
	return 0;
}