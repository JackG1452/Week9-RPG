#pragma once
#include<string>

class Item {

private:
	std::string itemName_;
	int itemValue_;
	float weight_;

public:
	Item();
	Item(std::string itemName, int itemValue, float weight);

	~Item();

	std::string GetItemName() const;
	void SetItemName(std::string itemName);

	int GetItemValue() const;
	void SetItemValue(int itemValue);

	float GetWeight() const;
	void SetWeight(float weight);

	std::string ToString();

	
};