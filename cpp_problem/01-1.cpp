#include <iostream>
using namespace std;
int main() {
	int sell_price;
	while (true) {
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> sell_price;
		if (sell_price == -1) {
			cout << "���α׷��� �����մϴ�" << endl;
			break;
		}
		cout << "�̹� �� �޿�: " << 50 + sell_price * 0.12 << "����" << endl;
	}
	return 0;
}