9 - 1
int main()
{
	char str[] = "ABC\0DEF";
	printf("字符串str为\"%s\",\n", str);
}
9 - 2

int main(void)
{
	char str[] = "ABC";
	*str = 0;                                //用地址解引用

	printf("字符串str为\"%s\"。\n", str);    /* 显示 */

	return 0;
}

9 - 3
#define N 5
int main()
{
	int i;
	char s[N][128];
	for (i = 0; i < N; i++)
	{
		printf("s[%d] : ", i);      scanf("%s", s[i]);
		if (strcmp(s[i], "$$$$$") == 0)
		{
			break;
		}
	}
	for (i = 0; i < N; i++)
	{
		if (strcmp(s[i], "$$$$$") == 0)
			return;
		printf("s[%d] = \"%s\"\n", i, s[i]);

	}

}
9 - 4
void null_string(char s[])
{
	*s = 0;                        //重要

}
int main()
{
	char a[2] = { 8, 9 };
	null_string(a);
}
9 - 5
#define num 128

int str_char(const char s[], int c) {
	int i;
	for (i = 0; i < num; i++) {
		if (*s++ == 'c') {
			return  i;
		}
	}
	return -1;

}

int main() {
	char c = 'c';
	char x[num];
	printf("请输入字符串:");
	scanf("%s", x);

	printf("%s", x);
	putchar('\n');
	printf("%d", str_char(x, c));

}
int str_char(const char s[], int c) {
	int idx = 0;

	while (s[idx]){
		if (s[idx] == 'c')        //这一行重要
			return idx;
		idx++;
	}

	return -1;
}

int main(void)
{
	char c = 'c';
	char s[] = "hellochina";

	printf("字符c在字符串%s中的下标为：%d", s, str_char(s, c));

	return 0;

}
9 - 6
int str_chnum(const char s[], int c){
	int num = 0, idx = 0;

	while (s[idx]){
		if (s[idx] == 'c')
			num++;
		idx++;
	}
	return num;

	if (num == 0)
		return 0;
}

int main(void)
{
	char c = 'c';

	char s[] = "hellochinanancang";

	printf("字符串%s中%c字符的个数为%d", s, c, str_chnum(s, c));

	return 0;
}
9 - 7
void put_stringn(const char s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s", s);
	}

}

int main()
{
	char a[3] = "AB";
	int b = 3;
	put_stringn(a, b);
}
9 - 8
void put_stringr(const char arr[])
{
	int i = 0;

	int g = strlen(arr) - 1;
	//int j;
	//j = sizeof(arr) / sizeof(arr[0]);
	while (arr[i])
	{
		printf("%c", arr[g - i]);
		i++;
	}
}
int main()
{
	char s[] = "1234567891234567879";
	put_stringr(s);
}
9 - 9
void rev_string(char s[])
{

}
void del_digit(char  s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9');
		else
			printf("%c", s[i]);
		i++;
	}
}

int main()
{
	char a[10] = "13ersa31e";
	del_digit(a);
}
9 - 11
#define R 5
#define L 128
void get_strary(const char s[][L], int n)
{
	int i = 0;
	while (strcmp(s[i], "$$$$$") != 0)
	{
		printf("s[%d] = \"%s\"\n", i, s[i]);
		i++;

	}
}

int main()
{
	char cs[][L] = { "Turbo", "NA", "DOHC", "$$$$$", "OIKHJLIJ" };

	get_strary(cs, R);
}
9 - 12
void rev_string(char s[][128], int n)
{
	int i = 0, j = 0, k = 0;
	while (s[i] != '/0'&&i<n)
	{
		j = strlen(s[i]) - 1;
		for (k = 0; k <= j; k++)
		{
			printf("%c", s[i][j - k]);
		}
		printf("\n");
		i++;
	}
}
int main()
{
	char a[5][128] = { "ABCD", "abcd", "ccaa", "sssa" };
	rev_string(a, 3);
}
