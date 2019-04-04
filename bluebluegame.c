
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
char tarr[5][100];
int rnd=0;
int rrnd=0;
int ipt=0;
int cnt=0;
void meteor();
void  firetank();
void tree();
void  firecopter();
void firecar();
void  print();
void fire();
void useript();
void waterhose();
void loop();
void fireEvnent();
void treePlant();
void mloop();
int main(){
srand((time(NULL)));
tree();
//print();
sleep(1);

while(1){//total while start


if(cnt<=1){
fire();
}

useript();

waterhose();
rnd=rand()%2+1;
if(rnd==1){
fireEvnent();
if(rnd==500){printf("해고입니다\n");break;}
treePlant();}
if (ipt==1 && cnt%2==0){
firetank();}



if (ipt==2 && cnt%3==0){
firecar();
}

if (ipt==3 && cnt%5==0){
firecopter();
}

if (ipt==4 && cnt%7==0){
meteor();}

cnt++;


//if(tarr[5][100]='-')break;//end condition
system("clear");

print();










}//totalwhile end


return 0;
}


void print(){

for(int i=0;i<5;i++){
for(int k=0;k<100;k++){
printf("%c ",tarr[i][k]);



}
printf("\n");
}

}
void tree(){

for(int i=0;i<5;i++){
for(int k=0;k<100;k++){
tarr[i][k]='*';


}
printf("\n");}

}

void fire(){
system("clear");
printf("불이야\n");

rrnd=rand()%100;
for(int i=0;i<1 ;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';


}
printf("\n");}


rrnd=rand()%100;
for(int i=1;i<2 ;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';


}
printf("\n");}
rrnd=rand()%100;
for(int i=2;i<3 ;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';


}
printf("\n");}


rrnd=rand()%100;
for(int i=3;i<4 ;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';


}
printf("\n");}


rrnd=rand()%100;
for(int i=4;i<5 ;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';


}
printf("\n");}

print();

}

void useript(){
printf("소화전은 2턴마다 사용가능 press 1\n");
printf("소방차은 3턴마다 사용가능 press 2\n");
printf("소방핼기은 5턴마다 사용가능 press3\n");
printf("메테오는은 7턴마다 사용가능 press4\n");

scanf("%d",&ipt);


}

void waterhose(){
system("clear");
rnd=rand()%10+1;
rrnd=rand()%40+1;
if(rnd==1||rnd==2||rnd==3||rnd==4||rnd==5||rnd==6||rnd==7||rnd==8||rnd==9){
printf("물호스가 발동됨니다.\n");
for(int i=0;i<1;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}
loop();

//print();


}
}


void fireEvnent(){
	
	
	rnd=rand()%10+1;
rrnd=rand()%500+1;
if(rnd==1||rnd==2||rnd==3||rnd==4||rnd==5||rnd==6||rnd==7||rnd==8||rnd==9){
printf("불이야이벤트발생!!\n");
for(int i=0;i<1;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}


mloop();
	
	
	
	
	
	
	}}










void firetank(){

rnd=rand()%10+1;
rrnd=rand()%80+11;
if(rnd==1||rnd==2||rnd==3||rnd==4||rnd==5||rnd==6||rnd==7){
printf("소화전이 발동됨니다.\n");
for(int i=1;i<2;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';


}
printf("\n");}

loop();

//print();
}}


void firecar(){

rnd=rand()%1+1;
rrnd=rand()%150+51;
if(rnd==1){
printf("소방차가 발동됨니다.\n");
for(int i=0;i<1;i++){
if(tarr[0][99]=='*'){
	for(int i=2;i<3;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
}
}
printf("\n");}
loop();
//print();
}}
void firecopter(){

rnd=rand()%10+1;
rrnd=rand()%500+51;
if(rnd==1||rnd==2||rnd==3){
printf("소방핼기가 발동됨니다.\n");
for(int i=0;i<1;i++){
if(tarr[2][99]=='*'){for(int i=3;i<4;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
}
}
printf("\n");}
loop();
//print();
}}

void treePlant(){
	
	rnd=rand()%10+1;
rrnd=rand()%200+1;
if(rnd==1||rnd==2||rnd==3){
printf("나무심기운동.\n");
for(int i=0;i<1;i++){
if(tarr[2][99]=='*'){for(int i=3;i<4;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
}
}
printf("\n");}
loop();
//print();
}
	
	
	}



void meteor(){

rnd=rand()%100+1;
rrnd=rand()%500+51;
if(rnd==5){
printf("메테오가 발동됨니다.\n");
printf("메테오중얼중얼\n");
for(int i=0;i<1;i++){
if(tarr[2][99]=='*'){for(int i=4;i<5;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
}
}
printf("\n");}
loop();
//print();
}



}

void mloop(){
	
	
	for(int i=0;i<1;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';
}
printf("\n");}
if(tarr[0][100]=='-'){
for(int i=1;i<2;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';
}
printf("\n");}}
if(tarr[1][100]=='-'){
for(int i=2;i<3;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}}
if(tarr[2][100]=='-'){
for(int i=3;i<4;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';
}
printf("\n");}}
if(tarr[3][100]=='-'){
for(int i=4;i<5;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='-';
}
printf("\n");}}

	
	
	
	
	
	
	
	
	
	}


void loop(){
	
	for(int i=0;i<1;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}
if(tarr[0][100]=='*'){
for(int i=1;i<2;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}}
if(tarr[1][100]=='*'){
for(int i=2;i<3;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}}
if(tarr[2][100]=='*'){
for(int i=3;i<4;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}}
if(tarr[3][100]=='*'){
for(int i=4;i<5;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}}

	
	
	
	
	}
