#pragma once

class CDataFilter
{
public:
	CDataFilter(void);
	~CDataFilter(void);

	const std::wstring & GetKeyData(const INT nKeyType, const INT nKeyNum) = 0;
}; 

