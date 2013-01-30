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

	
public : // �����丵 :  �ϴ� ���ߴܰ�� �ش絥���� ���� ����
			// ���� �׸��� �����Ϳ� ���ؼ� �Ϲ�ȭ�� ������ ��ȣ�ھ��
	std::map<std::string, ST_MTG_DATA> m_mapData_MTG;
	std::map<std::string, ST_VGD_DATA> m_mapData_VGD;

	// �����丵 : �ϴ� ���������͸� ����ִ°ɷ� �ϰ� ������...
	// ���� �������� ������ �����Ͱ� ��� Ŭ���� ����Ⱑ �� �׷���
	// ���߿� �ű�� ������ ������

	// ���� �� ����ֳĿ����� identity�ε�... �̰� �ʿ��Ѱ� �ʹ� �Ф�
	AGE_TCG_DEFINE		m_eType;


	// �����丵 : �̰� ���ϴ� �ڵ�
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
