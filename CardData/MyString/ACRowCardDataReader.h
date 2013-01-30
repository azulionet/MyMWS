#pragma once

class ACRowCardDataReader
{
public:
	ACRowCardDataReader(void);
	~ACRowCardDataReader(void);

	VIRTUAL_ERROR	Parsing(const std::string & strFileName);
};

