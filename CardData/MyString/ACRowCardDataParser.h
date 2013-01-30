#pragma once

// ī�� ������ �ļ�
// ���ڷ� �����ؼ� �Ľ�

class ACRowCardDataReader;

class ACRowCardDataParser
{	
public:
	ACRowCardDataParser();
	~ACRowCardDataParser();

	VOID SetParserType(const AGE_TCG_DEFINE eType);
	VIRTUAL_ERROR Parsing(const std::string & strFileName = std::string(""));

private :

	// TCG_DEFAULT
	// TCG_MAGIC_THE_GATHERING

	ACRowCardDataReader *	m_pReader;
};
