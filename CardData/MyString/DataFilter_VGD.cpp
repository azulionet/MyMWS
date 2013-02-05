#include "StdAfx.h"
#include "DataFilter_VGD.h"


const std::wstring strKeyVGD[VGD_BLOCK_DATA_MAX_COUNT] = {
	L"name",
	L"total",
};


CDataFilter_VGD::CDataFilter_VGD(void)
{
}


CDataFilter_VGD::~CDataFilter_VGD(void)
{
}

const std::wstring & CDataFilter_VGD::GetKeyData(const INT nKeyType, const INT nKeyNum)
{
	return std::wstring("");
}