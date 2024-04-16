#include "User.h"

// User Ŭ������ ���Ǻ�
string User::hat = "����";
string User::upCloth = "����";
string User::downCloth = "����";
string User::gloves = "�尩";
string User::shoes = "�Ź�";
string User::shield = "����";
string User::weapon = "����";

// UserŬ������ �⺻ ������ �ƹ��͵� �Է����� ���� �� �̸��� NoName
User::User() : User("NoName") {

}

// �̸��� �Է� ���� �� �̸��� �����ϴ� ������, ����� ��Ȳ�� ���� �������� ���·� ����
User::User(string name) {
	m_name = name;
	m_equipmentStatus = 0;
}

// ��� ���� Ȥ�� ���� ������ �������� �� � ��� �������� ���� �Լ�
void User::presetEquipment(User user) {

	while (true) {
		cout << "��� ���� ����\n1.����\n2.����\n3.����\n4.�Ź�\n5.�尩\n6.����\n7.����\n8.����" << endl;
		int selectEquipment;
		cin >> selectEquipment;

		system("cls");

		if (selectEquipment == 1) {
			user.setEquipment(user, user.HAT, hat);
		}if (selectEquipment == 2) {
			user.setEquipment(user, user.UP_CLOTH, upCloth);
		}if (selectEquipment == 3) {
			user.setEquipment(user, user.DOWN_CLOTH, downCloth);
		}if (selectEquipment == 4) {
			user.setEquipment(user, user.SHOES, shoes);
		}if (selectEquipment == 5) {
			user.setEquipment(user, user.GLOVES, gloves);
		}if (selectEquipment == 6) {
			user.setEquipment(user, user.SHIELD, shield);
		}if (selectEquipment == 7) {
			user.setEquipment(user, user.WEAPON, weapon);
		}if (selectEquipment == 8) break;
	}
}

// ������ ��� ������ �� ���� ���� �� �� ���� �Լ�
void User::setEquipment(User user, int equipmentNumber, string equipment) {
	int selectEquipOrRelease;

	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber) cout << equipment << " ����" << endl;
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber) cout << equipment << " ����" << endl;

	cout << equipment << "�� 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipEquipment(user, equipmentNumber, equipment);
	if (selectEquipOrRelease == 2)  user.releaseEquipment(user, equipmentNumber, equipment);
}

// ������ ��� ���� �ϴ� �Լ�
void User::equipEquipment(User user, int equipmentNumber, string equipment) {
	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber) {
		user.m_equipmentStatusRep |= equipmentNumber;
		cout << equipment << "�� �����߽��ϴ�." << endl;
	}
}

// ������ ��� ���� ���� �ϴ� �Լ�
void User::releaseEquipment(User user, int equipmentNumber, string equipment) {
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber)
		cout << "���� " << equipment << "�� ���� ���� �ƴմϴ�.";
	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber) {
		user.m_equipmentStatusRep -= equipmentNumber;
		cout << equipment <<  "�� ���� �����߽��ϴ�." << endl;
	}

}