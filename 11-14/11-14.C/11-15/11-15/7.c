#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
7-1
int main()
{
	printf("sizeof 1  =%d\n", sizeof(1));
	printf("sizeof +1 =%d\n", sizeof(+1));
	printf("sizeof -1 =%d\n", sizeof(-1));
	printf("sizeof (double)-1 =%d\n", sizeof((double)-1));
	printf("sizeof ((double)-1)=%d\n", sizeof((double)-1));

}
7-2
int count_bits(unsigned x)
{
	int bits = 0;
	while (x)
	{
		if (x & 1U)
			bits++;
			x >>= 1;
	}
	return bits;
}
int int_bits()
{
	return count_bits(~0U);
}
void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}


int main(void)
{
	unsigned x;
	int n;

	printf("�������޷���������");		scanf_s("%u", &x);
	printf("������λ�Ƶ�λ����");		scanf_s("%d", &n);

	printf("����λ�ƺ��Ƿ������\n");
	((x << n) == (x * pow(2, n))) ? printf("���") : printf("����");

	putchar('\n');

	printf("����λ�ƺ��Ƿ������\n");
	((x >> n) == (x / pow(2, n))) ? printf("���") : printf("����");

	return 0;


}
7-3
��
7-4

���������λΪ0λ�����λΪ(2^n-1)λ


/*---���޷���������x�ĵ�posλ����Ϊ1---*/
unsigned set(unsigned x, int pos)
{
	int i = 1;
	return x | (i << pos);
}


/*---���޷���������x�ĵ�nλ����Ϊ0---*/
unsigned reset(unsigned x, int pos)
{
	int i = 1;
	return x & ~(i << pos);                      �����
}


/*---���޷���������x��posλȡ��---*/
unsigned inverse(unsigned x, int pos)
{
	int i = 1;
	return x ^ (i << pos);
}


int main(void)
{
	unsigned x;
	int n;

	printf("�������޷�������x��");			scanf_s("%u", &x);
	printf("���������λ����");				scanf_s("%d", &n);

	printf("�޷�������%u��%dλ��Ϊ1�����%u\n", x, n, set(x, n));
	printf("�޷�������%u��%dλ��Ϊ0�����%u\n", x, n, reset(x, n));
	printf("�޷�������%u��%dλ��Ϊȡ�������%u\n", x, n, inverse(x, n));

	return 0;
}
7-5
unsigned set_n(unsigned x, int pos, int n)
{
	int j = 1;
	int i, k;
	for (i = 0; i < pos; i++)
		j<<=1;
	for (k = 0; k < n; k++)
	{
		x = x | j;
		j <<= 1;
	}

}

unsigned reset_n(unsigned x, int pos, int n)
{
	int j = 1;
	int i, k;
	for (i = 0; i < pos; i++)
		j <<= 1;
	for (k = 0; k < n; k++)
	{
		x = x & ~j;
		j >>= 1;
	}
}
unsigned set_inverse_n(unsigned x, int pos, int n)
{
	int j = 1;
	int i, k;
	for (i = 0; i < pos; i++)
		j <<= 1;
	for (k = 0; k < n; k++)
	{
		x = x ^j;
		j >>= 1;
	}
}
7-7 ������
7-8
7-9
7-10
int main()
{
	float x = 0, y = 0;
	do
	{
		x += 0.01;
		y = y + 1;
		printf("x = %f            ", x);          printf("x = %f         \n", y/100.0);

	}while (x <= 1);
}
7-11
int main()
{
	int i;
	float x, y;
	float sum = 0;
	for (x = 0.0; x <= 1.0; x += 0.01)
	{
		sum = sum + x;
		printf("sum = %f\n", sum);

	}
	for (i = 0; i <= 100; i++)
	{
		y = i / 100.0;
		sum = sum + y;
		printf("sum = %f\n", sum);
	}
}