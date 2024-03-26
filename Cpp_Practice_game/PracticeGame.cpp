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

void printEquipmentStatus(User user) {
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
		if ((user.m_equipmentStatus & check) == check) cout << nameEquipment[i] << " ����" << endl;
		if ((user.m_equipmentStatus & check) != check) cout << nameEquipment[i] << " ������" << endl;

		check <<= 1;
	}

	cout << endl;
}

int main() {
	User user;

	while (1) {
		int insertMenu = selectMenu();

		if (insertMenu == 1) {
			printEquipmentStatus(user);
		}

		if (insertMenu == 2) {
		}

		if (insertMenu == 3) {
		}

		if (insertMenu == 4) break;

	}
}