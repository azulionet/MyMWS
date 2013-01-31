#include "StdAfx.h"
#include "ACRowCardDataReader_MTG.h"

// 추가
// 1. 게크 - mtgsalvation.com 스포랑, mws.txt 는 파싱해야대고, 디비 얻은거 파싱
// 2. 새로 카드가 나왔을 때 1번의 앞에 두개를 add하는 모듈이 필요하다.
// 3. - 서버모듈 - mtgsalvation.com에 http://www.mtgsalvation.com/printable-gatecrash-spoiler.html
//    암튼 여기 붙여서 보내면 아마 텍스트 스타일로 쫙 올거같은데 한 번 만들어봐야겠다.


ACRowCardDataReader_MTG::ACRowCardDataReader_MTG(void)
{
}


ACRowCardDataReader_MTG::~ACRowCardDataReader_MTG(void)
{
}


GE_ERROR ACRowCardDataReader_MTG::Parsing(const std::string & strFileName)
{
// 	if( strFileName == std::string("") ) // 기본 데이터를 읽을 경우(바이너리 데이터)
// 	{
// 		return GE_ERROR_NONE_BASIC_DATA;
// 	}

	// 뭐가 파싱이던 뭐고 나발이던 간에 일단.

	// 리더의 역할자체가 사실 데이터를 싸그리 긁어다가

	// 카드 데이터 메인에 있는거에다 싸그리 옮기는 거라서 일단.

	// 지금 리더가 데이터를 읽은 다음에 메인 디피파일을 어떻게 할까 안정해서

	// 일단은 다 들고있게 작성할 예정

	// 그래서, 그냥 일단 간단하게 체크 해보고 해당 변수가 off면 파일 찾아다 읽는걸루



	// if( g_MainData->m_bIsSetted == TRUE )
	// {
	//		// 이미 파일을 읽은 상태! 그냥 리턴한다.
	//		return GE_ERROR_NONE
	// }



	// mws혹은 mtgsalvation 등지에서 사용하는 몇몇 카드 데이터를 읽기위한 루틴
	return GE_ERROR_NONE;
}






/************************************************************************/

// static void WriteLine(TCHAR* a_szLog)
// {
// #ifdef SPT_WRITE_LOG
// 
// 	if(!a_szLog || _tcsclen(a_szLog) == 0)
// 		return;
// 
// 	LPSTR	szAscii = NULL;
// 	int		nAsciiSize = 0;
// 
// 	nAsciiSize = WideCharToMultiByte(CP_ACP, 0, a_szLog, -1, NULL, 0, NULL, NULL);
// 	szAscii = (LPSTR)malloc(nAsciiSize+1);
// 	ZeroMemory(szAscii, nAsciiSize+1);
// 	WideCharToMultiByte(CP_ACP, 0, a_szLog, -1, szAscii, nAsciiSize+1, NULL, NULL);
// 	WriteLine(szAscii);
// 	free(szAscii);
// #endif // #ifdef SPT_WRITE_LOG
// }

// static void WriteLine(char* a_szLog)
// {
// #ifdef SPT_WRITE_LOG
// 	const char szCRLF[] = "\r\n";		
// 	char szBuf[MAX_PATH] = { 0, };
// 	struct _timeb timebuffer;
// 	char *timeline;
// 	char* pCurBuf = 0x00;
// 	int nTimeLineLen = 0;				
// 
// 	GetLogPath(szBuf);
// 
// 	// Step 1. Create File
// 	FILE* hFile;
// 
// 	if( !(hFile = fopen(szBuf, "a")) )
// 		return;
// 
// 	memset(szBuf, 0x00, MAX_PATH);
// 	pCurBuf = szBuf;
// 
// 	_ftime( &timebuffer );
// 	timeline = ctime( & ( timebuffer.time ) );
// 
// 	*pCurBuf = '[';
// 	nTimeLineLen = (int)strlen(timeline);
// 	memcpy(pCurBuf+1, timeline, nTimeLineLen-1);
// 	*(pCurBuf+nTimeLineLen) = ']';
// 	*(pCurBuf+nTimeLineLen+1) = ' ';
// 
// 	fwrite(szBuf, sizeof(char), strlen(szBuf), hFile);
// 	fwrite(a_szLog, sizeof(char), strlen(a_szLog), hFile);
// 	fwrite(szCRLF, sizeof(char), strlen(szCRLF), hFile);
// 	fclose(hFile);
// #endif // #ifdef SPT_WRITE_LOG
// }

/************************************************************************/