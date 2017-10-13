#include <stdlib.h>
#include <stdio.h>
void convert(double temp, char type)
{
	switch (type)
	{
	case 'C':
	case 'c':
		if (temp < -273.15)
		{
			printf("Temperature is below absolute zero, please, try again");
			break;
		}
		else
		{
			double k = temp + 273.15;
			double f = (temp * 9 / 5) + 32;
			printf("%.2f C:\n", temp);
			printf("%.2f K\n", k);
			printf("%.2f F\n\n", f);
			break;
		}

	case 'K':
	case 'k':
		if (temp < 0)
		{
			printf("Temperature is below absolute zero, please, try again");
			break;
		}
		else
		{
			double c = temp - 273.15;
			double f = (temp / 5 * 9) - 459.67;
			printf("%.2f K: \n", temp);
			printf("%.2f C \n", c);
			printf("%.2f F \n\n", f);
			break;
		}

	case 'F':
	case 'f':
		if (temp < -459.67)
		{
			printf("Temperature is below absolute zero, please, try again");
			break;
		}
		else
		{
			double c = (temp - 32) * 5 / 9;
			double k = (temp + 459.67) * 5 / 9;
			printf("%.2f F: \n", temp);
			printf("%.2f C \n", c);
			printf("%.2f K \n\n", k);
			break;
		}
	case '\0':
	case ' ':
		{
			convert(temp, 'c');
			convert(temp, 'f');
			convert(temp, 'k');
		}
	default:
		printf("Type anything else!");
		break;
	}

}

/*
int main()
{
	char s[50], type;
	char *p;
	float temp;
	p = gets(s);
	sscanf(s, "%f %c", &temp, &type);
	convert(temp, type);
}
*/

int main(int argc, char *argv[]){
	int temp;
    char type;
    if (argc == 2){
        temp = argv [1];
        convert(temp, ' ');
    } else {
        temp = argv [1];
        type = argv [2][1];
        convert(temp,type);
    }
    printf("\nthat's how it works, i guess...");
    	return 0;
}
