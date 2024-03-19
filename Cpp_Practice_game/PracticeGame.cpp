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

	cout << "메뉴를 선택하세요" << endl;
	cout << "1.현재상태" << endl;
	cout << "2.장비착용" << endl;
	cout << "3.장비해제" << endl;
	cout << "4.종료" << endl;
	cin >> insertMenu;

	return insertMenu;
}

void printEquipmentStatus(int user) {
	int check = 1;

	string nameEquipment[7];
	nameEquipment[0] = "모자";
	nameEquipment[1] = "상의";
	nameEquipment[2] = "하의";
	nameEquipment[3] = "신발";
	nameEquipment[4] = "장갑";
	nameEquipment[5] = "방패";
	nameEquipment[6] = "무기";

	for (int i = 0; i <= 6; i++) {
		if ((user & check) == check) cout << nameEquipment[i] << " 착용" << endl;
		if ((user & check) != check) cout << nameEquipment[i] << " 미착용" << endl;

		check <<= 1;
	}

	cout << endl;
}

int equipEquipment(int user) {
	int selectEquipment;
	cout << "어떤 장비를 착용하겠습니까?\n1.모자\n2.상의\n3.하의\n4.신발\n5.장갑\n6.방패\n7.무기" << endl;
	cin >> selectEquipment;

	if (selectEquipment == 1) {
		if ((user & HAT) == HAT) {
			cout << "이미 착용 중입니다.\n" << endl;
		}if ((user & HAT) != HAT) {
			user |= HAT;
			cout << "모자를 착용했습니다.\n" << endl;
		}
	}if (selectEquipment == 2) {
		if ((user & UP_CLOTH) == UP_CLOTH) {
			cout << "이미 착용 중입니다.\n" << endl;
		}if ((user & UP_CLOTH) != UP_CLOTH) {
			user |= UP_CLOTH;
			cout << "상의를 착용했습니다.\n" << endl;
		}
	}if (selectEquipment == 3) {
		if ((user & DOWN_CLOTH) == DOWN_CLOTH) {
			cout << "이미 착용 중입니다.\n" << endl;
		}if ((user & DOWN_CLOTH) != DOWN_CLOTH) {
			user |= DOWN_CLOTH;
			cout << "하의를 착용했습니다.\n" << endl;
		}
	}if (selectEquipment == 4) {
		if ((user & SHOES) == SHOES) {
			cout << "이미 착용 중입니다.\n" << endl;
		}if ((user & SHOES) != SHOES) {
			user |= SHOES;
			cout << "신발을 착용했습니다.\n" << endl;
		}
	}if (selectEquipment == 5) {
		if ((user & GLOVES) == GLOVES) {
			cout << "이미 착용 중입니다.\n" << endl;
		}if ((user & GLOVES) != GLOVES) {
			user |= GLOVES;
			cout << "장갑을 착용했습니다.\n" << endl;
		}
	}if (selectEquipment == 6) {
		if ((user & SHEILD) == SHEILD) {
			cout << "이미 착용 중입니다.\n" << endl;
		}if ((user & SHEILD) != SHEILD) {
			user |= SHEILD;
			cout << "장갑을 착용했습니다.\n" << endl;
		}
	}if (selectEquipment == 7) {
		if ((user & WEAPON) == WEAPON) {
			cout << "이미 착용 중입니다.\n" << endl;
		}if ((user & WEAPON) != WEAPON) {
			user |= WEAPON;
			cout << "무기를 착용했습니다.\n" << endl;
		}
	}

	return user;
}

int releaseEquipment(int user) {
	int selectEquipment;
	cout << "어떤 장비를 해제하겠습니까?\n1.모자\n2.상의\n3.하의\n4.신발\n5.장갑\n6.방패\n7.무기" << endl;
	cin >> selectEquipment;

	if (selectEquipment == 1) {
		if ((user & HAT) != HAT) {
			cout << "이미 착용 중이 아닙니다.\n" << endl;
		}if ((user & HAT) == HAT) {
			user -= HAT;
			cout << "모자를 착용 해제했습니다.\n" << endl;
		}
	}if (selectEquipment == 2) {
		if ((user & UP_CLOTH) != UP_CLOTH) {
			cout << "이미 착용이 아닙니다.\n" << endl;
		}if ((user & UP_CLOTH) == UP_CLOTH) {
			user -= UP_CLOTH;
			cout << "상의를 착용 해제했습니다.\n" << endl;
		}
	}if (selectEquipment == 3) {
		if ((user & DOWN_CLOTH) != DOWN_CLOTH) {
			cout << "이미 착용 중이 아닙니다.\n" << endl;
		}if ((user & DOWN_CLOTH) == DOWN_CLOTH) {
			user -= DOWN_CLOTH;
			cout << "하의를 착용 해제했습니다.\n" << endl;
		}
	}if (selectEquipment == 4) {
		if ((user & SHOES) != SHOES) {
			cout << "이미 착용 중이 아닙니다.\n" << endl;
		}if ((user & SHOES) == SHOES) {
			user -= SHOES;
			cout << "신발을 착용 해제했습니다.\n" << endl;
		}
	}if (selectEquipment == 5) {
		if ((user & GLOVES) != GLOVES) {
			cout << "이미 착용 중이 아닙니다.\n" << endl;
		}if ((user & GLOVES) == GLOVES) {
			user -= GLOVES;
			cout << "장갑을 착용 해제했습니다.\n" << endl;
		}
	}if (selectEquipment == 6) {
		if ((user & SHEILD) != SHEILD) {
			cout << "이미 착용 중이 아닙니다.\n" << endl;
		}if ((user & SHEILD) == SHEILD) {
			user -= SHEILD;
			cout << "장갑을 착용 해제했습니다.\n" << endl;
		}
	}if (selectEquipment == 7) {
		if ((user & WEAPON) != WEAPON) {
			cout << "이미 착용 중이 아닙니다.\n" << endl;
		}if ((user & WEAPON) == WEAPON) {
			user -= WEAPON;
			cout << "무기를 착용 해제했습니다.\n" << endl;
		}
	}

	return user;
}

int main() {
	int user = 0;
	// a는 현재 착용한 것이 없는 상태

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