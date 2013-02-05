#pragma once

class ACCardDataManager
{

public:

	// Singleton
	static ACCardDataManager * m_pInstance;

	// Make Get, Release Singleton Method
	MAKE_SINGLETON_METHOD(m_pInstance, ACCardDataManager)


private:
	ACCardDataManager(void);
	~ACCardDataManager(void);

	
public : // �����丵 :  �ϴ� ���ߴܰ�� �ش絥���� ���� ����

	std::vector<ST_TCG_DATA> m_CardDataList[GE_TCG_TYPE_MAX_COUNT];
		
};

#define GetCardDataManager() (ACCardDataManager::GetInstance())
#define ReleaseCardDataManager() (ACCardDataManager::ReleaseInstance())
