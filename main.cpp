#include <iostream>
#include "library.h"
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    for (int a : list(a,b))
    {
        cout << a << endl;
    }
    return 0;
}
