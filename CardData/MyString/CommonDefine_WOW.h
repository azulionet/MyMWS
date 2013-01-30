// 매직 더 개더링 만을 위함
#include <iostream>
#include <string>
#include <windows.h>

// enum
enum E_WOW_RARELITY
{
	E_WOW_RARELITY_COMMON,
	E_WOW_RARELITY_UNCOMMON,
	E_WOW_RARELITY_RARE,
	E_WOW_RARELITY_MITHIC_RARE,
};

// define

// struct

struct ST_WOW_DATA
{
	ST_WOW_DATA() : nCost(0), nRarelity(E_WOW_RARELITY_COMMON)
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