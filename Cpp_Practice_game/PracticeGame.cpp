#include <iostream>
#include <string>

using namespace std;

class User {
public:
	int m_equipmentStatus;
	int* m_equipmentStatusPoint = &m_equipmentStatus;
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

	void equip(User user);
	void equipHat(User user);
	void equipUp_Cloth(User user);
	void equipDown_Cloth(User user);
	void equipShoes(User user);
	void equipGloves(User user);
	void equipShield(User user);
	void equipWeapon(User user);
};

User::User() : User("NoName") {

}

User::User(string name) {
	m_name = name;
	m_equipmentStatus = 0;
}

void User::equip(User user) {
	int selectEquipment;
	cout << "어떤 장비를 착용하겠습니까?\n1.모자\n2.상의\n3.하의\n4.신발\n5.장갑\n6.방패\n7.무기" << endl;
	cin >> selectEquipment;

	if (selectEquipment == 1) {
		user.equipHat(user);
	}if (selectEquipment == 2) {
		user.equipUp_Cloth(user);
	}if (selectEquipment == 3) {
		user.equipDown_Cloth(user);
	}if (selectEquipment == 4) {
		user.equipShoes(user);
	}if (selectEquipment == 5) {
		user.equipGloves(user);
	}if (selectEquipment == 6) {
		user.equipShield(user);
	}if (selectEquipment == 7) {
		user.equipWeapon(user);
	}
}

void User::equipHat(User user) {
	if ((*user.m_equipmentStatusPoint & user.HAT) == user.HAT)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.HAT) != user.HAT) {
		*user.m_equipmentStatusPoint |= user.HAT;
		cout << "모자를 착용했습니다." << endl;
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

void User::equipDown_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) == user.DOWN_CLOTH)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) != user.DOWN_CLOTH) {
		*user.m_equipmentStatusPoint |= user.DOWN_CLOTH;
		cout << "하의를 착용했습니다." << endl;
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

void User::equipGloves(User user) {
	if ((*user.m_equipmentStatusPoint & user.GLOVES) == user.GLOVES)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.GLOVES) != user.GLOVES) {
		*user.m_equipmentStatusPoint |= user.GLOVES;
		cout << "장갑을 착용했습니다." << endl;
	}
}

void User::equipShield(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHEILD) == user.SHEILD)
		cout << "이미 착용 중 입니다.";
	if ((*user.m_equipmentStatusPoint & user.SHEILD) != user.SHEILD) {
		*user.m_equipmentStatusPoint |= user.SHEILD;
		cout << "방패를 착용했습니다." << endl;
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
			user.equip(user);
		}

		if (insertMenu == 3) {
		}

		if (insertMenu == 4) break;

	}
}