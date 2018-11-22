#include "Cleric.h"
#include<iostream>

Cleric::Cleric()
{
	GameCharacter();
	pietyLevel_ = 1;
}

Cleric::Cleric(std::string characterName, float health, float weightLimit, weapon weapon, armour armour, int food, CharacterState state, int pietyLevel)
:GameCharacter(characterName, health, weightLimit, weapon, armour, food, state), pietyLevel_{ pietyLevel }{
}

Cleric::~Cleric()
{
}

int Cleric::GetPietyLevel() const
{
	return pietyLevel_;
}

void Cleric::SetPietyLevel(int pietyLevel)
{
	pietyLevel_ = pietyLevel;
}

bool Cleric::Attack(GameCharacter & character)
{
	std::cout << "Base Character " + this->GetCharacterName() + " is attacking " + character.GetCharacterName() + " with a " + this->GetWeapon;
}

void Cleric::PrayFor(GameCharacter & character)
{
	std::cout << "Cleric " + this->GetCharacterName() + " is praying for " + character.GetCharacterName();
}

void Cleric::Sleep()
{
	std::cout << "ClassType is sleeping";
}
