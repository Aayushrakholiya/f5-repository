
#include<stdio.h>

// function declaration
int getNum();
void modifyArrayValues(int myarray[], int size);



int main(void) {

	// declare an array with a size of 10
	int UserDefineValues[10];



	modifyArrayValues(UserDefineValues, 10);
	
	
	return 0;
	
}


void modifyArrayValues(int myarray[], int size) {

	int i = 0;
	printf("Please enter %d integers, pressing ENTER after each one:\n", size);
	for (i = 0; i < size; i++) {
		myarray[i] = getNum();

	}
}




#pragma warning(disable: 4996) // required by Visual Studio





int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}
