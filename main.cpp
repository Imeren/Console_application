#include <iostream>
#include <vector>
#include "library.h"

using namespace std;

int main()
{
    int x,y;
    //vector <int> simple_number;
    cout << "Write left border: ";
    cin >> x;
    cout << "Write right border: ";
    cin >> y;
    for (int a : list(x,y))
    {
        cout << a << endl;
    }
    return 0;
}
