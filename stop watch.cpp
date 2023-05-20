#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
    int hour = 0, min = 0, sec = 0;
    while (true)
    {
        if (_kbhit())
        {
            char press = _getch();
            cout << endl;
            if (press)
            {
                system("pause");
            }
        }
        system("CLS");
        sec++;
        if (sec == 60)
        {
            min++;
            sec = 0;
        }
        if (min == 60)
        {
            min = 0;
            hour += 1;
        }
        cout << "Hour: " << hour << "\t"
             << "min: " << min << "\t"
             << "sec: " << sec;
    }
    system("pause");
}