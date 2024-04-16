#include "User.h"

string User::hat = "모자";
string User::upCloth = "상의";
string User::downCloth = "하의";
string User::gloves = "장갑";
string User::shoes = "신발";
string User::shield = "방패";
string User::weapon = "무기";

User::User() : User("NoName") {

}

User::User(string name) {
	m_name = name;
	m_equipmentStatus = 0;
}

void User::presetEquipment(User user) {

	while (true) {
		cout << "장비 착용 설정\n1.모자\n2.상의\n3.하의\n4.신발\n5.장갑\n6.방패\n7.무기\n8.종료" << endl;
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

void User::setEquipment(User user, int equipmentNumber, string equipment) {
	int selectEquipOrRelease;

	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber) cout << equipment << " 착용" << endl;
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber) cout << equipment << " 착용" << endl;

	cout << equipment << "를 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipEquipment(user, equipmentNumber, equipment);
	if (selectEquipOrRelease == 2)  user.releaseEquipment(user, equipmentNumber, equipment);
}

void User::equipEquipment(User user, int equipmentNumber, string equipment) {
	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber)
		cout << "이미 착용 중 입니다.";
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber) {
		user.m_equipmentStatusRep |= equipmentNumber;
		cout << equipment << "를 착용했습니다." << endl;
	}
}

void User::releaseEquipment(User user, int equipmentNumber, string equipment) {
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber)
		cout << "현재 " << equipment << "는 착용 중이 아닙니다.";
	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber) {
		user.m_equipmentStatusRep -= equipmentNumber;
		cout << equipment <<  "를 착용 해제했습니다." << endl;
	}

}