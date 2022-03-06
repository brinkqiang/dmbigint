
#include "dmbigint.h"
#include <iostream>

int main(int argc, char* argv[]) {

    CDMBigInt bigint("0000000000000000000000000000000000000000000000000000000000000001");

    std::cout << bigint.ToString() << std::endl;

    bigint += 0x1233;

    std::cout << bigint.ToString() << std::endl;
    return 0;
}
