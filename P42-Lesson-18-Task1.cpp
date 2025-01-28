#include "Computer.h"

int main()
{
    Computer* arr = new Computer[3]{
        {"HP", 2.4, 8, false, 25000},
        {"Asus", 3.2, 16, true, 65999},
        {"Aser", 1.2, 4, false, 7999}
    };

    for (int i = 0; i < 3; i++)
    {
        arr[i].showInfo();
    }
}


