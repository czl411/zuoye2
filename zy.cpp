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
	printf("��"); 
	}
	else{
	int k=0;
	k=n%10;
	switch(k)
	{
	case 0:break;
	case 1:printf("һ");break;
    case 2:printf("��");break;
    case 3:printf("��");break;
    case 4:printf("��");break;
    case 5:printf("��");break;
    case 6:printf("��");break;
    case 7:printf("��");break;
    case 8:printf("��");break;
    case 9:printf("��");break;
	} 
	}
}
void yue(int a){
	if(a>=0&&a<=99){
		void yue1(a);
	    void yue2(a);	
	}
	else printf("!(-_-)��");
}
int main()
{
    void yue(99);
    void yue(10);
    void yue(0);
	void yue(101);
	void yue(24);
	void yue(8);
	void yue(21);
	void yue(1);
return 0;
}
