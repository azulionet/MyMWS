// MyString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ACCardDataManager.h"
#include "ACRowCardDataParser.h"

INT ReadAllBlockData()
{
	const std::wifstream wStream(L"MtgBlockData.xml");
	std::wstring strReadedString;

	std::wstring	strToken;

	static int n = 0;

	const std::wstring strPushStr = L" </set>";

	const std::wstring strSetNameToken		= L"  <name>"; // 8
	const std::wstring strBlockNameToken	= L"  <block>"; // 9
	const std::wstring strCodeToken			= L"  <code>"; // 8
	const std::wstring strReleaseDateToken	= L"  <release-date>"; // 16

	const std::wstring strTotalToken		= L"   <total>"; // 10	
	const std::wstring strCommonToken		= L"   <common>"; // 11 
	const std::wstring strUncommonToken		= L"   <uncommon>"; // 13
	const std::wstring strRareToken			= L"   <rare>"; // 9
	const std::wstring strMythicRare		= L"   <mythic-rare>"; // 16
	const std::wstring strBasicLandToken	= L"   <basic-land>"; // 15

	std::wstring::iterator strItorStart;
	std::wstring::iterator strItorEnd;


	while ( std::getline(wStream, strReadedString) )
	{
		// 파일을 처음부터 끝까지 한줄씩 (마지막 \n 은 자동으로 제거됨) 읽음. 

		// wcsncmp()


		// 		E eType = GetKeyType(strReaderString);
		// 
		// 		std::wstring strGetBody = GetBodyText(strReaderString);
		// 
		// 		Block.SetString(eType, strGetBody);






		std::wcout << strReadedString << std::endl;

		if( strPushStr == strReadedString ) // 만약 해당 문자열이 </set> 이라면
		{
			m_BlockDataList.push_back(Block);
			Block.Clear();
		}

		// 






		++n;

		if( n >= 20 )
			break;
	}



	// std::wstring	strUni = CA2W("멀티바이트를 유니코드로 변환");
	// std::string		strMulti = CW2A(L"유니코드를 멀티바이트로 변환");
	// std::string		strUTF8	= CW2A(L"유니코드를 UTF8로 변환", CP_UTF8);

	return GE_ERROR_NONE;
}


int _tmain(int argc, _TCHAR* argv[])
{
	ACRowCardDataParser Parser;
	
	Parser.SetParserType(GE_TCG_MAGIC_THE_GATHERING);

	GE_ERROR err = Parser.Parsing();
	
	if( err == GE_ERROR_NONE_BASIC_DATA)
	{
		std::cout << "베이스 데이터가 없습니다." << std::endl;
	}
	else if( err != GE_ERROR_NONE )
	{
		std::cout << "파싱 에러" << std::endl;
	}

	ReleaseCardDataManager();


	ACSendSalvationGetProtocol ee;






	




	getchar();


	return 0;
}

