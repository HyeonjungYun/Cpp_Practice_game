#include <iostream>
#include <string>

using namespace std;

enum equipment {
	HAT =			0b00000001,
	UP_CLOTH =		0b00000010,
	DOWN_CLOTH =	0b00000100,
	SHOES =			0b00001000,
	GLOVES =		0b00010000,
	SHEILD = 		0b00100000,
	WEAPON = 		0b01000000
};

//#define HAT			0b00000001
//#define UP_CLOTH	0b00000010
//#define DOWN_CLOTH	0b00000100
//#define SHOES		0b00001000
//#define GLOVES		0b00010000
//#define SHEILD		0b00100000
//#define WEAPON		0b01000000

int selectMenu() {
	int insertMenu;

	cout << "�޴��� �����ϼ���" << endl;
	cout << "1.�������" << endl;
	cout << "2.�������" << endl;
	cout << "3.�������" << endl;
	cout << "4.����" << endl;
	cin >> insertMenu;

	return insertMenu;
}

void printEquipmentStatus(int user) {
	int check = 1;

	string nameEquipment[7];
	nameEquipment[0] = "����";
	nameEquipment[1] = "����";
	nameEquipment[2] = "����";
	nameEquipment[3] = "�Ź�";
	nameEquipment[4] = "�尩";
	nameEquipment[5] = "����";
	nameEquipment[6] = "����";

	for (int i = 0; i <= 6; i++) {
		if ((user & check) == check) cout << nameEquipment[i] << " ����" << endl;
		if ((user & check) != check) cout << nameEquipment[i] << " ������" << endl;

		check <<= 1;
	}

	cout << endl;
}

int equipEquipment(int user) {
	int selectEquipment;
	cout << "� ��� �����ϰڽ��ϱ�?\n1.����\n2.����\n3.����\n4.�Ź�\n5.�尩\n6.����\n7.����" << endl;
	cin >> selectEquipment;

	if (selectEquipment == 1) {
		if ((user & HAT) == HAT) {
			cout << "�̹� ���� ���Դϴ�.\n" << endl;
		}if ((user & HAT) != HAT) {
			user |= HAT;
			cout << "���ڸ� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 2) {
		if ((user & UP_CLOTH) == UP_CLOTH) {
			cout << "�̹� ���� ���Դϴ�.\n" << endl;
		}if ((user & UP_CLOTH) != UP_CLOTH) {
			user |= UP_CLOTH;
			cout << "���Ǹ� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 3) {
		if ((user & DOWN_CLOTH) == DOWN_CLOTH) {
			cout << "�̹� ���� ���Դϴ�.\n" << endl;
		}if ((user & DOWN_CLOTH) != DOWN_CLOTH) {
			user |= DOWN_CLOTH;
			cout << "���Ǹ� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 4) {
		if ((user & SHOES) == SHOES) {
			cout << "�̹� ���� ���Դϴ�.\n" << endl;
		}if ((user & SHOES) != SHOES) {
			user |= SHOES;
			cout << "�Ź��� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 5) {
		if ((user & GLOVES) == GLOVES) {
			cout << "�̹� ���� ���Դϴ�.\n" << endl;
		}if ((user & GLOVES) != GLOVES) {
			user |= GLOVES;
			cout << "�尩�� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 6) {
		if ((user & SHEILD) == SHEILD) {
			cout << "�̹� ���� ���Դϴ�.\n" << endl;
		}if ((user & SHEILD) != SHEILD) {
			user |= SHEILD;
			cout << "�尩�� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 7) {
		if ((user & WEAPON) == WEAPON) {
			cout << "�̹� ���� ���Դϴ�.\n" << endl;
		}if ((user & WEAPON) != WEAPON) {
			user |= WEAPON;
			cout << "���⸦ �����߽��ϴ�.\n" << endl;
		}
	}

	return user;
}

int releaseEquipment(int user) {
	int selectEquipment;
	cout << "� ��� �����ϰڽ��ϱ�?\n1.����\n2.����\n3.����\n4.�Ź�\n5.�尩\n6.����\n7.����" << endl;
	cin >> selectEquipment;

	if (selectEquipment == 1) {
		if ((user & HAT) != HAT) {
			cout << "�̹� ���� ���� �ƴմϴ�.\n" << endl;
		}if ((user & HAT) == HAT) {
			user -= HAT;
			cout << "���ڸ� ���� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 2) {
		if ((user & UP_CLOTH) != UP_CLOTH) {
			cout << "�̹� ������ �ƴմϴ�.\n" << endl;
		}if ((user & UP_CLOTH) == UP_CLOTH) {
			user -= UP_CLOTH;
			cout << "���Ǹ� ���� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 3) {
		if ((user & DOWN_CLOTH) != DOWN_CLOTH) {
			cout << "�̹� ���� ���� �ƴմϴ�.\n" << endl;
		}if ((user & DOWN_CLOTH) == DOWN_CLOTH) {
			user -= DOWN_CLOTH;
			cout << "���Ǹ� ���� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 4) {
		if ((user & SHOES) != SHOES) {
			cout << "�̹� ���� ���� �ƴմϴ�.\n" << endl;
		}if ((user & SHOES) == SHOES) {
			user -= SHOES;
			cout << "�Ź��� ���� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 5) {
		if ((user & GLOVES) != GLOVES) {
			cout << "�̹� ���� ���� �ƴմϴ�.\n" << endl;
		}if ((user & GLOVES) == GLOVES) {
			user -= GLOVES;
			cout << "�尩�� ���� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 6) {
		if ((user & SHEILD) != SHEILD) {
			cout << "�̹� ���� ���� �ƴմϴ�.\n" << endl;
		}if ((user & SHEILD) == SHEILD) {
			user -= SHEILD;
			cout << "�尩�� ���� �����߽��ϴ�.\n" << endl;
		}
	}if (selectEquipment == 7) {
		if ((user & WEAPON) != WEAPON) {
			cout << "�̹� ���� ���� �ƴմϴ�.\n" << endl;
		}if ((user & WEAPON) == WEAPON) {
			user -= WEAPON;
			cout << "���⸦ ���� �����߽��ϴ�.\n" << endl;
		}
	}

	return user;
}

int main() {
	int user = 0;
	// a�� ���� ������ ���� ���� ����

	while (1) {
		int insertMenu = selectMenu();

		if (insertMenu == 1) {
			printEquipmentStatus(user);
		}

		if (insertMenu == 2) {
			user = equipEquipment(user);
		}

		if (insertMenu == 3) {
			user = releaseEquipment(user);
		}

		if (insertMenu == 4) break;

	}
}