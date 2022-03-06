
#include "dmbigint.h"

int main( int argc, char* argv[] ) {

    Idmbigint* module = dmbigintGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
