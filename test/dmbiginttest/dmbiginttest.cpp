
#include "dmbigint.h"
#include <iostream>

int main(int argc, char* argv[]) {

    CDMBigInt bigint = 1;
    bigint += 0x1233;

    std::cout << bigint.ToString() << std::endl;
    return 0;
}
