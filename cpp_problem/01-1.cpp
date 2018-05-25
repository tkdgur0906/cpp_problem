#include <iostream>
using namespace std;
int main() {
	int sell_price;
	while (true) {
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> sell_price;
		if (sell_price == -1) {
			cout << "프로그램을 종료합니다" << endl;
			break;
		}
		cout << "이번 달 급여: " << 50 + sell_price * 0.12 << "만원" << endl;
	}
	return 0;
}