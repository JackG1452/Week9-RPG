#pragma once
#include "item.h"
#include <string>
class weapon : public Item 
{
private:
	int weaponHitStrength_;
	int weaponHealth_;

public:
	weapon();
	weapon(std::string itemName, int itemValue, float weight, int weaponHitStrength, int weaponHealth);
	~weapon();

	int GetWeaponHitStrength()const;
	void SetWeaponHitStrength(int weaponHitStrength);

	int GetWeaponHealth()const;
	void SetWeaponHealth(int weaponHealth);

	std::string ToString();
};

