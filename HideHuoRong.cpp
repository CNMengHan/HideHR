#include <windows.h>
#include <stdio.h>

void HideWindowByTitleOrClass(LPCWSTR title, LPCWSTR className) {
    HWND hwnd = FindWindowW(NULL, title);
    if (hwnd != NULL) {
        ShowWindow(hwnd, SW_HIDE);
    } else {
        hwnd = FindWindowW(className, NULL);
        if (hwnd != NULL) {
            ShowWindow(hwnd, SW_HIDE);
        }
    }
}

int main() {
    LPCWSTR windowTitle = L"火绒安全软件";
    LPCWSTR windowClass = L"HLBRMainUI";

    while (1) {
        HideWindowByTitleOrClass(windowTitle, windowClass);
    }
    return 0;
}
