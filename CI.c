//Program in C language to calculate Compound Interest, with Final Amount to be paid(condition)

#include<stdio.h>
#include<conio.h>

void main()
{
    int principal, rate_of_interest, time,i, amount, interest;                              // variable defintion
    char choice;                                                                          // choice variable
    
    printf("Enter The Principal Amount : ");                                           // output 
    scanf("%d",&principal);                                                            // storing the value in 'principal' variable
    
    printf("Enter The Rate of interest Per Year : ");                                   // output
    scanf("%d",&rate_of_interest);                                                      // storing value in 'rate_of_interest' variable

    printf("Enter The Period Of interest(in years): ");                                 // output
    scanf("%d",&time);                                                                 // storing value in 'time' variable

    interest = principal * rate_of_interest * time/100;                                  // Formula to calculate simple interest
                                                                            
    printf("interest for given inputs = %d",interest);                                   // printing the value of interest
    
    amount = principal + interest;

    printf("Do You have to pay compoundly (y/n)");
    scanf("%c",&choice);

    if(choice == 'y' || choice == 'Y')
    {
        
        for(i = time-1; i <= time; i--)
        {
            principal =  amount;
            interest = (principal * rate_of_interest * i)/100;
            amount = interest + principal;
        }
        printf("Your Compound Intrest is = %d",amount);
    }
}