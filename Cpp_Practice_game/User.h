#ifndef _USER_
#define _USER_
#include <iostream>
using namespace std;

// ���� Ŭ����
class User {
public:
	int m_equipmentStatus;	// ����� ��Ȳ�� ����� ����(2���� Ȱ��)
	int& m_equipmentStatusRep = m_equipmentStatus;	// ��� ���� ��Ȳ ���� �� �ʿ��� ���۷���
	string m_name;	// ���� �̸�

	enum equipment {	// �� ����� 2����
		HAT = 0b00000001,
		UP_CLOTH = 0b00000010,
		DOWN_CLOTH = 0b00000100,
		SHOES = 0b00001000,
		GLOVES = 0b00010000,
		SHIELD = 0b00100000,
		WEAPON = 0b01000000
	};

	User();	// ������
	User(string name);	

	// �� ����� �̸��� static������ ����
	static string hat;
	static string upCloth;
	static string downCloth;
	static string gloves;
	static string shoes;
	static string shield;
	static string weapon;

	// User Ŭ���� �Լ� �����
	void presetEquipment(User user);
	void setEquipment(User user, int equipmentNumber, string equipment);
	void equipEquipment(User user, int equipmentNumber, string equipment);
	void releaseEquipment(User user, int equipmentNumber, string equipment);
};

#endif _USER_