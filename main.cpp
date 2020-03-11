#include <iostream>
#include "library.h"
#include <cstdlib>
#include <sstream>

using namespace std;

int main(int argc, char * argv[])
{
    if(argc < 3) {
        // вывести сообщение об ошибке и завершить работу программы
        std::cerr << "Missing parameters" << std::endl;
        return 1;
    }
    istringstream astr(argv[1]), bstr(argv[2]);
    int a, b;
    astr >> a;
    bstr >> b;
    if(astr.fail() || !astr.eof()) {
        // вывести сообщение об ошибке и завершить работу программы
        std::cerr << "A must be an integer" << std::endl;
        return 2;
    }
    if(bstr.fail() || !bstr.eof()) {
        // вывести сообщение об ошибке и завершить работу программы
        std::cerr << "B must be an integer" << std::endl;
        return 2;
    }
    if (a < 0){
        std::cerr << "A should not be negative" << std::endl;
        return 3;
    }
    if (b < 0){
        std::cerr << "B must not be negative" << std::endl;
        return 3;
    }
    if (a > b){
        std::cerr << "A must be smaller than B" << std::endl;
        return 4;
    }
    for (int a : list(a,b))
    {
        std::cerr << a << endl;
    }
    return 0;
}
