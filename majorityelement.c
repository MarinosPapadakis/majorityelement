//Copyright (c) 2020, Marinos Papadakis
//All rights reserved.
//This source code is licensed under the MIT License found in the LICENSE file in the root directory of this source tree.
#include <stdio.h>

int main(void)
{
	//Define variables
	int count;
	int p;
	int num;

	//Ask for number of values
    do
    {
    	printf("Enter number of values (2 - 9.999): ");
    	scanf("%d", &num);
    	if (num > 9999 || 2 > num)
    	{
    	    printf("Wrong input. Accept only numbers up 2 - 9.999\n");
    	}
    	getchar();
    }
    while(num > 9999 || 2 > num);

    //Define half of values & list
    int half = num/2;
    int list[num];

    //Ask for numbers num times
    for (int i = 0; i < num; i++)
    {
	    list[i] = 10000;
   	    do
   	    {
   		    printf("Enter number %i: ", i + 1);
       	    scanf("%d", &list[i]);
       	    if (list[i] > 9999)
       	    {
                printf("Wrong input. Accept only numbers up to 9.999\n");
       	    }
       	    getchar();
   	    }
   	    while(list[i] > 9999);
    }

    //Print new line
    printf("\n");

    //Count how many times elements exist in array
    for (int i = 0; i <= half; i++)
    {
    	count = 1;
    	for (int j = i + 1; j < num; j++)
    	{
    		if (list[i] == list[j])
    		{
    			count++;
    		}
    	}
    	//If element exists more than half times print it and return 0
    	if (count > half)
    	{
    		printf("The majority element is: %i\n", list[i]);
    		return 0;
    	}
    }
    //Else print there is no majority element and return 1
    if (count <= half)
    {
    	printf("There is no majority element.\n");
    	return 1;
    }
}
