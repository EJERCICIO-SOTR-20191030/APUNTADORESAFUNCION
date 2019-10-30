/** main.c
 */
 #include <stdio.h>
 static int x;
 static int y;
 int funcion01(int,int);
 int funcion02(int,int);
 int funcion03(int,int);
 int funcion04(int,int);
 int funcion05(int,int);
 void Funcion(int (*)(int,int),int,int);
 int main(int argc,char *argv[])
 {
   int (*fPt)(int,int);
   fPt=funcion01;
   //... Inicilizar dos variables enteras
   /*WRITE YOUR CODE HERE*/
   Funcion(fPt,x,y);
   return 0;
 }/*end main()*/
 
/*WRITE YOUR CODE HERE*/

int funcion01(int i,int j){
return i*j;
}

void Funcion(int (*p)(int,int) ,int j,int k){
printf("Funcion ejecutada");
}

