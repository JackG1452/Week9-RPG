#pragma once
#include "item.h"


Item::Item() {

}

Item::Item(std::string itemName, int itemValue, float weight) :
	itemName_{ itemName }, itemValue_{ itemValue }, weight_{ weight } {

}

Item::~Item(){}

std::string Item::GetItemName() const {
	return itemName_;
}

void Item::SetItemName(std::string itemName) {
	itemName_ = itemName;
}

int Item::GetItemValue() const {
	return itemValue_;
}

void Item::SetItemValue(int itemValue) {
	itemValue_ = itemValue;
}

float Item::GetWeight() const {
	return weight_;
}

void Item::SetWeight(float weight) {
	weight_ = weight;
}

std::string Item::ToString() {
	return itemName_+ " worth " + std::to_string(itemValue_) + " Gold Coins";
}