#include <stdio.h>
#include <string.h>
int zuanhuan(char s[])
{
if (strcmp(s,"零") == 0) printf("0\n");
else if(strcmp(s,"一") == 0) printf("1\n");
else if(strcmp(s,"二") == 0) printf("2\n");
else if(strcmp(s,"三") == 0) printf("3\n");
else if(strcmp(s,"四") == 0) printf("4\n");
else if(strcmp(s,"五") == 0) printf("5\n");
else if(strcmp(s,"六") == 0) printf("6\n");
else if(strcmp(s,"七") == 0) printf("7\n");
else if(strcmp(s,"八") == 0) printf("8\n");
else if(strcmp(s,"九") == 0) printf("9\n");
else if(strcmp(s,"十") == 0) printf("10\n");
else printf("none\n");
}
int main(){
	zuanhuan("一"); 
	zuanhuan("零");
	zuanhuan("九");
	zuanhuan("十");
	zuanhuan("十一");
	zuanhuan("负一");
	zuanhuan("八");
	zuanhuan("二");
	zuanhuan("五");
	zuanhuan("九");
	return 0;
}
