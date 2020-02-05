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
	printf("零"); 
	}
	else{
	int k=0;
	k=n%10;
	switch(k)
	{
	case 0:break;
	case 1:printf("一");break;
    case 2:printf("二");break;
    case 3:printf("三");break;
    case 4:printf("四");break;
    case 5:printf("五");break;
    case 6:printf("六");break;
    case 7:printf("七");break;
    case 8:printf("八");break;
    case 9:printf("九");break;
	} 
	}
}
void yue(int a){
	if(a>=0&&a<=99){
		void yue1(a);
	    void yue2(a);	
	}
	else printf("!(-_-)！");
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
