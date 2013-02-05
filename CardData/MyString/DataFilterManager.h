#pragma once

class CDataFilter;

// 데이터는 전반적으로 스트링밖에 들고있지 않기 때문에 해당 데이터에 대해서 파서가 필요하다 -_-;;
// 해당 파서들의 리스트를 관리하는 클래스

// 잠깐 지울까.. -_-;;; 
// 해당 데이터의 파서로 만들꺼면 차라리 유틸 함수를 만드는게 나을거같고.

// 차라리 정말 데이터에 키값에 해당하는 문자열같은 걸 들고있다가.
// 리턴해주는게 나을듯 ( 들고있는 문자열은 다른데서 굳이 가지기는 애매한 그런 문자열, 데이터로 한하는 것으로 )

class CDataFilterManager
{
public:
	CDataFilterManager(void);
	~CDataFilterManager(void);

	std::vector<CDataFilter> m_FilterList;

	const std::wstring & GetKeyData(const INT nTCG_Type, const INT nKeyType, const INT nKeyNum);
	const CDataFilter * GetFilter();
};

