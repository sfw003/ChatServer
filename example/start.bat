mkdir Debug
cd Debug
call "D:\VS2019\VC\Auxiliary\Build\vcvarsamd64_x86.bat"
cmake  -G "Visual Studio 16 2019"  -A x64 -DCMAKE_BUILD_TYPE=Debug  ../
for %%i in (*.sln) do msbuild /m "%%i" /p:Platform=x64 /p:Configuration=Debug
cd ../
pause