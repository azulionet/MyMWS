#pragma once

class CDataFilter;

// �����ʹ� ���������� ��Ʈ���ۿ� ������� �ʱ� ������ �ش� �����Ϳ� ���ؼ� �ļ��� �ʿ��ϴ� -_-;;
// �ش� �ļ����� ����Ʈ�� �����ϴ� Ŭ����

// ��� �����.. -_-;;; 
// �ش� �������� �ļ��� ���鲨�� ���� ��ƿ �Լ��� ����°� �����Ű���.

// ���� ���� �����Ϳ� Ű���� �ش��ϴ� ���ڿ����� �� ����ִٰ�.
// �������ִ°� ������ ( ����ִ� ���ڿ��� �ٸ����� ���� ������� �ָ��� �׷� ���ڿ�, �����ͷ� ���ϴ� ������ )

class CDataFilterManager
{
public:
	CDataFilterManager(void);
	~CDataFilterManager(void);

	std::vector<CDataFilter> m_FilterList;

	const std::wstring & GetKeyData(const INT nTCG_Type, const INT nKeyType, const INT nKeyNum);
	const CDataFilter * GetFilter();
};

