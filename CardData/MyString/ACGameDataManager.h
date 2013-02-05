#pragma once

// 카드외 데이터들을 가지고 있는 클래스
class ACGameDataManager
{
	// Singleton
	static ACGameDataManager * m_pInstance;

	// Make Get, Release Singleton Method
	MAKE_SINGLETON_METHOD(m_pInstance, ACGameDataManager)

public:
	ACGameDataManager(void);
	~ACGameDataManager(void);

	std::vector<ST_TCG_DATA> m_DataList[GE_TCG_TYPE_MAX_COUNT];
};

#define GetGameDataManager() (ACGameDataManager::GetInstance())
#define ReleaseGameDataManager() (ACGameDataManager::ReleaseInstance())