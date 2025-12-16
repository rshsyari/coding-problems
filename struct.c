#include <stdio.h>
#include <ctype.h>

typedef struct {
	int upperLimit;
	const char* message;
} weatherCategory;

int main() {
	int currentTemp;
	char scaleName[5];

	printf("Choose temperature scales to use [C|F|K|R]: ");
	scanf("%s", scaleName);

	printf("Enter current temperature in %s scale: ", scaleName);
	scanf("%d", &currentTemp);

	char scale = toupper(scaleName[0]);

	if(scale == 'F'){
		currentTemp = (currentTemp - 32) * 5/9;
	}
	else if (scale == 'K'){
		currentTemp = currentTemp - 273;	
	}
	else if (scale == 'R'){
		currentTemp = (currentTemp - 491.67) * 5/9;
	}
	else if (scale == 'C'){}
	else {
		printf("Invalid temperature scale!\n");
		return 1;
	}

	weatherCategory checkWeather[] = {
		{0, "The weather is freezing"},
		{10, "The weather is cold"},
		{20, "The weather is chilling"},
		{30, "The weather is mild"},
		{40, "The weather is hot"},
		{1000, "The weather is boiling"},
	};

	int i = 0;
	while (currentTemp > checkWeather[i].upperLimit) i++;
	printf("%s\n", checkWeather[i].message);

}
