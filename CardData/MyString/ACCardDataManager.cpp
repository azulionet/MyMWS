#include "StdAfx.h"
#include "ACCardDataManager.h"

ACCardDataManager * ACCardDataManager::m_pInstance = NULL;

ACCardDataManager::ACCardDataManager(void) : m_eType(GE_TCG_DEFAULT)
{
}

ACCardDataManager::~ACCardDataManager(void)
{
}
