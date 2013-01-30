#pragma once

class ACCardDataManager
{
	enum E_DATAMANGER_TYPE_WHEN_CHANGE_GAMETYPE
	{
		E_EMPTY_DATA,
		E_PROSESSION_DATA,
	};

public:

	// Singleton
	static ACCardDataManager * m_pInstance;

	// Make Get, Release Singleton Method
	MAKE_SINGLETON_METHOD(m_pInstance, ACCardDataManager)

	void print(  ) {std::cout << "ee" << std::endl;}

private:
	ACCardDataManager(void);
	~ACCardDataManager(void);

	
public : // 리팩토링 :  일단 개발단계라서 해당데이터 직접 접근
			// 제발 그리고 데이터에 대해서 일반화를 했으면 ㅈ호겠어요
	std::map<std::string, ST_MTG_DATA> m_mapData_MTG;
	std::map<std::string, ST_VGD_DATA> m_mapData_VGD;

	// 리팩토링 : 일단 전역데이터를 들고있는걸로 하고 ㅇㅅㅇ...
	// 딱히 떠오르는 전역적 데이터가 없어서 클래스 만들기가 좀 그러네
	// 나중에 옮기는 것으로 ㅇㅅㅇ

	// 내가 뭘 들고있냐에대한 identity인데... 이게 필요한가 싶다 ㅠㅠ
	AGE_TCG_DEFINE		m_eType;


	// 리팩토링 : 이게 뭐하는 코드
	VOID EmptyDataAll()
	{
// 		std::map<std::string, ST_MTG_DATA>::iterator itor_mtg;
// 		std::map<std::string, ST_MTG_DATA>::iterator itor_mtg_end;
// 
// 		itor_mtg = m_mapData_MTG.begin();
// 		itor_mtg_end = m_mapData_MTG.end();
// 
// 		for(; itor_mtg_end != itor_mtg; itor_mtg++ )
// 		{
// 			SAFE_DELETE(itor_mtg->second);
// 		}

		m_mapData_MTG.clear();
		
// 		std::map<std::string, ST_VGD_DATA>::iterator itor_vgd;
// 		std::map<std::string, ST_VGD_DATA>::iterator itor_vgd_end;
// 
// 		itor_vgd = m_mapData_VGD.begin();
// 		itor_vgd_end = m_mapData_VGD.end();
// 
// 		for(; itor_vgd_end != itor_vgd; itor_vgd++ )
// 		{
// 			SAFE_DELETE(itor_vgd->second);
// 		}

		m_mapData_VGD.clear();		
	}
};

#define GetCardDataManager() (ACCardDataManager::GetInstance())
#define ReleaseCardDataManager() (ACCardDataManager::ReleaseInstance())
