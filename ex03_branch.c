#include<stdio.h>
#include<stdlib.h>



typedef struct ff {

 int fv1;
 int fv2;

} fv;






int getFaceValue(){

 int res;

 res = rand() % 6 + 1;

 return res;
}



fv DiceGame(){

 fv f;

 f.fv1 = getFaceValue();
 f.fv2 = getFaceValue();

 return f;

}


int main(){

 int sum;
 char name[100];

 fv v;


 printf("What is your name?\n");
 scanf("%s",name);

 printf("Hello,%s\n",name);

 printf("Rolling the dice\n");

 v = DiceGame();

 printf("Die 1: %d\n",v.fv1);
 printf("Die 2: %d\n",v.fv2);


 sum = v.fv1 + v.fv2;

 printf("Total value: %d\n",sum);

 return 0;

}
