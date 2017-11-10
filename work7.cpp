/*#include<stdio.h>
int main()
{
	int x, y,a,b,c,d;
	scanf("%d%d", &x,&y);
	a = x + y;
	b = x*y;
	c = x - y;
	d = x/y;
	printf("he=%d\n",a);
	printf("chengji=%d\n",b);
	printf("cha=%d\n",c);
	printf("shang=%d\n",d);
}

#include<stdio.h>
int main()
{
	printf("1234\n");
}

#include<stdio.h>
int main()
{
	printf("%d%d%d%d\n", 1, 2, 3, 4);
}

#include<stdio.h>
int main()
{
	printf("1");
	printf("2");
	printf("3");
	printf("4\n");
}

#include<stdio.h>
int main()
{
	printf("*********   ***     *       *    \n");
	printf("*       *  *   *   ***     * *   \n");
	printf("*       * *     * *****   *   *  \n");
	printf("*       * *     *   *    *     * \n"); 
	printf("*       * *     *   *   *       *\n");
	printf("*       * *     *   *    *     * \n");
	printf("*       * *     *   *     *   *  \n");
	printf("*       *  *   *    *      * *   \n");
	printf("*********   ***     *       *    \n");
}

#include<stdio.h>
int main()
{
	printf("LLLLLLLLLLLLLLL\n");
	printf("L\n");
	printf("L\n");
	printf("L\n\n");
	printf("RRRRRRRRRRRRRRR\n");
	printf("        RR   R\n");
	printf("      RR  R R \n");
	printf("RRRRRR     R  \n\n");
	printf("Z             Z\n");
	printf("ZZZZZ         Z\n");
	printf("Z    ZZZZ     Z\n");
	printf("Z        ZZZZZZ\n");
}

#include<stdio.h>
int main()
{
printf("A=%d\n", 'A');
printf("B=%d\n", 'B');
printf("C=%d\n", 'C');
printf("a=%d\n", 'a');
printf("b=%d\n", 'b');
printf("c=%d\n", 'c');
printf("0=%d\n", '0');
printf("1=%d\n", '1');
printf("2=%d\n", '2');
printf("$=%d\n", '$');
printf("+=%d\n", '+');
printf("/=%d\n", '/');
printf(" =%d\n", ' ');
return 0;
}
*/

#include<stdio.h>
int f(int a);
int main()
{
	int a;
	int a1, a2, a3, a4, a5;
	scanf("%d", &a);
	f(a);
	return 0;
}
int f(int a)
{
	int a1, a2, a3, a4, a5;
	if (a >= 10000 && a < 100000)
	{
		a1 = a / 10000;
		a2 = a / 1000;
		a2 = a2 % 10;
		a3 = a / 100;
		a3 = a3 % 10;
		a4 = a / 10;
		a4 = a4 % 10;
		a5 = a / 1;
		a5 = a5 % 10;
		printf("%d   %d   %d   %d   %d\n", a1, a2, a3, a4,a5);
		return 0;
	}
	else
		printf("error\n");
}