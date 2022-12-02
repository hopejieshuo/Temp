DWORD WINAPI PAYLOAD01(LPVOID lpParam){
    int dwStartTime = time(NULL);
    int tunnelTimes = 10;
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        for(int i = 0; i <= tunnelTimes; i++){
        	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
        	PatBlt(hcdc, i * (w / (2 * (tunnelTimes + 1))), i * (h / (2 * (tunnelTimes + 1))), w - 2 * (i * (w / (2 * (tunnelTimes + 1)))), h - 2 * (i * (h / (2 * (tunnelTimes + 1)))), PATINVERT);
        }
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(100);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD02(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        BitBlt(hcdc, -20, -20, w, h, hcdc, 0, 0, SRCCOPY);
    	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
    	PatBlt(hcdc, 0, 0, w, h, PATINVERT);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(20);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD03(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	BitBlt(hcdc, 0, 25 - (5 * (rand() % 10)), w - 20, h, hcdc, 20, 0, NOTSRCCOPY);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(20);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD04(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	for(int y = 0; y <= h; y++){
            BitBlt(hcdc, 10 * ((rand() % 5) - 3), y, w, 1, hcdc, 0, y, SRCCOPY);
        }
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(100);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD05(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        POINT pos[3];
        pos[0].x = 0, pos[0].y = 0;
        pos[1].x = cos(PI / 36) * w, pos[1].y = sin(PI / 36) * w;
        pos[2].x = (-1) * (sin(PI / 36) * h), pos[2].y = cos(PI / 36) * h;
		PlgBlt(hcdc, pos, hcdc, 0, 0, w, h, 0, 0, 0);
    	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
    	PatBlt(hcdc, 0, 0, w, h, PATINVERT);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(100);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD06(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        POINT pos[3];
        pos[0].x = h / 40, pos[0].y = h / 40;
        pos[1].x = w -  (h / 40), pos[1].y = 0;
        pos[2].x = h / 40, pos[2].y = h;
		PlgBlt(hcdc, pos, hcdc, 0, 0, w, h, 0, 0, 0);
    	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
    	PatBlt(hcdc, 0, 0, w, h, PATINVERT);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(100);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD07(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        POINT pos[3];
        pos[0].x = w - (cos(PI / 36) * w), pos[0].y = (-1) * (sin(PI / 36) * w);
        pos[1].x = w, pos[1].y = 0;
        pos[2].x = w - ((cos(PI / 36) * w) + (sin(PI / 36) * h)), pos[2].y = (cos(PI / 36) * h) - (sin(PI / 36) * w);
		PlgBlt(hcdc, pos, hcdc, 0, 0, w, h, 0, 0, 0);
    	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
    	PatBlt(hcdc, 0, 0, w, h, PATINVERT);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(100);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD08(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        POINT pos[3];
        pos[0].x = rand() % w, pos[0].y = rand() % h;
        pos[1].x = rand() % w, pos[1].y = rand() % h;
        pos[2].x = rand() % w, pos[2].y = rand() % h;
		PlgBlt(hcdc, pos, hcdc, 0, 0, w, h, 0, 0, 0);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(100);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD09(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        POINT pos[3];
        pos[0].x = 0, pos[0].y = 0;
        pos[1].x = w, pos[1].y = 0;
        pos[2].x = w / 20, pos[2].y = h;
		PlgBlt(hcdc, pos, hcdc, 0, 0, w, h, 0, 0, 0);
    	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
    	PatBlt(hcdc, 0, 0, w, h, PATINVERT);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(100);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI PAYLOAD10(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        switch(rand() % 3){
            case 0:
                SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
                Pie(hcdc, rand() % w, rand() % h, rand() % w, rand() % h, rand() % w, rand() % h, rand() % w, rand() % h);
                break;
            case 1:
                SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
                Ellipse(hcdc, rand() % w, rand() % h, rand() % w, rand() % h);
                break;
            case 2:
                SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
                Rectangle(hcdc, rand() % w, rand() % h, rand() % w, rand() % h);
                break;
        }
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(20);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI GDI01(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        for (int i = 0; i < w * h; i++) {
            prgbScreen[i].r = prgbScreen[i].r >= 255 ? prgbScreen[i].r += 10 : prgbScreen[i].r;
            prgbScreen[i].g = prgbScreen[i].g - (prgbScreen[i].g / 10);
            prgbScreen[i].b = prgbScreen[i].b - (prgbScreen[i].b / 10);
        }
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI02(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        for (int i = 0; i < h; i++) {
            int rgbTemp = rand() % 255;
            for(int l = 0; l < w; l++){
                prgbScreen[i * w + l].rgb = RGB(rgbTemp, rgbTemp, rgbTemp);
            }
        }
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI03(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        for (int i = 0; i < w * h; i++) {
            prgbScreen[i].r = rand() % 255;
            prgbScreen[i].g = rand() % 255;
            prgbScreen[i].b = rand() % 255;
        }
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI04(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        for (int i = 0; i < w * h; i++) {
            prgbScreen[i].rgb = (prgbScreen[i].rgb * 2) % RGB(255, 255, 255);;
        }
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI05(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        for (int i = 0; i < w * h; i++) {
            prgbScreen[i].rgb = RGB((prgbScreen[i].r << 1) % 255, (prgbScreen[i].g << 1) % 255, (prgbScreen[i].b << 1) % 255);
        }
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI06(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	for (int i = 0; i < h; i++) {
    		for (int j = 0; j < w; j++) {
    			int y = (i + rand() % 11 - 5);
    			if (y < 0) {
    				y = -y;
    			}
    			int x = (j + rand() % 11 - 5);
    			if (x < 0) {
    				x = -x;
    			}
    			prgbScreen[i * w + j].rgb = prgbScreen[(y * w + x) % (w * h)].rgb;
    		}
    	}
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI07(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	for (int i = 0; i < w * h; i++) {
    		prgbScreen[i].rgb = ((10 * t + i) / 10) % RGB(255, 255, 255);
    	}
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI08(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	for (int i = 0; i < w * h; i++) {
    		prgbScreen[i].rgb = (t << i) % RGB(255, 255, 255);
    	}
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI09(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	for (int i = 0; i < w * h; i++) {
			int x = i % w, y = i / h;
			prgbScreen[i].r += GetRValue(x * y);
			prgbScreen[i].g += GetGValue(x * y);
			prgbScreen[i].b += GetBValue(x * y);
    	}
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI GDI10(LPVOID lpParam){
	int dwStartTime = time(NULL);
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
	BITMAPINFO bmi = { 0 };
	bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biWidth = w;
	bmi.bmiHeader.biHeight = h;
	PRGBQUAD prgbScreen;
	HDC hcdc = CreateCompatibleDC(hdc);
	HBITMAP hBitmap = CreateDIBSection(hdc, &bmi, 0, (void**)&prgbScreen, NULL, 0);
	SelectObject(hcdc, hBitmap);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++) {
		hdc = GetDC(NULL);
		BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	for (int i = 0; i < w * h; i++) {
			int x = i % w, y = i / h, tmp = y ^ y | x;
			prgbScreen[i].rgb = x & y & tmp;
    	}
		BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteObject(hdc);
		Sleep(10);
	}
	DeleteObject(hBitmap);
	DeleteDC(hcdc);
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
    return 0;
}

DWORD WINAPI FINALPAYLOAD01(LPVOID lpParam){
    int dwStartTime = time(NULL);
    double angle = 0;
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        for (float i = 0; i < w + h; i += 0.99f) {
            int a = sin(angle) * 20;
            BitBlt(hcdc, 0, i, w, 1, hdc, a, i, SRCCOPY);
            angle += PI / 40;
        }
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(5);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI FINALPAYLOAD02(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        BitBlt(hcdc, w / 20, 0, w - (w / 20), h - (h / 20), hdc, 0, h / 20, SRCCOPY);
        BitBlt(hcdc, 0, h - (h / 20), w, h / 20, hdc, 0, 0, SRCCOPY);
        BitBlt(hcdc, 0, h / 20, w / 20, h - (h / 20), hdc, w - (w / 20), h / 20, SRCCOPY);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(5);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI FINALPAYLOAD03(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
    	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
        PatBlt(hcdc, 0, (t % 40) * (h / 40), w, h / 40, PATINVERT);
    	SelectObject(hcdc, CreateSolidBrush(RGB(rand() % 256, rand() % 256, rand() % 256)));
        PatBlt(hcdc, (t % 40) * (w / 40), 0, w / 40, h, PATINVERT);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(5);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI FINALPAYLOAD04(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        StretchBlt(hcdc, 20 * ((t % 3) - 1), 20 * ((t % 3) - 1), w - 40 * ((t % 3) - 1), h - 40 * ((t % 3) - 1), hcdc, 0, 0, w, h, SRCCOPY);
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(5);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}

DWORD WINAPI FINALPAYLOAD05(LPVOID lpParam){
    int dwStartTime = time(NULL);
	for (int t = 0; time(NULL) < (dwStartTime + nTime); t++){
        int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
        HDC hdc = GetDC(NULL);
    	HDC hcdc = CreateCompatibleDC(hdc);
    	HBITMAP hBitmap = CreateCompatibleBitmap(hdc, w, h);
    	SelectObject(hcdc, hBitmap);
    	BitBlt(hcdc, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        SetBkMode(hcdc, 1);
        LPCSTR text[5] = {"Hopejieshuo", "Temp.exe", "GDI Malware", "Fuck You", "You are a Idiot"};
        int tmp = rand() % 5;
        SetTextColor(hcdc, RGB(rand() % 255, rand() % 255, rand() % 255));
        HFONT font = CreateFont(20 + (rand() % 30), 20 + (rand() % 30), 0, 0, FW_THIN, 1, 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Baby Kruffy");
        SelectObject(hcdc, font);
        TextOut(hcdc, rand() % w, rand() % h, text[tmp], strlen(text[tmp]));
        BitBlt(hdc, 0, 0, w, h, hcdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		ReleaseDC(NULL, hcdc);
        DeleteObject(font);
		DeleteObject(hdc);
		DeleteObject(hcdc);
		DeleteObject(hBitmap);
		Sleep(5);
    }
	RedrawWindow(NULL, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_ALLCHILDREN);
	return 0;
}