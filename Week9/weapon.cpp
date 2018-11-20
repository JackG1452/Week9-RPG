#include "weapon.h"



weapon::weapon()
{
}

weapon::weapon(std::string itemName, int itemValue, float weight, int weaponHitStrength, int weaponHealth) 
	:Item(itemName, itemValue, weight), weaponHitStrength_{ weaponHitStrength }, weaponHealth_{ weaponHealth } {
}


weapon::~weapon()
{
}

int weapon::GetWeaponHitStrength() const {
	return weaponHitStrength_;
}

void weapon::SetWeaponHitStrength(int weaponHitStrength) {
	weaponHitStrength_ = weaponHitStrength;
}

int weapon::GetWeaponHealth() const {
	return weaponHealth_;
}

void weapon::SetWeaponHealth(int weaponHealth) {
	weaponHealth_ = weaponHealth;
}

std::string weapon::ToString() {
	return "Weapon:" + this->GetItemName() + " Worth:" + std::to_string(this->GetItemValue()) + " gold coins " + "Hit Strength:" + std::to_string(weaponHitStrength_) + " Weapon Health:" + std::to_string(weaponHealth_);
		
}