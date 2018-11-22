#pragma once
#include "gameCharacter.h"
#include <iostream>

GameCharacter::GameCharacter() {

	characterName_ = "Default";
	health_ = 1;
	weightLimit_ = 1;
	state_ = Idle;

	std::cout << "A base GameCharacter called " + characterName_ + " has been born" << std::endl;

}

GameCharacter::GameCharacter(std::string characterName, float health, float weightLimit, weapon weapon, armour armour, int food, CharacterState state) 
	:characterName_{ characterName }, health_{ health }, weightLimit_{ weightLimit }, weapon_{ weapon }, armour_{ armour }, food_{ food }, state_{state} {
}

GameCharacter::~GameCharacter() {}

std::string GameCharacter::GetCharacterName()const {
	return characterName_;
}

void GameCharacter::SetCharacterName(std::string characterName) {
	characterName_ = characterName;
}

float GameCharacter::GetHealth()const {
	return health_;
}

void GameCharacter::SetHealth(float health) {
	health_ = health;
}

float GameCharacter::GetWeightLimit()const {
	return weightLimit_;
}

void GameCharacter::SetWeightLimit(float weightLimit) {
	weightLimit_ = weightLimit;
}

weapon GameCharacter::GetWeapon()const {
	return weapon_;
}

void GameCharacter::SetWeapon(weapon weapon) {
	weapon_ = weapon;
}

armour GameCharacter::GetArmour()const {
	return armour_;
}

void GameCharacter::SetArmour(armour armour) {
	armour_ = armour;
}

int GameCharacter::GetFood()const {
	return food_;
}

void GameCharacter::SetFood(int food) {
	food_ = food;
}

CharacterState GameCharacter::GetCharacterState()const {
	return state_;
}

void GameCharacter::SetCharacterState(CharacterState state) {
	state_ = state;
}

void GameCharacter::AddFood(int amount) {

	food_ += amount;
}

void GameCharacter::Eat() {
	if (food_ < 0) {
		std::cout << "You have no food" << std::endl;
	}
	else {
		health_ += 0.25;
		food_ -= 1;
	}
}

bool GameCharacter::Attack(GameCharacter&character) {

	state_ = Attacking;

	std::cout << "Base Character " + characterName_ + " is attacking " + character.GetCharacterName() + " with a " + weapon_.GetItemName;
}

void GameCharacter::Defend(){

	std::cout << "Base Character " + characterName_ + " is defending themselves with a " + armour_.GetItemName + " made from " + armour_.GetArmourType;
}

void GameCharacter::Walk() {

	state_ = Walking;

	std::cout << characterName_ + " is " << state_;
}

void GameCharacter::Run() {

	state_ = Running;

	std::cout << characterName_ + " is " << state_;
}

void GameCharacter::Sleep() {

	state_ = Sleeping;

	std::cout << characterName_ + " is " << state_;
}