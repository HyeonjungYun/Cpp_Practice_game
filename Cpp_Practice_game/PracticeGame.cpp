#include <iostream>
#include <string>
#include "User.h"
#include "Equipment.h"

using namespace std;

// �޴� ����â�� ����ϴ� �Լ�
int selectMenu() {
	int insertMenu;

	cout << "�޴��� �����ϼ���" << endl;
	cout << "1.ĳ���� ����" << endl;
	cout << "2.���â" << endl;
	cout << "3.����" << endl;
	cin >> insertMenu;
	system("cls");

	return insertMenu;
}

// ������ ��� ��Ȳ�� ����ϴ� �Լ�
void printEquipmentStatus(User user, Equipment equipment) {
	int check = 1;
	int exit;

	for (int i = 0; i <= 6; i++) {
		if ((user.m_equipmentStatus & check) == check) cout << equipment.m_nameEquipment[i] << " ����" << endl;
		if ((user.m_equipmentStatus & check) != check) cout << equipment.m_nameEquipment[i] << " ������" << endl;

		check <<= 1;
	}
	cout << "1.������" << endl;
	cin >> exit;

	system("cls");
}

// ���� �Լ�
int main() {
	User user;	// ���� Ŭ����
	Equipment equipment;	// ��� Ŭ����

	// �÷���
	while (1) {
		int insertMenu = selectMenu();

		if (insertMenu == 1) 
			printEquipmentStatus(user, equipment);

		if (insertMenu == 2) 
			user.presetEquipment(user);

		if (insertMenu == 3) break;

	}
}