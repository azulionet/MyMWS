#pragma once

struct ST_TCG_DATA // ������ ���θ� ��Ʈ������ ������� �Ŷ� �ش� Ŭ������ ����
{
	std::vector<std::wstring> Data;

	VOID resize(const INT nSize)
	{
		Data.resize(nSize);
	}
};

CTime GetReleaseData();

