#include "armour.h"



armour::armour()
{
}

armour::armour(std::string itemName, int itemValue, float weight, int defence, int armourHealth, ArmourType armourType)
	:Item(itemName, itemValue, weight), defence_{ defence }, armourHealth_{ armourHealth }, armourType_{ armourType } {

}

armour::~armour()
{
}

int armour::GetDefence()const {
	return defence_;
}

void armour::SetDefence(int defence) {
	defence_ = defence;
}

int armour::GetArmourHealth()const {
	return armourHealth_;
}

void armour::SetArmourHealth(int armourHealth) {
	armourHealth_ = armourHealth;
}

int armour::GetArmourType()const {
	return armourType_;
}

void armour::SetArmourType(ArmourType armourType) {
	armourType_ = armourType;
}

std::string armour::ToString() {
	return "Armour:" + this->GetItemName() + " Worth:" + std::to_string(this->GetItemValue()) + " gold coins " + "Defence:" + std::to_string(defence_) + " Armour Health:" + std::to_string(armourHealth_) + " Armour Type:" + std::to_string(armourType_);
}
