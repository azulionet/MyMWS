#include "StdAfx.h"
#include "DataFileter_MTG.h"

const std::wstring strKeyMTG[MTG_BLOCK_DATA_MAX_COUNT] = {
	L"name",
	L"block",
	L"code",
	L"release-date",

	L"total",
	L"basic-land",
	L"common",
	L"uncommon",
	L"rare",
	L"mythic-rare"
};

CDataFileter_MTG::CDataFileter_MTG(void)
{
}


CDataFileter_MTG::~CDataFileter_MTG(void)
{
}


const std::wstring & CDataFileter_MTG::GetKeyData(const INT nKeyType, const INT nKeyNum)
{
	if( nKeyType < 0 || nKeyNum < 0 )
	{
		return std::wstring(L"");
	}

	if( nKeyType == GE_KEY_TYPE_BLOCK_NAME )
	{
		if( nKeyNum >= MTG_BLOCK_DATA_MAX_COUNT ) return std::wstring(L"");

		return strKeyMTG[nKeyNum];
	}

	return std::wstring("");
}
