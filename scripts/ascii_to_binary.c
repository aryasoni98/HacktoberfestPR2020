#include<stdio.h>/
int asciiValueToBinary(int asciiInput)
{
	int res = 0, i = 1, rem;
        
	while (asciiInput > 0)
	{
		rem = asciiInput % 2;
		res = res + (i * rem);
		asciiInput = asciiInput / 2;
		i = i * 10;
	}
	return(res);
}
int main()
{
	int ch = '0';
       
	printf("\t Character \t ASCII \t  Binary\n");
        
	while (ch <= '~')
	{
		printf("\t %c \t\t\t   %d \t\t\t %d \n", ch, toascii(ch), asciiValueToBinary(toascii(ch)));
                ch++;
	}
	return 0;
}
