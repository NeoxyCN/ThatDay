#include <string>

namespace Item {
	enum ItemType
	{
		block,
		food,
		weapon,
		weapon_ammo,
		plant,
		armor,
		animal,
	};

	struct ItemStack
	{
		int id;
		int number;
	};

	struct Item {
		int id;
		std::string name;
		std::string texture;
		int maxStack;
		
	};
}