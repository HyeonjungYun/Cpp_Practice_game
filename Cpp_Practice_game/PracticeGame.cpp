#include <iostream>
#include <string>
#include "User.h"
#include "Equipment.h"

using namespace std;


int selectMenu() {
	int insertMenu;

	cout << "메뉴를 선택하세요" << endl;
	cout << "1.캐릭터 정보" << endl;
	cout << "2.장비창" << endl;
	cout << "3.종료" << endl;
	cin >> insertMenu;
	system("cls");

	return insertMenu;
}

void printEquipmentStatus(User user, Equipment equipment) {
	int check = 1;
	int exit;

	for (int i = 0; i <= 6; i++) {
		if ((user.m_equipmentStatus & check) == check) cout << equipment.m_nameEquipment[i] << " 착용" << endl;
		if ((user.m_equipmentStatus & check) != check) cout << equipment.m_nameEquipment[i] << " 미착용" << endl;

		check <<= 1;
	}
	cout << "1.나가기" << endl;
	cin >> exit;

	system("cls");
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
			user.setEquipment(user);
		}

		if (insertMenu == 3) break;

	}
}