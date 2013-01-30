// 매직 더 개더링 만을 위함
#include <iostream>
#include <string>
#include <windows.h>

// enum
enum E_MTG_RARELITY
{
	E_MTG_RARELITY_COMMON,
	E_MTG_RARELITY_UNCOMMON,
	E_MTG_RARELITY_RARE,
	E_MTG_RARELITY_MITHIC_RARE,
};

// define

// struct

struct ST_MTG_DATA
{ 
	ST_MTG_DATA() : nCost(0), nRarelity(E_MTG_RARELITY_COMMON)
	{

	}

	std::string		strCardName;
	std::string		strCardType;
	std::string		strText;
	std::string		strFlavorText;
	std::string		strPT;
	std::string		strEdition;

	INT				nCost;
	INT				nRarelity;
};