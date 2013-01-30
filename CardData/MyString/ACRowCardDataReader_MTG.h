#pragma once
#include "ACRowCardDataReader.h"

class ACRowCardDataReader_MTG : public ACRowCardDataReader
{
	enum CE_READ_TYPE
	{
		CE_READ_MWS_ADDDATA,	// 게크 풀 스포 뜨면 사람들이 올리는 데이터
		CE_READ_SALVATION,		// http://www.mtgsalvation.com/printable-gatecrash-spoiler.html 여기에 나오는 데이터 그대로 긁어다 그냥 저장했을때(유니코드말고) 나오는 txt파일
		CE_READ_SALVATION_HTML,	// 셀베이션에 웹으로 연결해서 얻는거 파싱
	};


public:
	ACRowCardDataReader_MTG(void);
	~ACRowCardDataReader_MTG(void);

	VIRTUAL_ERROR	Parsing(const std::string & strFileName);
};

