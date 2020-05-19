//Copyright (c) 2020, Marinos Papadakis
//All rights reserved.
//This source code is licensed under the MIT License found in the LICENSE file in the root directory of this source tree.
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	//Define variables
	int v1;
	int v2;
    	int n1 = 0;
	int n2 = 0;
	bool start = false;
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

    //Define variable p for searching values
    for (int j = 0; j < num; j++)
    {
    	p = j + 1;
    	if (p > (num-1))
    	{
    		p = 0;
    	}
    }

    //Compare all values
    for (int i = 0; i < num; i++)
    {
    	if (list[i] == list[p]  && start == false)
    	{
    		start = true;
    		v1 = list[i];
    	    	break;
    	}
    }

    for (int i = 0; i < num; i++)
    {

    	if (list[i] == list[p]  && start == true && v1 == list[i])
    	{
    		n1 = n1 + 1;
    	}
    	else if (list[i] == list[p]  && start == true && v1 != list[i])
        {
        	n2 = n2 + 1;
        	v2 = list[i];
        }

    }

    //Print first value if it is more than half and return 0
    if (n1 > half)
    {
        printf("The majority element is: %i\n", v1);
        return 0;
    }
    //Print second value if it is more than half and return 0
    else if (n2 > half)
    {
        printf("The majority element is: %i\n", v2);
        return 0;
    }
    //Else there is no majority and return 1
    else
    {
        printf("There is no majority element.\n");
        return 1;
    }
}
