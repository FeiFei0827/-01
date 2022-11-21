#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
int main()
{
	char* p = "123";
	printf("p = \"%s\"\n", p);
	/*p = "456";*/
	p = "456" + 1;
	printf("p = \"%s\"\n", p);
	return 0; //只能输出“56”，因为p指向的地址+1后，整体往后移了一位，所以读到的内容从“456”变成了“56\0".

}
11 - 2
int num(int x[])
{
	int i = 0;
	while (x[i] != '\0')
		i++;
	return i;
}
int main()
{

	int i;
	char a[][5] = { "LISP", "C", "Ada" };
	char* p[] = { "PAUL", "X", "MAC" };
	for (i = 0; i <num(a); i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);
	for (i = 0; i <num(p); i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);
}
#include <stdio.h>

int main(void)
{
	int  i;
	char a[][128] = { "LISP", "C", "Ada" };
	char* p[] = { "PAUL", "X", "MAC", "SKTNB" };//用 sizeof(a) / sizeof(a[0])表示数组元素个数
	for (i = 0; i <(sizeof(a) / sizeof(a[0])); i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);

	for (i = 0; i < (sizeof(p) / sizeof(p[0])); i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);

	return 0;
}
char* str_copy(char* d, const char* s)
{
	char* t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("复制的是：", tmp);
	scanf("%s", tmp);



	puts("复制了。");
	printf("str = \"%s\"\n", str_copy(str, tmp));

	return 0;
}
void put_string(const char* s) {
	putchar(*s);
	while (*s++)
	{
		putchar(*s);
	}

}



int main() {
	char s[123];
	printf("请输入字符串:");
	scanf("%s", s);
	put_string(s);
}
char *str_chnum(const char* s, int c) {



	while (*s++) {
		char* t = s;

		if (*s == c) {
			return     t;
			break;
		}


	}

	return NULL;
}



int main() {
	char s[123];
	char c;
	printf("要计数的字符是：");
	scanf("%c", &c);
	printf("请输入字符串:");
	scanf("%s", s);

	printf("%s", str_chnum(s, c));
}
11 - 7

void str_toupper(char *s)
{
	while (*s){
		*s = toupper(*s);
		*s++;
	}
}
void str_tolower(char *s)
{

}
int main()
{
	char p[] = "abcABC123";
	printf("%s\n", p);
	str_toupper(p);
	printf("%s\n", p);
}
void str_toupper(char *s)
{
	while (*s) {
		*s = toupper(*s);
		*s++;
	}

}

/*--- 将字符串中的英文字符转为小写字母 ---*/
void str_tolower(char *s)
{
	while (*s) {
		*s = tolower(*s);
		*s++;
	}
}

int main(void)
{
	char str[128] = "asdasdASDASD122";
	//printf("请输入字符串：");
	//scanf("%s", str);
	//char *str = "asdasdASDASD122";           为什么指针型字符串不能实现呢？
	printf("大写字母：%s\n", str);
	str_toupper(str);
	printf("大写字母：%s\n", str);

	str_tolower(str);
	printf("小写字母：%s\n", str);

	return 0;
}
11 - 8
void del_dight(char *str)
{
	int i;
	while (*str != '\0')
	{
		while (*str >= '0'&&*str <= '9')
		{
			str++;
			i++;
			*str
		}
		*str++;
	}
}
int main()
{
	char a[128];
	printf("请输入一个字符串："); scanf("%s", &a);
	printf("%s    \n", a);
	del_dight(a);
	printf("%s    \n", a);

}

#include <stdio.h>

void del_digit(char *str) {

	char *temp = str;

	while (*temp)
	if ((*temp >= '0') && (*temp <= '9'))
		temp++;
	else                                                                                  //修改字符串可以先创建一个与原字符串相同的数组
		*str++ = *temp++;                                                                 //通过修改新数组再赋给老数组的方式 修改数组
	*str = '\0';
}


int main(void) {
	char str[128];

	puts("请输入一串字符。");
	scanf("%s", str);
	printf("%s\n", str);

	del_digit(str);

	printf("%s", str);

	return 0;
}
#include <string.h>
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128];
	printf("%d", strlen(a));
}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { 0 };
	printf("%s\n", a);
	printf("%s\n", b);
	strcpy(b, a);
	printf("%s\n", a);
	printf("%s\n", b);


}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { 0 };
	printf("%s\n", a);
	printf("%s\n", b);
	strncpy(b, a, 5);
	printf("%s\n", a);
	printf("%s\n", b);


}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { "12389214371284" };
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", strcat(b, a));                                        //将a接到b后面 且改变b
	printf("%s\n", a);
	printf("%s\n", b);

}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { "12389214371284" };
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", strncat(b, a, 5));                                        //将a接到b后面 且改变b
	printf("%s\n", a);
	printf("%s\n", b);

}
int main()
{
	char a[128] = { "sdasdsadswcvsa" };
	char b[128] = { "12389214371284" };
	printf("%d", strcmp(a, b));                                       //a>b返回正整数可能默认是1，否则-1
}
int main()
{
	char a[128] = { "123sdsadswcvsa" };
	char b[128] = { "12889214371284" };
	printf("%d", strncmp(a, b, 2));                                       //a>b返回正整数可能默认是1，否则-1  一样则为零
}
11 - 10
int atoi(const char *nptr)
{
	int i = -1;
	int a[128];
	while (*nptr != '0')
	{
		a[i++] = (int)*nptr;
		*nptr++;

	}
	return a;
}
int main()
{
	char a[128] = { "11233sxfvasdfas134" };
	printf("%d\n", a);
	/*printf("%d", atoi(a));*/

}