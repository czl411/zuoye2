#include<stdio.h>
#include<string.h>
void yue1(int n)
{
	int k=0;
	if(n>=10){
		k=n/10;
	}
	switch(k)
	{
	case 1:printf("ʮ");break;
    case 2:printf("��ʮ");break;
    case 3:printf("��ʮ");break;
    case 4:printf("��ʮ");break;
    case 5:printf("��ʮ");break;
    case 6:printf("��ʮ");break;
    case 7:printf("��ʮ");break;
    case 8:printf("��ʮ");break;
    case 9:printf("��ʮ");break;
	}
}
void yue2(int n)
{
	if(n==0){
	printf("��\n"); 
	}
	else{
	int k=0;
	k=n%10;
	switch(k)
	{
	case 0:printf("\n");break;
	case 1:printf("һ\n");break;
    case 2:printf("��\n");break;
    case 3:printf("��\n");break;
    case 4:printf("��\n");break;
    case 5:printf("��\n");break;
    case 6:printf("��\n");break;
    case 7:printf("��\n");break;
    case 8:printf("��\n");break;
    case 9:printf("��\n");break;
	} 
	}
}
void yue(int k){ 
	if(k>=0&&k<=99){
		yue1(k);
	    yue2(k);	
	}
	else printf("!(-_-)��\n");
}
int main()
{
    yue(99);
    yue(10);
    yue(0);
	yue(101);
	yue(24);
    yue(8);
	yue(21);
	yue(1);
return 0;
}
