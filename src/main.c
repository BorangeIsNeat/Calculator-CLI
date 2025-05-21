#include<stdio.h>
#include<string.h>

int parseInput(char input[1]) {

	char acceptableValues[] = {'1', '2', '3'};
	
	for (int acceptableValuesIndex = 0; 
		acceptableValuesIndex < strlen(acceptableValues);
		acceptableValuesIndex++) {

		if (input[0] != acceptableValues[acceptableValuesIndex]) {
			printf("Invalid Value Found\n");
		}

		if (input[0] == acceptableValues[acceptableValuesIndex]) {
			printf("Valid Value Found\n");
		}
	}

	printf("No Invalid Inputs Detected\n");

	return 0;

}

int main() {

	char input[1];

	printf("Enter Input to Test: ");

	scanf("%s", input);

	printf("\n");

	parseInput(input);

	return 0;

}
