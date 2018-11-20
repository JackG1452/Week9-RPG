#pragma once
#include "item.h"
#include <string>
enum ArmourType { Cardboard, Leather, Wood, Iron, Steel };

class armour : public Item
{
private:
	int defence_;
	int armourHealth_;
	ArmourType armourType_;


public:
	armour();
	armour(std::string itemName, int itemValue, float weight, int defence, int armourHealth, ArmourType armourType);
	~armour();

	int GetDefence()const;

	void SetDefence(int defence);

	int GetArmourHealth()const;

	void SetArmourHealth(int armourHealth);

	int GetArmourType()const;

	void SetArmourType(ArmourType armourType);

	std::string ToString();
};

