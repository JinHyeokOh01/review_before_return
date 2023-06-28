//5장 3번 문제
//키보드로 1에서 5까지, 5단계 성적을 입력받은 후, 경우에 따라 다음과 같은 메시지를 출력하는 코드를 작성하십시오.
/*
성적 1, 성적은 1입니다. 노력합시다.
성적 2, 성적은 2입니다. 조금 더 노력합시다.
성적 3, 성적은 3입니다. 더 높은 점수를 목표로 합시다.
성적 4, 성적은 4입니다. 매우 잘했습니다.
성적 5, 성적은 5입니다. 매우 우수합니다.
*/

#include <iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "성적을 입력하십시오." << endl;
	cin >> score;

	switch (score) {
	case 1:
		cout << "성적은 1입니다. 노력합시다." << endl;
		break;
	case 2:
		cout << "성적은 2입니다. 조금 더 노력합시다." << endl;
		break;
	case 3:
		cout << "성적은 3입니다. 더 높은 점수를 목표로 합시다." << endl;
		break;
	case 4:
		cout << "성적은 4입니다. 매우 잘했습니다." << endl;
		break;
	case 5:
		cout << "성적은 5입니다. 매우 우수합니다." << endl;
		break;
	default:
		cout << "1에서 5 사이의 값을 입력하십시오." << endl;
		break;
	}
	return 0;
}