#include "StdAfx.h"
#include "ACRowCardDataParser.h"
#include "ACRowCardDataReader.h"


// 리팩토링 : 이동 고려~
#include "ACRowCardDataReader_MTG.h"
#include "ACRowCardDataReader_VGD.h"
#include "ACRowCardDataReader_WOW.h"

class ACRowCardDataReaderFactory
{
public:

	ACRowCardDataReaderFactory(){}
	~ACRowCardDataReaderFactory(){}

	static ACRowCardDataReader * Make(AGE_TCG_DEFINE eType)
	{
		switch(eType)
		{
		case GE_TCG_MAGIC_THE_GATHERING:
			{
				return (new ACRowCardDataReader_MTG);
			}
			break;

		case GE_TCG_VANGUARD:
			{
				return (new ACRowCardDataReader_VGD);
			}
			break;

		case GE_TCG_WORLD_OF_WARCRAFT:
			{
				return (new ACRowCardDataReader_WOW);
			}
			break;

		default:
			return NULL;
		}

		assert(NULL && "");
		return NULL;
	}	
};

// 생성자
ACRowCardDataParser::ACRowCardDataParser() : m_pReader(NULL)
{
}

ACRowCardDataParser::~ACRowCardDataParser()
{
	SAFE_DELETE(m_pReader);	
}

VOID ACRowCardDataParser::SetParserType(const AGE_TCG_DEFINE eType)
{
	SAFE_DELETE(m_pReader);
	m_pReader = ACRowCardDataReaderFactory::Make(eType);
}

GE_ERROR ACRowCardDataParser::Parsing(const std::string & strFileName /*=std::string("")*/ )
{
	if( m_pReader )
		return (m_pReader->Parsing(strFileName));
	else
		return GE_NULL_POINTER;
}