#include "StdAfx.h"
#include "ACGameDataManager.h"

// ������ �߰��ÿ� �ٷ� �� tcg������ŭ �ִ� �̳Ѱ� ��� ������,
// �� �ؿ� const INT�� ������ �� �̳ѿ� �ش��ϴ� ���� �ְ� �����. ������ 

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

// �����丵 : ... ������ ���߾�. ������ ���ߴ� ����. �ٸ� ���� ����� �������� �����ϴ� ������
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
