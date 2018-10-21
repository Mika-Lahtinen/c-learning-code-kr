# include <stdio.h>
# define LOWER 0
# define UPPER 300
# define STEP 20

int main()
{
	/*摄氏度华氏度转换表*/
	printf("Celsius Fahr\n");
	float fahr , celsius;
	fahr = LOWER;
	while(celsius <= UPPER)
	{
		fahr = (9.0 * celsius) / 5.0 + 32.0 ;
		printf("%3.0f %6.1f\n" , celsius , fahr);
		celsius = celsius + STEP;
	}
}	
