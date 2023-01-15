#include <stdlib.h>
#include <iostream>

struct p
{
    unsigned long long a;
    int b;
    char c;
    //char *name;
};

using namespace std;

int main(void)
{
    p point;

    point.a = 1;
    point.b = 2;
    point.c = 'a';
    //point.name = (char *)malloc(sizeof(char));

    cout << sizeof(point) << " " << sizeof(unsigned long long) << endl;

    //while(1);
}