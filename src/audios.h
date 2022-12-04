DWORD WINAPI AUDIO01(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t + (t & t ^ t >> 6) - t * ((t >> 9) & (t % 16 ? 2 : 6) & t >> 9));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO02(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)((t - (t >> 4 & t >> 8) & t >> 12) - 1);
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO03(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t & 598 ? t >> 4 : t >> 10);
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO04(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(100 * ((t << 2 | t >> 5 | t ^ 63) & (t << 10 | t >> 11)));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO05(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t * (t >> 8 | t >> 9) & 46 & t >> 8 ^ (t & t >> 13 | t >> 6));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO06(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(2 * (t >> 5 & t) - (t >> 5) + t * (t >> 14 & 14));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO07(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t * (3 + (1 ^ t >> 10 & 5)) * (5 + (3 & t >> 14)) >> (t >> 8 & 3));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO08(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(3 * ((t >> 1) + 20) * t >> 14 * t >> 18);
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO09(LPVOID lParam) {
    int nSamplesPerSec = 32000, nSampleCount = nSamplesPerSec * (int)(nTime / 10 * 9);
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(5 * t & t >> 7 | 3 * t & 4 * t >> 10);
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI AUDIO10(LPVOID lParam) {
    int nSamplesPerSec = 32000, nSampleCount = nSamplesPerSec * (int)(nTime / 10 * 9);
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t >> 5 | (t >> 2) * (t >> 5));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI FINALAUDIO01(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)((t >> 4) * (t >> 3) | t >> (t & 4096 ? 3 : 2));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI FINALAUDIO02(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t * (t & 16384 ? 6 : 5) * (3 + (1 & t >> 8)) >> (3 & t >> 8) | t >> 4);
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI FINALAUDIO03(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t >> 5 | (t << 3) + 12 * t * (t >> 13 | (t >> 1 | t >> 10 | t >> 2) & t >> 8));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI FINALAUDIO04(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)(t * (42 & t >> 10));
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}

DWORD WINAPI FINALAUDIO05(LPVOID lParam) {
    int nSamplesPerSec = 8000, nSampleCount = nSamplesPerSec * nTime;
	HANDLE hHeap = GetProcessHeap();
	PSHORT psSamples = (PSHORT)HeapAlloc(hHeap, 0, nSampleCount);
	WAVEFORMATEX waveFormat = { WAVE_FORMAT_PCM, 1, nSamplesPerSec, nSamplesPerSec, 1, 8, 0 };
	WAVEHDR waveHdr = { (PCHAR)psSamples, nSampleCount, 0, 0, 0, 0, NULL, 0 };
	HWAVEOUT hWaveOut;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &waveFormat, 0, 0, 0);
	for (INT t = 0; t < nSampleCount; t++) {
		BYTE bFreq = (BYTE)((t & 64 | t >> 5) ^ (t & 33 | t >> 8) ^ (t & 14 | t >> 9 | t & 76) ^ (t | 187) ^ t * (t >> 8 & 838 + t >> 13) & 644);
		((BYTE*)psSamples)[t] = bFreq;
	}
	waveOutPrepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	waveOutWrite(hWaveOut, &waveHdr, sizeof(waveHdr));
	Sleep(nSampleCount * 1000 / nSamplesPerSec);
	while (!(waveHdr.dwFlags & WHDR_DONE)) {
		Sleep(1);
	}
	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &waveHdr, sizeof(waveHdr));
	HeapFree(hHeap, 0, psSamples);
    return 0;
}