#ifndef _USER_
#define _USER_
#include <iostream>
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
#endif _USER_