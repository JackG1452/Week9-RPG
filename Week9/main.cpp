
#include <iostream>
#include "item.h"
#include "weapon.h"
#include "armour.h"

using namespace std;

int main() {

	Item item("gold coin", 25, 0.5);

	weapon weapon("Sword", 25, 2.5, 3, 3);
	cout << weapon.ToString() << endl;

	armour armour("Helmet", 25, 2.5, 3, 3, Wood);
	cout << armour.ToString() << endl;
}