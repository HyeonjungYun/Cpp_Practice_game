#include "User.h"

// User 클래스의 정의부
string User::hat = "모자";
string User::upCloth = "상의";
string User::downCloth = "하의";
string User::gloves = "장갑";
string User::shoes = "신발";
string User::shield = "방패";
string User::weapon = "무기";

// User클래스의 기본 생성자 아무것도 입력하지 않을 시 이름이 NoName
User::User() : User("NoName") {

}

// 이름을 입력 받을 시 이름을 저장하는 생성자, 장비의 현황도 전부 미착용인 상태로 생성
User::User(string name) {
	m_name = name;
	m_equipmentStatus = 0;
}

// 장비를 착용 혹은 착용 해제를 선택했을 때 어떤 장비를 선택할지 고르는 함수
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

// 선택한 장비를 착용할 지 착용 해제 할 지 고르는 함수
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

// 선택한 장비를 착용 하는 함수
void User::equipEquipment(User user, int equipmentNumber, string equipment) {
	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber)
		cout << "이미 착용 중 입니다.";
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber) {
		user.m_equipmentStatusRep |= equipmentNumber;
		cout << equipment << "를 착용했습니다." << endl;
	}
}

// 선택한 장비를 착용 해제 하는 함수
void User::releaseEquipment(User user, int equipmentNumber, string equipment) {
	if ((user.m_equipmentStatusRep & equipmentNumber) != equipmentNumber)
		cout << "현재 " << equipment << "는 착용 중이 아닙니다.";
	if ((user.m_equipmentStatusRep & equipmentNumber) == equipmentNumber) {
		user.m_equipmentStatusRep -= equipmentNumber;
		cout << equipment <<  "를 착용 해제했습니다." << endl;
	}

}