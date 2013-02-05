#pragma once

struct ST_TCG_DATA // 데이터 전부를 스트링으로 들고있을 거라서 해당 클래스를 제작
{
	std::vector<std::wstring> Data;

	VOID resize(const INT nSize)
	{
		Data.resize(nSize);
	}
};

CTime GetReleaseData();

