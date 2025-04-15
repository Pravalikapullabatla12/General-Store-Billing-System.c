#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pulse();
void soaps();
void detergent();
void flour();
void chocolates();
void total();
void start();
void mainmenu();
int m=1;
float t=0;
int co=0;
struct grocery{
	 char itn[20];
	 int itp;
}s;
struct grocery *p=&s;
void main(){
	start();
mainmenu();
}
void pulse(){
	system("cls");
	p=(struct grocery*)realloc(p,m*sizeof(struct grocery));
	char a;
	char* item;
	int c,ic;
	float it;
	float q;
	printf("1.urad dal(1kg=75rs)\n2.masoor dal(1kg=100rs)\n3.chana dal(1kg=200rs)\n4.tur dal(1kg=50rs)\n6.main menu\n");
	printf("enter choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
		item="urad dal";
		strcpy((p+co)->itn,item);
		it=75;
		printf("enter quantity:");
		scanf("%f",&q);
		it=q*it;
		(p+co)->itp=it;
		t=t+it;
		 
		break;
		case 2:
		item="masoor dal";
		strcpy((p+co)->itn,item);
		it=100;
		printf("enter quantity:");
		scanf("%f",&q);
		it=q*it;;
		(p+co)->itp=it;
		t=t+it;
		 
		break;
		case 3:
		item="chana dal";
		strcpy((p+co)->itn,item);
		it=200;
		printf("enter quantity:");
		scanf("%f",&q);
		it=q*it;;
		(p+co)->itp=it;
		t=t+it;
		 
		break;
		case 4:
		item="tur dal";
		strcpy((p+co)->itn,item);
		it=50;
		printf("enter quantity:");
		scanf("%f",&q);
		it=q*it;;
		(p+co)->itp=it;
		t=t+it;
		 
		break; 
		case 5:main();
		break;
	}
	m++;
	co++;
	printf("do you want to add other items(Y/N):");
	fflush(stdin);
	scanf("%c",&a);
	if(a=='Y'||a=='y'){
	mainmenu();
}
	else{
		total();
	}
}
void soaps(){
	system("cls");
	p=(struct grocery*)realloc(p,m*sizeof(struct grocery));
	char a;
	char* item;
	int c,q,it;
	printf("1.cinthol(1pc-20rs)\n2.santoor(1pc-40rs)\n3.lux(1pc-35rs)\n4.medimix(1pc-30rs)\n5.main menu\n");
	printf("enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
		item="cinthol";
		strcpy((p+co)->itn,item);
		it=20;
		printf("enter cinthol quantity:");
		scanf("%d",&q);
		it=it*q;
		(p+co)->itp=it;
		t=t+it;
		 
		break;
		case 2:
		item="santoor";
		strcpy((p+co)->itn,item);
		it=40;
		printf("enter santoor quantity:");
		scanf("%d",&q);
		it=it*q;
		(p+co)->itp=it;
		t=t+it;
		 
		break;
		case 3:
		item="lux";
		strcpy((p+co)->itn,item);
		it=35;
		printf("enter lux quantity:");
		scanf("%d",&q);
		it=it*q;
		(p+co)->itp=it;
		t=t+it;
		 
		break;
		case 4:
		item="medimix";
		strcpy((p+co)->itn,item);
		it=30;
		printf("enter medimix quantity:");
		scanf("%d",&q);
		it=it*q;
		(p+co)->itp=it;
		t=t+it;
		 
		break;
		case 5:main();
		break; 
	}
		m++;
	co++;
	printf("do you want to add other items(Y/N):");
	fflush(stdin);
	scanf("%c",&a);
	if(a=='Y'||a=='y'){
	mainmenu();
}
	else{
		total();
	}
	
}
void detergent(){
	system("cls");
	p=(struct grocery*)realloc(p,m*sizeof(struct grocery));
	float ip;
	char* item;
	float it;
	float q;
	char a;
	int c;
	printf("1.nirmal(kg-100rs)\n2.surf excel(kg-80rs)\n3.tide(kg-40rs)\n4.rin(kg-70rs)\n5.main menu\n");
	printf("enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
			item="nirmal";
			strcpy((p+co)->itn,item);
			ip=100;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			(p+co)->itp=it;
			t=t+it;
			 
		break;
		case 2:
			item="surf excel";
			strcpy((p+co)->itn,item);
			ip=80;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			(p+co)->itp=it;
			t=t+it;
			 
		break;
		case 3:
			item="tide";
			strcpy((p+co)->itn,item);
			ip=40;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			(p+co)->itp=it;
			t=t+it;
			 
		break;
		case 4:
			item="atta";
			strcpy((p+co)->itn,item);
			ip=70;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			(p+co)->itp=it;
			t=t+it;
			 
		break;
		case 5:main();
		break;
	}
		m++;
		co++;
printf("do you want to add other items(Y/N):");
fflush(stdin);
scanf("%c",&a);
if(a=='Y'||a=='y'){
	mainmenu();
}
else{
		total();
}	
}
void flour(){
	system("cls");
	p=(struct grocery*)realloc(p,m*sizeof(struct grocery));
	float ip;
	float it;
	float q;
	char a;
	char* item;
	int c;
	printf("1.atta(kg-80rs)\n2.maida(kg-50rs)\n3.wheat(kg-50rs)\n4.rice flour(kg-100rs)\n5.main menu\n");
	printf("enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
			item="atta";
			strcpy((p+co)->itn,item);
			ip=80;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			(p+co)->itp=it;
			t=t+it;
			 
		break;
		case 2:
			item="maida";
			strcpy((p+co)->itn,item);
			ip=50;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			t=t+it;
			 
		break;
		case 3:
			item="wheat";
			strcpy((p+co)->itn,item);
			ip=60;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			(p+co)->itp=it;
			t=t+it;
		break;
		case 4:
			item="rice flour";
			strcpy((p+co)->itn,item);
			ip=100;
			printf("enter quantity:");
			scanf("%f",&q);
			it=q*ip;
			(p+co)->itp=it;
			t=t+it;
		break;
		case 5:main();
		break;
	}
		m++;
		co++;
printf("do you want to add other items(Y/N):");
fflush(stdin);
scanf("%c",&a);
if(a=='Y'||a=='y'){
	mainmenu();
}
else{
		total();
}
}
void chocolates(){
	system("cls");
	p=(struct grocery*)realloc(p,m*sizeof(struct grocery));
	float  ip;
	char* item;
	float  it;
	float  q;
	char a;
	int c;
	printf("1.dairy milk(1pc-160rs)\n2.sneakers(1pc-20rs)\n3.five star(1pc-10rs)\n4.kit kat(1pc-40rs)\n5.main menu\n");
	printf("enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
		ip=160;
		item="dairy milk";
		strcpy((p+co)->itn,item);
		printf("enter quantity:");
				scanf("%f",&q);
				it=q*ip;
				(p+co)->itp=it;
				t=t+it;
				 
		break;
		case 2:
		item="sneakers";
		strcpy((p+co)->itn,item);
		ip=20;
		printf("enter quantity:");
				scanf("%f",&q);
				it=q*ip;
				(p+co)->itp=it;
				t=t+it;
				 
		break;
		case 3:
		item="five star";
		strcpy((p+co)->itn,item);
		ip=10;
		printf("enter quantity:");
				scanf("%f",&q);
				it=q*ip;
				(p+co)->itp=it;
				t=t+it;
				 
		break;
		case 4:
		item="kit kat";
		strcpy((p+co)->itn,item);
		ip=40;
		printf("enter quantity:");
				scanf("%f",&q);
				it=q*ip;
				(p+co)->itp=it;
				t=t+it;
				 
		break;
		case 5:main();
		break;
	}
		m++;
		co++;
printf("do you want to add other items(Y/N):");
fflush(stdin);
scanf("%c",&a);
if(a=='Y'||a=='y'){
	mainmenu();
}
else{
		total();
}
}	
void total(){
	system("cls");
	printf("\n\xcd\xcd\xcd\xcd\xcd\xcd BILL \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	int i;
for(i=0;i<co;i++){
	printf("item %d=%s\t",i+1,(p+i)->itn);
	printf("price=%d\n",(p+i)->itp);
}
printf("total=%.2f",t);	
}
void start(){
	p=(struct grocery*)malloc(m*sizeof(struct grocery));
}
void mainmenu(){
	system("cls");
	int c;
	printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd   WELCOME TO GENERAL STORE BILLING SYSTEM    \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd     MENU        \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	
	printf("1.pulses\n\n2.soaps\n\n3.detergent\n\n4.flour\n\n5.chocolates\n\n6.total\n\n7.exit\n");
	printf("enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:pulse();
		break;
		case 2:soaps();
		break;
		case 3:detergent();
		break;
		case 4:flour();
		break;
		case 5:chocolates();
		break;
		case 6:total();
		break;
		case 7:exit(0);
		default:printf("INVALID CHOICE!!!");
		break;
	}
}
