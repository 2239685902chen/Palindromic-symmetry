#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main()
{
	long q = 0, w = 0, e = 0, r = 0, t = 0;
	long s = 0, d = 0, z = 0;
	scanf("%ld", &q);
	for (w = 1; w <= q; w++)
	{
		t = w, e = w;
		s = 0, d = 0, z = 0;
		while (e >= 10)
		{
			e /= 10;
			s++;
		}
		while (t)
		{
			r = (long)pow(10, s);
			d = t % 10;
			z += d * r;
			t /= 10;
			s--;
		}
		if (!(z - w))
		{
			printf("%ld\n", w);
		}
	}
	return 0;
}