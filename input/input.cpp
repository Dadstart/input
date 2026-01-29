// input.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"

int main()
{
    std::cout << "Hello World!\n";
    INPUT inputs[2];
    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_SNAPSHOT;
    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_SNAPSHOT;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;
    while (true)
    {
        SYSTEMTIME time;
        GetLocalTime(&time);
        if (time.wHour < 19)
            SendInput(2, inputs, sizeof(INPUT));
        Sleep(150000);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
