#pragma once
#include "ACRowCardDataReader.h"

class ACRowCardDataReader_MTG : public ACRowCardDataReader
{
	enum CE_READ_TYPE
	{
		CE_READ_MWS_ADDDATA,	// ��ũ Ǯ ���� �߸� ������� �ø��� ������
		CE_READ_SALVATION,		// http://www.mtgsalvation.com/printable-gatecrash-spoiler.html ���⿡ ������ ������ �״�� �ܾ�� �׳� ����������(�����ڵ帻��) ������ txt����
		CE_READ_SALVATION_HTML,	// �����̼ǿ� ������ �����ؼ� ��°� �Ľ�
	};


public:
	ACRowCardDataReader_MTG(void);
	~ACRowCardDataReader_MTG(void);

	VIRTUAL_ERROR	Parsing(const std::string & strFileName);
};

