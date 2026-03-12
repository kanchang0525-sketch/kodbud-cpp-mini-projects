#include <iostream>
#include <ctime>
#include <windows.h>   

using namespace std;

int main() {

    while (true) {

        system("cls");   

        time_t now = time(0);
        const char* dt = ctime(&now);

        cout << "=============================\n";
        cout << "     Welcome to Digital Clock\n";
        cout << "=============================\n\n";

        cout << "Current Date & Time:\n";
        cout << dt << endl;

        Sleep(1000);   
    }

    return 0;
}