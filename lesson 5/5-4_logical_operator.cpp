#include <iostream>
using namespace std;

int main() {
	char res = 0;
	cout << "당신은 남성입니까?" << endl;
	cout << "Y 또는 N을 입력하십시오." << endl;

	cin >> res;

	if (res == 'Y' || res == 'y')
		cout << "당신은 남성이군요." << endl;
	else if (res == 'N' || res == 'n')
		cout << "당신은 여성이군요." << endl;
	else
		cout << "Y 또는 N을 입력하십시오." << endl;
	return 0;
}