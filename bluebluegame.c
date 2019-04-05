
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
printf("별장\n");

if(cnt<=1){
fire();
}
printf("불이야\n");
useript();


rnd=rand()%10+1;
rrnd=rand()%10+1;
if(rnd==1||rnd==2||rnd==3||rnd==4||rnd==5||rnd==6||rnd==7){
treePlant();}

if(rrnd==1||rrnd==2||rrnd==3){printf("불이야\n");fireEvnent();}

if (ipt==0){printf("firehose\n");
waterhose();}


if (ipt==1 && cnt%2==0){printf("firehose\n");
firetank();}



if (ipt==2 && cnt%3==0){printf("firetank\n");
firecar();
}

if (ipt==3 && cnt%5==0){printf("firecopter\n");
firecopter();
}

if (ipt==4 && cnt%7==0){printf("meteor\n");
meteor();}

cnt++;


//if(cnt==9)printf("7 times end\n");break;//end condition
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
printf("물호수는 1턴마다 사용가능 press 0\n");
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
sleep(1);

}
}


void fireEvnent(){
	
	
	rnd=rand()%10+1;
rrnd=rand()%500+1;
printf("%d만큼 탔네요 ㅠ\n",rrnd);
if(rnd==1||rnd==2||rnd==3||rnd==4||rnd==5||rnd==6||rnd==7||rnd==8||rnd==9){
printf("불이야이벤트발생!!\n");
for(int i=0;i<1;i++){
for(int k=0;k<rrnd;k++){
tarr[i][k]='*';
}
printf("\n");}


mloop();
	
sleep(1);	
	
	
	
	
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
sleep(1);
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
loop();sleep(1);
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
loop();sleep(1);
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
loop();sleep(1);
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
loop();sleep(1);
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

	
	​
373
        
374
        
375
        
376
        
377
        
378
        
379
        
380
        
381
        
382
        }
383
​
384
​
385
void loop(){
386
        
387
        for(int i=0;i<1;i++){
388
for(int k=0;k<rrnd;k++){
389
tarr[i][k]='*';
390
}
391
printf("\n");}
392
if(tarr[0][100]=='*'){
393
for(int i=1;i<2;i++){
394
for(int k=0;k<rrnd;k++){
395
tarr[i][k]='*';
396
}
397
printf("\n");}}
398
if(tarr[1][100]=='*'){
399
for(int i=2;i<3;i++){
400
for(int k=0;k<rrnd;k++){
401
tarr[i][k]='*';
402
}
403
printf("\n");}}
404
if(tarr[2][100]=='*'){
405
for(int i=3;i<4;i++){
406
for(int k=0;k<rrnd;k++){
407
tarr[i][k]='*';
408
}
409
printf("\n");}}
410
if(tarr[3][100]=='*'){
411
for(int i=4;i<5;i++){
412
for(int k=0;k<rrnd;k++){
413
tarr[i][k]='*';
414
}
415
printf("\n");}}
416
​
417
        
418
        
419
        
420
        
421
        }
422

	
	
	}
​
373
        
374
        
375
        
376
        
377
        
378
        
379
        
380
        
381
        
382
        }
383
​
384
​
385
void loop(){
386
        
387
        for(int i=0;i<1;i++){
388
for(int k=0;k<rrnd;k++){
389
tarr[i][k]='*';
390
}
391
printf("\n");}
392
if(tarr[0][100]=='*'){
393
for(int i=1;i<2;i++){
394
for(int k=0;k<rrnd;k++){
395
tarr[i][k]='*';
396
}
397
printf("\n");}}
398
if(tarr[1][100]=='*'){
399
for(int i=2;i<3;i++){
400
for(int k=0;k<rrnd;k++){
401
tarr[i][k]='*';
402
}
403
printf("\n");}}
404
if(tarr[2][100]=='*'){
405
for(int i=3;i<4;i++){
406
for(int k=0;k<rrnd;k++){
407
tarr[i][k]='*';
408
}
409
printf("\n");}}
410
if(tarr[3][100]=='*'){
411
for(int i=4;i<5;i++){
412
for(int k=0;k<rrnd;k++){
413
tarr[i][k]='*';
414
}
415
printf("\n");}}
416
​
417
        
418
        
419
        
420
        
421
        }
422
