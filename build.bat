
rmdir /S /Q build
mkdir build
pushd build

cmake -A x64 -DCMAKE_BUILD_TYPE=relwithdebinfo ..
cmake --build . --config relwithdebinfo -- /m:8
popd

rem pause