#include <stdio.h>
int main()
{
	long banyaknya, input, hasil;
	scanf("%ld", &banyaknya);
	while (banyaknya>0)
		{	scanf("%ld", &input);
			hasil=input%3;
			if (hasil==0)
				{	printf("HABIS DIBAGI\n");
			}
			else
				{	printf("TIDAK HABIS DIBAGI\n");
			}
			banyaknya--;
	}
	
	return 0;
}

