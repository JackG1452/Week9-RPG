#pragma once
#include "gameCharacter.h"
class Cleric : public GameCharacter
{
private:
	int pietyLevel_;

public:
	Cleric();
	Cleric(std::string characterName, float health, float weightLimit, weapon weapon, armour armour, int food, CharacterState state, int pietyLevel);
	~Cleric();

	int GetPietyLevel()const;

	void SetPietyLevel(int pietyLevel);

	virtual bool Attack(GameCharacter&character);

	void PrayFor(GameCharacter&character);

	virtual void Sleep();
};

