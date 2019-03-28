#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"unites.h"
void tcase()
{
assert(calc('+',3,-3)==0);
printf("\n ok add +Ve -Ve");
}
void tcase1()
{
assert(calc('+',3,3)==6);
printf("\n ok1 add +Ve -Ve ");
}
void tcase2()
{
assert(calc('+',-3,-3)==-6);
printf("\n ok2 add -Ve -Ve");
}
void tcase3()
{
assert(calc('-',3,-3)==6);
printf("\n ok3 sub +Ve -Ve ");
}
void tcase4()
{
assert(calc('-',3,3)==0);
printf("\n ok4 sub +Ve +Ve");
}
void tcase5()
{
assert(calc('-',-2,-4)==2);
printf("\n ok5 sub -Ve -Ve");
}
void tcase6()
{
  assert(calc('*',2,4)==8);
printf("\n ok6 mul +Ve +Ve");
}
void tcase7()
{
  assert(calc('*',2,-4)==-8);
printf("\n ok7 mul  +Ve -Ve");
}
void tcase8()
{
  assert(calc('*',-3,-5)==15);
printf("\n ok8 mul  -Ve -Ve");
}
void tcase9()
{
  assert(calc('/',6,5)==1);
printf("\n ok9 div +Ve +Ve");
}
void tcase10()
{
  assert(calc('/',5,-5)==-1);
printf("\n ok10 div +Ve -Ve");
}
void tcase11()
{  assert(calc('/',-4,-2)==2);
printf("\n ok11 div -Ve -Ve");}


void main()
{
tcase();
tcase1();
tcase2();
tcase3();
tcase4();
tcase5();
tcase6();
tcase7();
tcase8();
tcase9();
tcase10();
tcase11();
return 0;

}
