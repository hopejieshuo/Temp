#include <IOSTREAM>
#include <CSTDIO>
#include <CSTDLIB>
#include <CTIME>
#include <CSTRING>
#include <CMATH>
#include <TCHAR.H>
#include <WINDOWS.H>
#include <SHLWAPI.H>
#include <MMSYSTEM.H>
#pragma comment(lib,"WINMM.LIB")
#pragma comment(lib,"SHLWAPI.LIB")
#pragma comment(lib,"MSIMG32.LIB")

#define nTime 15
#define PI 3.141
#define Effect_Num 25
#define SHTDN_REASON_MAJOR_APPLICATION 0x00040000

typedef struct TROJAN_EXECUTE_STRUCT {
	LPVOID effect;
	LPVOID audio;
} *pTROJAN_EXECUTE_STRUCT;

typedef union _RGBQUAD {
	COLORREF rgb;
	struct {
		BYTE b;
		BYTE g;
		BYTE r;
		BYTE unused;
	};
} *PRGBQUAD;