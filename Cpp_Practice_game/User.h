#ifndef _USER_
#define _USER_
#include <iostream>
using namespace std;

// 유저 클래스
class User {
public:
	int m_equipmentStatus;	// 장비의 현황이 저장된 숫자(2진수 활용)
	int& m_equipmentStatusRep = m_equipmentStatus;	// 장비 착용 상황 변동 시 필요한 레퍼런스
	string m_name;	// 유저 이름

	enum equipment {	// 각 장비의 2진수
		HAT = 0b00000001,
		UP_CLOTH = 0b00000010,
		DOWN_CLOTH = 0b00000100,
		SHOES = 0b00001000,
		GLOVES = 0b00010000,
		SHIELD = 0b00100000,
		WEAPON = 0b01000000
	};

	User();	// 생성자
	User(string name);	

	// 각 장비의 이름을 static변수로 저장
	static string hat;
	static string upCloth;
	static string downCloth;
	static string gloves;
	static string shoes;
	static string shield;
	static string weapon;

	// User 클래스 함수 선언부
	void presetEquipment(User user);
	void setEquipment(User user, int equipmentNumber, string equipment);
	void equipEquipment(User user, int equipmentNumber, string equipment);
	void releaseEquipment(User user, int equipmentNumber, string equipment);
};

#endif _USER_