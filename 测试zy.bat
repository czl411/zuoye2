@echo off
echo 请输入文件所在路径
set /p b=
echo 转移到文件路径
cd "%b%"
echo 请输入文件名
set /p c=
echo 编译开始
gcc "%c%" -o 3.exe
if exist "3.exe" echo 编译成功
if not exist "3.exe" echo 编译失败
pause