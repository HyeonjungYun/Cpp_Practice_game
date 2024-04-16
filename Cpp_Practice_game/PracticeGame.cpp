#include <iostream>
#include <string>
#include "User.h"
#include "Equipment.h"

using namespace std;

// 메뉴 선택창을 출력하는 함수
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

// 유저의 장비 현황을 출력하는 함수
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

// 메인 함수
int main() {
	User user;	// 유저 클래스
	Equipment equipment;	// 장비 클래스

	// 플레이
	while (1) {
		int insertMenu = selectMenu();

		if (insertMenu == 1) 
			printEquipmentStatus(user, equipment);

		if (insertMenu == 2) 
			user.presetEquipment(user);

		if (insertMenu == 3) break;

	}
}