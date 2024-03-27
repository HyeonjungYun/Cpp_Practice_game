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
		SHIELD = 0b00100000,
		WEAPON = 0b01000000
	};

	User();
	User(string name);

	void setEquipment(User user);
	void setHat(User user);
	void setUp_Cloth(User user);
	void setDown_Cloth(User user);
	void setShoes(User user);
	void setGloves(User user);
	void setShield(User user);
	void setWeapon(User user);
	void equip(User user);
	void equipHat(User user);
	void releaseHat(User user);
	void equipUp_Cloth(User user);
	void releaseUp_Cloth(User user);
	void equipDown_Cloth(User user);
	void releaseDown_Cloth(User user);
	void equipShoes(User user);
	void releaseShoes(User user);
	void equipGloves(User user);
	void releaseGloves(User user);
	void equipShield(User user);
	void releaseShield(User user);
	void equipWeapon(User user);
	void releaseWeapon(User user);
};

User::User() : User("NoName") {

}

User::User(string name) {
	m_name = name;
	m_equipmentStatus = 0;
}

void User::setEquipment(User user) {

	while (true) {
		cout << "��� ���� ����\n1.����\n2.����\n3.����\n4.�Ź�\n5.�尩\n6.����\n7.����\n8.����" << endl;
		int selectEquipment;
		cin >> selectEquipment;

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

	if ((*user.m_equipmentStatusPoint & user.HAT) == user.HAT) cout << "���� ����" << endl;
	if ((*user.m_equipmentStatusPoint & user.HAT) != user.HAT) cout << "���� ������" << endl;

	cout << "���ڸ� 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	if (selectEquipOrRelease == 1)  user.equipHat(user);
	if (selectEquipOrRelease == 2)  user.releaseHat(user);
}

void User::setUp_Cloth(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) == user.UP_CLOTH) cout << "���� ����" << endl;
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) != user.UP_CLOTH) cout << "���� ������" << endl;

	cout << "���Ǹ� 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	if (selectEquipOrRelease == 1)  user.equipUp_Cloth(user);
	if (selectEquipOrRelease == 2)  user.releaseUp_Cloth(user);
}

void User::setDown_Cloth(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) == user.DOWN_CLOTH) cout << "���� ����" << endl;
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) != user.DOWN_CLOTH) cout << "���� ������" << endl;

	cout << "���Ǹ� 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	if (selectEquipOrRelease == 1)  user.equipDown_Cloth(user);
	if (selectEquipOrRelease == 2)  user.releaseDown_Cloth(user);
}

void User::setShoes(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.SHOES) == user.SHOES) cout << "�Ź� ����" << endl;
	if ((*user.m_equipmentStatusPoint & user.SHOES) != user.SHOES) cout << "�Ź� ������" << endl;

	cout << "�Ź��� 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	if (selectEquipOrRelease == 1)  user.equipShoes(user);
	if (selectEquipOrRelease == 2)  user.releaseShoes(user);
}

void User::setGloves(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.GLOVES) == user.GLOVES) cout << "�尩 ����" << endl;
	if ((*user.m_equipmentStatusPoint & user.GLOVES) != user.GLOVES) cout << "�尩 ������" << endl;

	cout << "�尩�� 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	if (selectEquipOrRelease == 1)  user.equipGloves(user);
	if (selectEquipOrRelease == 2)  user.releaseGloves(user);
}

void User::setShield(User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.SHIELD) == user.SHIELD) cout << "���� ����" << endl;
	if ((*user.m_equipmentStatusPoint & user.SHIELD) != user.SHIELD) cout << "���� ������" << endl;

	cout << "���и� 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	if (selectEquipOrRelease == 1)  user.equipShield(user);
	if (selectEquipOrRelease == 2)  user.releaseShield(user);
}

void User::setWeapon (User user) {
	int selectEquipOrRelease;

	if ((*user.m_equipmentStatusPoint & user.WEAPON) == user.WEAPON) cout << "���� ����" << endl;
	if ((*user.m_equipmentStatusPoint & user.WEAPON) != user.WEAPON) cout << "���� ������" << endl;

	cout << "���⸦ 1.�����Ͻʴϱ�?\n2.�����Ͻʴϱ�?" << endl;
	cin >> selectEquipOrRelease;

	if (selectEquipOrRelease == 1)  user.equipWeapon(user);
	if (selectEquipOrRelease == 2)  user.releaseWeapon(user);
}

void User::equipHat(User user) {
	if ((*user.m_equipmentStatusPoint & user.HAT) == user.HAT)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((*user.m_equipmentStatusPoint & user.HAT) != user.HAT) {
		*user.m_equipmentStatusPoint |= user.HAT;
		cout << "���ڸ� �����߽��ϴ�." << endl;
	}
}

void User::releaseHat(User user) {
	if ((*user.m_equipmentStatusPoint & user.HAT) != user.HAT)
		cout << "���� ���ڴ� ���� ���� �ƴմϴ�.";
	if ((*user.m_equipmentStatusPoint & user.HAT) == user.HAT) {
		*user.m_equipmentStatusPoint -= user.HAT;
		cout << "���ڸ� ���� �����߽��ϴ�." << endl;
	}
}

void User::equipUp_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) == user.UP_CLOTH)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) != user.UP_CLOTH) {
		*user.m_equipmentStatusPoint |= user.UP_CLOTH;
		cout << "���Ǹ� �����߽��ϴ�." << endl;
	}
}

void User::releaseUp_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) != user.UP_CLOTH)
		cout << "���� ���Ǵ� ���� ���� �ƴմϴ�.";
	if ((*user.m_equipmentStatusPoint & user.UP_CLOTH) == user.UP_CLOTH) {
		*user.m_equipmentStatusPoint -= user.UP_CLOTH;
		cout << "���Ǹ� ���� ���� �߽��ϴ�." << endl;
	}
}

void User::equipDown_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) == user.DOWN_CLOTH)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) != user.DOWN_CLOTH) {
		*user.m_equipmentStatusPoint |= user.DOWN_CLOTH;
		cout << "���Ǹ� ���� �߽��ϴ�." << endl;
	}
}

void User::releaseDown_Cloth(User user) {
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) != user.DOWN_CLOTH)
		cout << "���� ���Ǵ� ���� ���� �ƴմϴ�.";
	if ((*user.m_equipmentStatusPoint & user.DOWN_CLOTH) == user.DOWN_CLOTH) {
		*user.m_equipmentStatusPoint -= user.DOWN_CLOTH;
		cout << "���Ǹ� ���� ���� �߽��ϴ�." << endl;
	}
}

void User::equipShoes(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHOES) == user.SHOES)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((*user.m_equipmentStatusPoint & user.SHOES) != user.SHOES) {
		*user.m_equipmentStatusPoint |= user.SHOES;
		cout << "�Ź��� �����߽��ϴ�." << endl;
	}
}

void User::releaseShoes(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHOES) != user.SHOES)
		cout << "���� �Ź��� ���� ���� �ƴմϴ�.";
	if ((*user.m_equipmentStatusPoint & user.SHOES) == user.SHOES) {
		*user.m_equipmentStatusPoint -= user.SHOES;
		cout << "�Ź��� ���� ���� �߽��ϴ�." << endl;
	}
}

void User::equipGloves(User user) {
	if ((*user.m_equipmentStatusPoint & user.GLOVES) == user.GLOVES)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((*user.m_equipmentStatusPoint & user.GLOVES) != user.GLOVES) {
		*user.m_equipmentStatusPoint |= user.GLOVES;
		cout << "�尩�� �����߽��ϴ�." << endl;
	}
}

void User::releaseGloves(User user) {
	if ((*user.m_equipmentStatusPoint & user.GLOVES) != user.GLOVES)
		cout << "���� �尩�� ���� ���� �ƴմϴ�.";
	if ((*user.m_equipmentStatusPoint & user.GLOVES) == user.GLOVES) {
		*user.m_equipmentStatusPoint -= user.GLOVES;
		cout << "�尩�� ���� ���� �߽��ϴ�." << endl;
	}
}

void User::equipShield(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHIELD) == user.SHIELD)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((*user.m_equipmentStatusPoint & user.SHIELD) != user.SHIELD) {
		*user.m_equipmentStatusPoint |= user.SHIELD;
		cout << "���и� �����߽��ϴ�." << endl;
	}
}

void User::releaseShield(User user) {
	if ((*user.m_equipmentStatusPoint & user.SHIELD) != user.SHIELD)
		cout << "���� ���д� ���� ���� �ƴմϴ�.";
	if ((*user.m_equipmentStatusPoint & user.SHIELD) == user.SHIELD) {
		*user.m_equipmentStatusPoint -= user.SHIELD;
		cout << "���и� ���� ���� �߽��ϴ�." << endl;
	}
}

void User::equipWeapon(User user) {
	if ((*user.m_equipmentStatusPoint & user.WEAPON) == user.WEAPON)
		cout << "�̹� ���� �� �Դϴ�.";
	if ((*user.m_equipmentStatusPoint & user.WEAPON) != user.WEAPON) {
		*user.m_equipmentStatusPoint |= user.WEAPON;
		cout << "���⸦ �����߽��ϴ�." << endl;
	}
}

void User::releaseWeapon(User user) {
	if ((*user.m_equipmentStatusPoint & user.WEAPON) != user.WEAPON)
		cout << "���� ����� ���� ���� �ƴմϴ�.";
	if ((*user.m_equipmentStatusPoint & user.WEAPON) == user.WEAPON) {
		*user.m_equipmentStatusPoint -= user.WEAPON;
		cout << "���⸦ ���� ���� �߽��ϴ�." << endl;
	}
}

class Equipment {
public:
	string m_nameEquipment[7];
	Equipment();
};

Equipment::Equipment() {
	m_nameEquipment[0] = "����";
	m_nameEquipment[1] = "����";
	m_nameEquipment[2] = "����";
	m_nameEquipment[3] = "�Ź�";
	m_nameEquipment[4] = "�尩";
	m_nameEquipment[5] = "����";
	m_nameEquipment[6] = "����";
}

int selectMenu() {
	int insertMenu;

	cout << "�޴��� �����ϼ���" << endl;
	cout << "1.ĳ���� ����" << endl;
	cout << "2.���â" << endl;
	cout << "3.����" << endl;
	cin >> insertMenu;

	return insertMenu;
}

void printEquipmentStatus(User user, Equipment equipment) {
	int check = 1;

	for (int i = 0; i <= 6; i++) {
		if ((user.m_equipmentStatus & check) == check) cout << equipment.m_nameEquipment[i] << " ����" << endl;
		if ((user.m_equipmentStatus & check) != check) cout << equipment.m_nameEquipment[i] << " ������" << endl;

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
			user.setEquipment(user);
		}

		if (insertMenu == 3) break;

	}
}