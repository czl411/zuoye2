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
	case 1:printf("十");break;
    case 2:printf("二十");break;
    case 3:printf("三十");break;
    case 4:printf("四十");break;
    case 5:printf("五十");break;
    case 6:printf("六十");break;
    case 7:printf("七十");break;
    case 8:printf("八十");break;
    case 9:printf("九十");break;
	}
}
void yue2(int n)
{
	if(n==0){
	printf("零\n"); 
	}
	else{
	int k=0;
	k=n%10;
	switch(k)
	{
	case 0:printf("\n");break;
	case 1:printf("一\n");break;
    case 2:printf("二\n");break;
    case 3:printf("三\n");break;
    case 4:printf("四\n");break;
    case 5:printf("五\n");break;
    case 6:printf("六\n");break;
    case 7:printf("七\n");break;
    case 8:printf("八\n");break;
    case 9:printf("九\n");break;
	} 
	}
}
void yue(int k){ 
	if(k>=0&&k<=99){
		yue1(k);
	    yue2(k);	
	}
	else printf("!(-_-)！\n");
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
