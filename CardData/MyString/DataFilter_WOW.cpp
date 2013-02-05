#include "StdAfx.h"
#include "DataFilter_WOW.h"


const std::wstring strKeyWOW[WOW_BLOCK_DATA_MAX_COUNT] = {
	L"name",
	L"total",
};


CDataFilter_WOW::CDataFilter_WOW(void)
{
}


CDataFilter_WOW::~CDataFilter_WOW(void)
{
}

const std::wstring & CDataFilter_WOW::GetKeyData(const INT nKeyType, const INT nKeyNum)
{
	return std::wstring(L"");
}