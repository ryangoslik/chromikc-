

#include <iostream>
using namespace std;
inline int dodaj(int, int);//deklaracja
int dodaj_zwykla(int, int);//deklaracja


int main()
{
    int a = 2;
    int b = 3;
    int c = 0;

    c = dodaj(a, b);
    //rownoważne
    c = a + b;

    cout << c;

    c = dodaj_zwykla(a, b);
}

inline int dodaj(int a, int b) 
{
    return a + b;
}

int dodaj_zwykla(int a, int b) 
{
    return a + b;
}

