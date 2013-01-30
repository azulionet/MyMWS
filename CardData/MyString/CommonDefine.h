// ���α׷� ������ ���̴� �������� �������� ����

// enum

// �߰� : enum to string
enum AGE_TCG_DEFINE
{
	GE_TCG_DEFAULT = -1,
	GE_TCG_MAGIC_THE_GATHERING,
	GE_TCG_VANGUARD,
	GE_TCG_WORLD_OF_WARCRAFT,
};

// �߰� : enum to string����ϰ� �ϴ� �������� ���� ����� �� �ִ� �ý���(�α�)
// ������ �αױ����� �����ϱ� �����Ƽ� �ϴ� ����
enum GE_ERROR
{
	GE_ERROR_NONE,

	GE_NULL_POINTER,	// �ش� �����Ͱ� �־���� �ϴ� ���

	// ������ �Ľ� ���� ����
	GE_ERROR_PARSING,
	GE_ERROR_NONE_BASIC_DATA, // �ļ��� �⺻ �����ͷ� �ҷ��µ� �ش� ���� �����Ͱ� ���� ��
};

// define

// �����丵 : short, word�� ������ �����Ű��Ƽ� �ϴ� �ȸ�����
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

