#pragma once
#include<string>
#include "armour.h"
#include "weapon.h"
enum CharacterState { Idle, Running, Sleeping, Walking, Defending, Attacking, Dead };

class GameCharacter {

private:
	std::string characterName_;
	float health_;
	float weightLimit_;
	weapon weapon_;
	armour armour_;
	int food_;
	CharacterState state_;
	

public:
	GameCharacter();
	GameCharacter(std::string characterName, float health, float weightLimit, weapon weapon, armour armour, int food, CharacterState state);

	~GameCharacter();

	std::string GetCharacterName()const;
	void SetCharacterName(std::string characterName);

	float GetHealth() const;
	void SetHealth(float health);

	float GetWeightLimit()const;
	void SetWeightLimit(float weightLimit);

	weapon GetWeapon()const;
	void SetWeapon(weapon weapon);

	armour GetArmour()const;
	void SetArmour(armour armour);

	int GetFood() const;
	void SetFood(int food);

	CharacterState GetCharacterState()const;
	void SetCharacterState(CharacterState state);

	void AddFood(int amount);

	void Eat();

	bool Attack(GameCharacter&character);

	void Defend();

	void Walk();

	void Run();

	void Sleep();

};
