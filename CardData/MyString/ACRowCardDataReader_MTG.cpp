#include "StdAfx.h"
#include "ACRowCardDataReader_MTG.h"

// �߰�
// 1. ��ũ - mtgsalvation.com ������, mws.txt �� �Ľ��ؾߴ��, ��� ������ �Ľ�
// 2. ���� ī�尡 ������ �� 1���� �տ� �ΰ��� add�ϴ� ����� �ʿ��ϴ�.
// 3. - ������� - mtgsalvation.com�� http://www.mtgsalvation.com/printable-gatecrash-spoiler.html
//    ��ư ���� �ٿ��� ������ �Ƹ� �ؽ�Ʈ ��Ÿ�Ϸ� �� �ðŰ����� �� �� �������߰ڴ�.


ACRowCardDataReader_MTG::ACRowCardDataReader_MTG(void)
{
}


ACRowCardDataReader_MTG::~ACRowCardDataReader_MTG(void)
{
}


GE_ERROR ACRowCardDataReader_MTG::Parsing(const std::string & strFileName)
{
// 	if( strFileName == std::string("") ) // �⺻ �����͸� ���� ���(���̳ʸ� ������)
// 	{
// 		return GE_ERROR_NONE_BASIC_DATA;
// 	}

	// ���� �Ľ��̴� ���� �����̴� ���� �ϴ�.

	// ������ ������ü�� ��� �����͸� �α׸� �ܾ�ٰ�

	// ī�� ������ ���ο� �ִ°ſ��� �α׸� �ű�� �Ŷ� �ϴ�.

	// ���� ������ �����͸� ���� ������ ���� ���������� ��� �ұ� �����ؼ�

	// �ϴ��� �� ����ְ� �ۼ��� ����

	// �׷���, �׳� �ϴ� �����ϰ� üũ �غ��� �ش� ������ off�� ���� ã�ƴ� �д°ɷ�



	// if( g_MainData->m_bIsSetted == TRUE )
	// {
	//		// �̹� ������ ���� ����! �׳� �����Ѵ�.
	//		return GE_ERROR_NONE
	// }



	// mwsȤ�� mtgsalvation �������� ����ϴ� ��� ī�� �����͸� �б����� ��ƾ
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