#include<stdio.h>
int main()
{
//Declare a variable uninitialized
 int uninitializedVar;

 //Declare and  initialize a variable in one statement
 int initializedVar=65;

 //Declare and initialize multiple variables with different values in one statement
 int Var1=65,Var2=75,Var3=85,Var4=95;

//Declare and initialize multiple variables with the same value in one statement
int sameVar1=20,sameVar2=20,sameVar3=20,sameVar4=20;

printf("a)Uninitialized variable:%d\n",uninitializedVar);

printf("b)Initialize  variable:%d\n",initializedVar);

printf("c)multiple variables with different values:%d, %d, %d, %d\n",Var1,Var2,Var3,Var4);

printf("d)multiple variables with same value:%d, %d, %d, %d\n",sameVar1,sameVar2,sameVar3,sameVar4);

return 0 ;

}

