#pragma once
class CDataFilter_WOW
{
public:
	CDataFilter_WOW(void);
	~CDataFilter_WOW(void);

	const std::wstring & GetKeyData(const INT nKeyType, const INT nKeyNum);
};

