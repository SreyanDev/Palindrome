#include<stdio.h>

int main()
{
        int num,originalnum,reversednum=0,remainder;              //Assigning variables and assiging the value of reversednum at starting as 0.

        printf("Enter the number: ");
        scanf("%d",&num);

        originalnum=num;          //Storing the num value in originalnum variable so that we can compare later when the value of num is changed.

        while(num!=0)
        {
                remainder=num%10;                       //This entire while loop is a algorithm for palindrome.
                reversednum=reversednum*10+remainder;   
                num/=10;
        }

        if(originalnum==reversednum)                                                  //Checking if the entered number is a palindrome or not.
                printf("The entered number is a palindrome.");
        else
                printf("The entered number is not a palindrome.");
        
        return 0;
}
