#include "User.h"

User::User() : User("NoName") {

}

User::User(string name) {
	m_name = name;
	m_equipmentStatus = 0;
}

void User::setEquipment(User user) {

	while (true) {
		cout << "장비 착용 설정\n1.모자\n2.상의\n3.하의\n4.신발\n5.장갑\n6.방패\n7.무기\n8.종료" << endl;
		int selectEquipment;
		cin >> selectEquipment;

		system("cls");

		if (selectEquipment == 1) {
			user.setHat(user);
		}if (selectEquipment == 2) {
			user.setUp_Cloth(user);
		}if (selectEquipment == 3) {
			user.setDown_Cloth(user);
		}if (selectEquipment == 4) {
			user.setShoes(user);
		}if (selectEquipment == 5) {
			user.setGloves(user);
		}if (selectEquipment == 6) {
			user.setShield(user);
		}if (selectEquipment == 7) {
			user.setWeapon(user);
		}if (selectEquipment == 8) break;
	}
}

void User::setHat(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.HAT) == user.HAT) cout << "모자 착용" << endl;
	if ((*user.m_equipmentStatusPoint & user.HAT) != user.HAT) cout << "모자 미착용" << endl;

	cout << "모자를 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipHat(user);
	if (selectEquipOrRelease == 2)  user.releaseHat(user);
}

void User::setUp_Cloth(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) == user.UP_CLOTH) cout << "상의 착용" << endl;
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) != user.UP_CLOTH) cout << "상의 미착용" << endl;

	cout << "상의를 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipUp_Cloth(user);
	if (selectEquipOrRelease == 2)  user.releaseUp_Cloth(user);
}

void User::setDown_Cloth(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) == user.DOWN_CLOTH) cout << "하의 착용" << endl;
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) != user.DOWN_CLOTH) cout << "하의 미착용" << endl;

	cout << "하의를 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipDown_Cloth(user);
	if (selectEquipOrRelease == 2)  user.releaseDown_Cloth(user);
}

void User::setShoes(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.SHOES) == user.SHOES) cout << "신발 착용" << endl;
	if ((*user.m_equipmentStatusPoint & user.SHOES) != user.SHOES) cout << "신발 미착용" << endl;

	cout << "신발을 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipShoes(user);
	if (selectEquipOrRelease == 2)  user.releaseShoes(user);
}

void User::setGloves(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.GLOVES) == user.GLOVES) cout << "장갑 착용" << endl;
	if ((*user.m_equipmentStatusPoint & user.GLOVES) != user.GLOVES) cout << "장갑 미착용" << endl;

	cout << "장갑을 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipGloves(user);
	if (selectEquipOrRelease == 2)  user.releaseGloves(user);
}

void User::setShield(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.SHIELD) == user.SHIELD) cout << "방패 착용" << endl;
	if ((*user.m_equipmentStatusPoint & user.SHIELD) != user.SHIELD) cout << "방패 미착용" << endl;

	cout << "방패를 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipShield(user);
	if (selectEquipOrRelease == 2)  user.releaseShield(user);
}

void User::setWeapon(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.WEAPON) == user.WEAPON) cout << "무기 착용" << endl;
	if ((*user.m_equipmentStatusPoint & user.WEAPON) != user.WEAPON) cout << "무기 미착용" << endl;

	cout << "무기를 1.착용하십니까?\n2.해제하십니까?" << endl;
	cin >> selectEquipOrRelease;

	system("cls");

	if (selectEquipOrRelease == 1)  user.equipWeapon(user);
	if (selectEquipOrRelease == 2)  user.releaseWeapon(user);
}

void User::equipHat(User user) {
	if ((*user.m_equipmentStatusPoint & user.HAT) == user.HAT)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.HAT) != user.HAT) {
		*user.m_equipmentStatusPoint |= user.HAT;
		cout << "모자를 착용했습니다." << endl;
	}
}

void User::releaseHat(User user) {
	if ((*user.m_equipmentStatusPoint & user.HAT) != user.HAT)
		cout << "현재 모자는 착용 중이 아닙니다.";
	if ((*user.m_equipmentStatusPoint & user.HAT) == user.HAT) {
		*user.m_equipmentStatusPoint -= user.HAT;
		cout << "모자를 착용 해제했습니다." << endl;
	}
}

void User::equipUp_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) == user.UP_CLOTH)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) != user.UP_CLOTH) {
		*user.m_equipmentStatusPoint |= user.UP_CLOTH;
		cout << "상의를 착용했습니다." << endl;
	}
}

void User::releaseUp_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) != user.UP_CLOTH)
		cout << "현재 상의는 착용 중이 아닙니다.";
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) == user.UP_CLOTH) {
		*user.m_equipmentStatusPoint -= user.UP_CLOTH;
		cout << "상의를 착용 해제 했습니다." << endl;
	}
}

void User::equipDown_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) == user.DOWN_CLOTH)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) != user.DOWN_CLOTH) {
		*user.m_equipmentStatusPoint |= user.DOWN_CLOTH;
		cout << "하의를 착용 했습니다." << endl;
	}
}

void User::releaseDown_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) != user.DOWN_CLOTH)
		cout << "현재 하의는 착용 중이 아닙니다.";
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) == user.DOWN_CLOTH) {
		*user.m_equipmentStatusPoint -= user.DOWN_CLOTH;
		cout << "하의를 착용 해제 했습니다." << endl;
	}
}

void User::equipShoes(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHOES) == user.SHOES)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.SHOES) != user.SHOES) {
		*user.m_equipmentStatusPoint |= user.SHOES;
		cout << "신발을 착용했습니다." << endl;
	}
}

void User::releaseShoes(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHOES) != user.SHOES)
		cout << "현재 신발은 착용 중이 아닙니다.";
	if ((*user.m_equipmentStatusPoint & user.SHOES) == user.SHOES) {
		*user.m_equipmentStatusPoint -= user.SHOES;
		cout << "신발을 착용 해제 했습니다." << endl;
	}
}

void User::equipGloves(User user) {
	if ((*user.m_equipmentStatusPoint & user.GLOVES) == user.GLOVES)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.GLOVES) != user.GLOVES) {
		*user.m_equipmentStatusPoint |= user.GLOVES;
		cout << "장갑을 착용했습니다." << endl;
	}
}

void User::releaseGloves(User user) {
	if ((*user.m_equipmentStatusPoint & user.GLOVES) != user.GLOVES)
		cout << "현재 장갑은 착용 중이 아닙니다.";
	if ((*user.m_equipmentStatusPoint & user.GLOVES) == user.GLOVES) {
		*user.m_equipmentStatusPoint -= user.GLOVES;
		cout << "장갑을 착용 해제 했습니다." << endl;
	}
}

void User::equipShield(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHIELD) == user.SHIELD)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.SHIELD) != user.SHIELD) {
		*user.m_equipmentStatusPoint |= user.SHIELD;
		cout << "방패를 착용했습니다." << endl;
	}
}

void User::releaseShield(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHIELD) != user.SHIELD)
		cout << "현재 방패는 착용 중이 아닙니다.";
	if ((*user.m_equipmentStatusPoint & user.SHIELD) == user.SHIELD) {
		*user.m_equipmentStatusPoint -= user.SHIELD;
		cout << "방패를 착용 해제 했습니다." << endl;
	}
}

void User::equipWeapon(User user) {
	if ((*user.m_equipmentStatusPoint & user.WEAPON) == user.WEAPON)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.WEAPON) != user.WEAPON) {
		*user.m_equipmentStatusPoint |= user.WEAPON;
		cout << "무기를 착용했습니다." << endl;
	}
}

void User::releaseWeapon(User user) {
	if ((*user.m_equipmentStatusPoint & user.WEAPON) != user.WEAPON)
		cout << "현재 무기는 착용 중이 아닙니다.";
	if ((*user.m_equipmentStatusPoint & user.WEAPON) == user.WEAPON) {
		*user.m_equipmentStatusPoint -= user.WEAPON;
		cout << "무기를 착용 해제 했습니다." << endl;
	}
}