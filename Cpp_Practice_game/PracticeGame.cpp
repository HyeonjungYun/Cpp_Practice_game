#include <iostream>
#include <string>

using namespace std;

class User {
public:
	int m_equipmentStatus;
	string m_name;

	enum equipment {
		HAT = 0b00000001,
		UP_CLOTH = 0b00000010,
		DOWN_CLOTH = 0b00000100,
		SHOES = 0b00001000,
		GLOVES = 0b00010000,
		SHEILD = 0b00100000,
		WEAPON = 0b01000000
	};

	User();
	User(string name);
};

User::User() : User("NoName") {

}

User::User(string name) {
	m_name = name;
	m_equipmentStatus = 0b00000000;
}

class Equipment {
public:
	string m_nameEquipment[7];
	Equipment();
};

Equipment::Equipment() {
	m_nameEquipment[0] = "모자";
	m_nameEquipment[1] = "상의";
	m_nameEquipment[2] = "하의";
	m_nameEquipment[3] = "신발";
	m_nameEquipment[4] = "장갑";
	m_nameEquipment[5] = "방패";
	m_nameEquipment[6] = "무기";
}

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

void printEquipmentStatus(User user, Equipment equipment) {
	int check = 1;

	for (int i = 0; i <= 6; i++) {
		if ((user.m_equipmentStatus & check) == check) cout << equipment.m_nameEquipment[i] << " 착용" << endl;
		if ((user.m_equipmentStatus & check) != check) cout << equipment.m_nameEquipment[i] << " 미착용" << endl;

		check <<= 1;
	}

	cout << endl;
}

int main() {
	User user;
	Equipment equipment;

	while (1) {
		int insertMenu = selectMenu();

		if (insertMenu == 1) {
			printEquipmentStatus(user, equipment);
		}

		if (insertMenu == 2) {
		}

		if (insertMenu == 3) {
		}

		if (insertMenu == 4) break;

	}
}