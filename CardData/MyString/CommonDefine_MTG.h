// 매직 더 개더링 만을 위함
#include <iostream>
#include <string>
#include <windows.h>

// enum
enum GE_MTG_RARELITY
{
	MTG_RARELITY_COMMON,
	MTG_RARELITY_UNCOMMON,
	MTG_RARELITY_RARE,
	MTG_RARELITY_MITHIC_RARE,
};

enum GE_MTG_BLOCK_DATA
{
	MTG_BLOCK_DATA_DEFAULT = -1,

	MTG_BLOCK_SET_NAME,
	MTG_BLOCK_BLOCK_NAME,
	MTG_BLOCK_BLOCK_CODE,
	MTG_BLOCK_RELEASE_DATE,

	MTG_BLOCK_TOTAL_COUNT,
	MTG_BLOCK_BASIC_LAND_COUNT,
	MTG_BLOCK_COMMON_COUNT,
	MTG_BLOCK_UNCOMMON_COUNT,
	MTG_BLOCK_RARE_COUNT,
	MTG_BLOCK_MYTHIC_RARE_COUNT,

	MTG_BLOCK_DATA_MAX_COUNT
};

// define
