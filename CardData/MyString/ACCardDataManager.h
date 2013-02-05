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

	
public : // 리팩토링 :  일단 개발단계라서 해당데이터 직접 접근

	std::vector<ST_TCG_DATA> m_CardDataList[GE_TCG_TYPE_MAX_COUNT];
		
};

#define GetCardDataManager() (ACCardDataManager::GetInstance())
#define ReleaseCardDataManager() (ACCardDataManager::ReleaseInstance())
