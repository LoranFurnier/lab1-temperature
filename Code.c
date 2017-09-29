
#include <stdlib.h>
#include <stdio.h>
void convert (double temp, char type) {
	switch (type) {
    	case 'C':
    	case 'c':
	    	if (temp < -273.15){
		    	printf("Temperature is below absolute zero, please, try again");
			    break;
	        	} else {
		      	double k = temp + 273.15;
			      double f = (temp * 9 / 5) + 32;
		      	printf("%.2f C:\n", temp);
	     		 printf("%.2f K\n", k);
		      	printf("%.2f F\n", f);
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
			printf("%.2f F \n", f);
			break;
		}

	case 'F':
	case 'f':
		if (temp < -459.67)
		{
			printf("Temperature is below absolute zero, please, try again");
			break;
		} else {
			double c = (temp - 32) * 5 / 9;
			double k = (temp + 459.67) * 5 / 9;
			printf("%.2f F: \n", temp);
			printf("%.2f C \n", c);
			printf("%.2f K \n", k);
			break;
		}

	default:
		printf("Type anything else!");
		break;
	}

}


int main()
{
	char type;
	int a;
    scanf("%d  %c", &a, &type);
    if (type == '\n'){
        convert(a, 'c');
        convert(a, 'f');
        convert(a, 'k');
    } else{convert(a, type);}
}
