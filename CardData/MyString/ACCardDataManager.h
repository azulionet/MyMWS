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

	
public : // 軒苫塘元 :  析舘 鯵降舘域虞辞 背雁汽戚斗 送羨 羨悦
			// 薦降 益軒壱 汽戚斗拭 企背辞 析鋼鉢研 梅生檎 じ硲畏嬢推
	std::map<std::string, ST_MTG_DATA> m_mapData_MTG;
	std::map<std::string, ST_VGD_DATA> m_mapData_VGD;

	// 軒苫塘元 : 析舘 穿蝕汽戚斗研 級壱赤澗杏稽 馬壱 しさし...
	// 亨備 彊神牽澗 穿蝕旋 汽戚斗亜 蒸嬢辞 適掘什 幻級奄亜 岨 益君革
	// 蟹掻拭 薪奄澗 依生稽 しさし

	// 鎧亜 校 級壱赤劃拭企廃 identity昔汽... 戚惟 琶推廃亜 粛陥 ばば
	AGE_TCG_DEFINE		m_eType;


	// 軒苫塘元 : 戚惟 更馬澗 坪球
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
