#include "StdAfx.h"
#include "DataFilterManager.h"


CDataFilterManager::CDataFilterManager(void)
{
	m_FilterList.resize(GE_TCG_TYPE_MAX_COUNT);
}


CDataFilterManager::~CDataFilterManager(void)
{

}

const std::wstring & CDataFilterManager::GetKeyData(const INT nTCG_Type, const INT nKeyType, const INT nKeyNum)
{
	return m_FilterList[nTCG_Type].GetKeyData(nKeyType, nKeyNum);
}
