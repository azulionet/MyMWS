// 프로그램 내에서 쓰이는 전역적인 데이터의 정의

// enum

// 추가 : enum to string
enum AGE_TCG_DEFINE
{
	GE_TCG_DEFAULT = -1,
	GE_TCG_MAGIC_THE_GATHERING,
	GE_TCG_VANGUARD,
	GE_TCG_WORLD_OF_WARCRAFT,
};

// 추가 : enum to string비슷하게 일단 에러나면 문구 출력할 수 있는 시스템(로그)
// 지금은 로그까지는 됐으니까 귀찮아서 일단 제작
enum GE_ERROR
{
	GE_ERROR_NONE,

	GE_NULL_POINTER,	// 해당 포인터가 있었어야 하는 경우

	// 데이터 파싱 관련 에러
	GE_ERROR_PARSING,
	GE_ERROR_NONE_BASIC_DATA, // 파서에 기본 데이터로 불렀는데 해당 파일 데이터가 없을 때
};

// define

// 리팩토링 : short, word는 쓸일이 없을거같아서 일단 안만들어둠
#define VIRTUAL_VOID			virtual VOID
#define VIRTUAL_BYTE			virtual BYTE
#define VIRTUAL_INT				virtual INT
#define VIRTUAL_UINT			virtual UINT
#define VIRTUAL_DWORD			virtual DWORD
#define VIRTUAL_FLOAT			virtual FLOAT
#define VIRTUAL_DOUBLE			virtual DOUBLE
#define VIRTUAL_ERROR			virtual GE_ERROR


#define SAFE_DELETE(x)			{ if(x) {delete x; x = NULL;} }
#define SAFE_DELETE_ARRAY(x)	{ if(x) {delete[] x; x = NULL;} }


#define MAKE_SINGLETON_METHOD(x, ClassName) \
		static ClassName * GetInstance()	\
		{	\
			if( x == NULL )	\
			{	\
				x = new ClassName;	\
			}	\
			return x;	\
		}	\
		static VOID ReleaseInstance()	\
		{	\
			SAFE_DELETE(x);	\
		}


// struct

