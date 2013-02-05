#include "StdAfx.h"
#include "Util.h"

CTime GetYearMonthDayDate(const std::wstring & strYear_Month_Day)
{
	INT nYear = 0, nMonth = 0, nDay = 0;
	std::wstring strYear, strMonth, strDay;

	// strYear_Month_Day <- 2012-01-17 ���·� �Ǿ��ִ�. ��, ��, �� �Ľ�

	strYear.assign(strYear_Month_Day, 0, 4);
	strMonth.assign(strYear_Month_Day, 5, 2);
	strDay.assign(strYear_Month_Day, 8, 2);

	nYear = _wtoi(strYear.c_str());
	nMonth = _wtoi(strMonth.c_str());
	nDay = _wtoi(strDay.c_str());

#ifdef _DEBUG

	// ������ üũ ������ �Ѵ�.
	if( nYear < 0 || nYear > 3000 )
	{
		assert(NULL && "Year Error");
	}
	if( nMonth < 0 || nMonth > 12 )
	{
		assert(NULL && "Year Error");
	}
	if( nDay < 0 || nDay > 31 )
	{
		assert(NULL && "Year Error");
	}

#endif

	CTime(nYear, nMonth, nDay, 0, 0, 0, 0);
}

