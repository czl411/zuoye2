#include <stdio.h>
#include <string.h>
int zuanhuan(char s[])
{
if (strcmp(s,"��") == 0) printf("0\n");
else if(strcmp(s,"һ") == 0) printf("1\n");
else if(strcmp(s,"��") == 0) printf("2\n");
else if(strcmp(s,"��") == 0) printf("3\n");
else if(strcmp(s,"��") == 0) printf("4\n");
else if(strcmp(s,"��") == 0) printf("5\n");
else if(strcmp(s,"��") == 0) printf("6\n");
else if(strcmp(s,"��") == 0) printf("7\n");
else if(strcmp(s,"��") == 0) printf("8\n");
else if(strcmp(s,"��") == 0) printf("9\n");
else if(strcmp(s,"ʮ") == 0) printf("10\n");
else printf("none\n");
}
int main(){
	zuanhuan("һ"); 
	zuanhuan("��");
	zuanhuan("��");
	zuanhuan("ʮ");
	zuanhuan("ʮһ");
	zuanhuan("��һ");
	zuanhuan("��");
	zuanhuan("��");
	zuanhuan("��");
	zuanhuan("��");
	return 0;
}
