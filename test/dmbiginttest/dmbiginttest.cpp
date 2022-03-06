
#include "dmbigint.h"
#include <iostream>

int main(int argc, char* argv[]) {

    CDMBigInt bigint = -1;
    bigint += 0x1235;

    std::cout << bigint.ToString() << std::endl;
    return 0;
}
