
#include "dmbigint.h"
#include <iostream>

int main(int argc, char* argv[]) {

    arith_uint256 bigint = -1;
    bigint += 1234;

    std::cout << bigint.ToString() << std::endl;
    return 0;
}
