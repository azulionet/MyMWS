#include "StdAfx.h"
#include "ACGameDataManager.h"

// 데이터 추가시에 바로 밑 tcg갯수만큼 있는 이넘값 사용 종류와,
// 그 밑에 const INT로 정의한 각 이넘에 해당하는 값을 넣고 만든다. ㅇㅅㅇ 

enum CE_GAME_DATA_MTG
{
	CE_MTG_BLOCK_DATA,
	CE_MTG_GAME_DATA_MAX_COUNT
};

enum CE_GAME_DATA_VGD
{
	CE_VGD_BLOCK_DATA,
	CE_VGD_GAME_DATA_MAX_COUNT
};

enum CE_GAME_DATA_WOW
{
	CE_WOW_BLOCK_DATA,
	CE_WOW_GAME_DATA_MAX_COUNT
};



const INT DATACOUNT_MTG[] =
{
	MTG_BLOCK_DATA_MAX_COUNT,
	-1
};

const INT DATACOUNT_VGD[] =
{
	VGD_BLOCK_DATA_MAX_COUNT,
	-1
};

const INT DATACOUNT_WOW[] =
{
	WOW_BLOCK_DATA_MAX_COUNT,
	-1
};

const INT * pData[GE_TCG_TYPE_MAX_COUNT] =
{
	DATACOUNT_MTG,
	DATACOUNT_VGD,
	DATACOUNT_WOW
};

const INT nMax[GE_TCG_TYPE_MAX_COUNT] = 
{
	CE_MTG_GAME_DATA_MAX_COUNT,
	CE_VGD_GAME_DATA_MAX_COUNT,
	CE_WOW_GAME_DATA_MAX_COUNT
};

// 리팩토링 : ... 구현이 급했어. 구현이 급했단 말야. 다른 좋은 방법이 생각나면 변경하는 것으로
ACGameDataManager::ACGameDataManager(void)
{
	INT nCount = 0;

	for( int i=0; i<GE_TCG_TYPE_MAX_COUNT; ++i)
	{	
		const INT * ppData = pData[i];
		m_DataList[i].resize(nMax[i]);

		for ( int j=0; j<nMax[i]; ++j, ++ppData )
		{
			if( *ppData == -1 )
			{
				assert(NULL && "No Here");
			}

			m_DataList[i][j].resize(*ppData);
		}		
	}
}


ACGameDataManager::~ACGameDataManager(void)
{
}
