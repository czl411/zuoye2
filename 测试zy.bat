@echo off
echo �������ļ�����·��
set /p b=
echo ת�Ƶ��ļ�·��
cd "%b%"
echo �������ļ���
set /p c=
echo ���뿪ʼ
gcc "%c%" -o 3.exe
if exist "3.exe" echo ����ɹ�
if not exist "3.exe" echo ����ʧ��
pause