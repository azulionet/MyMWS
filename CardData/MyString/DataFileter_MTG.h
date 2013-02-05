#pragma once

#include "DataFilter.h"

class CDataFileter_MTG : public CDataFilter
{
public:
	CDataFileter_MTG(void);
	~CDataFileter_MTG(void);

	const std::wstring & GetKeyData(const INT nKeyType, const INT nKeyNum);
};

