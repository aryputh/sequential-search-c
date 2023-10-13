/*
*	Name: Aryan Puthran
*	Date: 10/13/2023
*	Course: CPT_S 121
*	Assignment: Sequential Search
*
*	Description: This program will search through an array and find a
*		specified element. Sequential search traverses the array starting
*		from the left and moving to the right until found.
*/

// Include required libraries
#include <stdio.h>

// List function prototypes
int sequentialSearch(int values[], int target, int valuesLength);

int main()
{
	// Declare required variables - can be edited
	int values[5] = { 0, 5, -2, 2, 23 };
	int target = -2;

	// Declare required variables - do not edit (is overwritten)
	int valuesLength = -1, result = -1;

	// Call sequentialSearch() and find valuesLength using memory
	valuesLength = sizeof(values) / sizeof(values[0]);
	result = sequentialSearch(values, target, valuesLength);

	// Print details
	printf("Searching array for %d...\n", target);
	printf("%d is at the index %d.", target, result);

	// Return a code, "success"
	return 0;
}

/*
*	Description: Traverses an array and finds a target number.
*	Date: 10/13/2023
*
*	Preconditions: valuesLength is in the range [0, length of values], values[] is valid.
*	Postconditions: The index of the element is returned, -1 if it's not
*		found.
*/
int sequentialSearch(int values[], int target, int valuesLength)
{
	// Declare required variables
	int result = -1, isFound = 0, index = 0;

	// Use a while loop so you can stop once the item is found
	while (index < valuesLength && !isFound)
	{
		// Determines if value at current index matches target
		if (values[index] == target)
		{
			// Update isFound
			isFound = 1;
		}
		else
		{
			// Increment index to check next element
			index++;
		}
	}

	if (!isFound)
	{
		return -1;
	}
	else
	{
		return index;
	}
}
