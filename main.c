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
   x=2;
   y=3;
   Funcion(fPt,x,y);
   return 0;
 }/*end main()*/

void Funcion(int (*fPt)(int,int), int x, int y)
{
   if(fPt==funcion01)
   {
	funcion01(x,y);
   }
}	

int funcion01(int x, int y)
{
   int result;
   result=x+y;
   return result;
} 


