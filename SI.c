//Program in C language to calculate Simple Interest, with Final Amount to be paid(condition)

#include<stdio.h>
#include<conio.h>

void main()
{
    int principal, rate_of_interest, time, amount, interest;                              // variable defintion
    char temp;                                                                          // choice variable
    
    printf("Enter The Principal Amount : ");                                           // output 
    scanf("%d",&principal);                                                            // storing the value in 'principal' variable
    
    printf("Enter The Rate of interest Per Year : ");                                   // output
    scanf("%d",&rate_of_interest);                                                      // storing value in 'rate_of_interest' variable

    printf("Enter The Period Of interest(in years): ");                                 // output
    scanf("%d",&time);                                                                 // storing value in 'time' variable

    interest = principal * rate_of_interest * time/100;                                  // Formula to calculate simple interest
                                                                            

    printf("interest for given inputs = %d",interest);                                   // printing the value of interest

    printf("\nDo you want to know the final amount to be paid\nType 'y' for yes or type 'n' for no : ");      //user prompt condition
    scanf(" %c",&temp);                                                      // storing user choice in temp variable

     if(temp == 'y')                                                        // validating the "True" choice/input of user
    {
        amount = principal + interest;                                       // formula to calculate amount
        printf("The total amount to be paid = %d",amount);                  // printing the value of amount
    }
    else if (temp == 'n')                                                   // validating the "False" choice/input of user
    {
        printf("Program Executed Sucessfully and is Terminated.");          // Output according to programmer
    }
    else                                                                    // checking for invalid input/choice
    {
        printf("Invalid input!");                                           // Output To give user the result
    }
    
}

//End of code