// MyString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ACCardDataManager.h"
#include "ACRowCardDataParser.h"




class ACSendSalvationGetProtocol
{
public :
	ACSendSalvationGetProtocol() : m_hClient(INVALID_SOCKET), m_nAddrSize(0)
	{
		WSADATA wsaData;
	
		WSAStartup(MAKEWORD(2,2), &wsaData);

		struct in_addr	stAddr;

		hostent * host = gethostbyname("www.mtgsalvation.com");

		// hostent * host = gethostbyname("www.mtgsalvation.com/printable-gatecrash-spoiler.html");
		// hostent * host = gethostbyname("www.naver.com");

		INT * pN = (INT*)host->h_addr_list;
		stAddr.s_addr = *pN;
		// std::string str = inet_ntoa(stAddr);


		m_hClient = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

		m_Addr_Client.sin_family = PF_INET;
		m_Addr_Client.sin_port = htons(80);
		// m_Addr_Client.sin_addr = htonl( inet_addr(inet_ntoa(stAddr)) );
		m_Addr_Client.sin_addr.s_addr = inet_addr(inet_ntoa(stAddr));

		m_nAddrSize = sizeof(m_Addr_Client);


		std::wstring strGet(L"GET http://www.mtgsalvation.com/printable-gatecrash-spoiler.html HTTP/1.1");

		wchar_t strBuf[MAX_PATH] = {0,};

		wcscpy(strBuf, strGet.c_str());


		CHAR strBBuf[MAX_PATH] = {0,};

		WideCharToMultiByte(CP_ACP,0,strBuf,-1,strBBuf,(strGet.length()*2),NULL,NULL);



		sendto(m_hClient, strBBuf, (strGet.length()*2), 0, (sockaddr*)&m_Addr_Client, m_nAddrSize);

		sockaddr_in addrRecv;
		INT			addrRecvSize = sizeof(addrRecv);

		while( recvfrom(m_hClient, strBBuf, MAX_PATH, 0, (sockaddr*)&addrRecv, &addrRecvSize) != 0 )
		{
			std::cout << strBuf << std::endl;
		}
	}

	~ACSendSalvationGetProtocol()
	{
		WSACleanup();
	}

	SOCKET m_hClient;
	SOCKADDR_IN m_Addr_Client;
	INT m_nAddrSize;

};

int _tmain(int argc, _TCHAR* argv[])
{
	GetCardDataManager()->m_eType = GE_TCG_MAGIC_THE_GATHERING;

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

