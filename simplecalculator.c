#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void print();
double division(double,double);
double modulus(int,int);
int main()
{
    system("cls");
    int choice;
    double first,second,result;
    while(1)
    {
        print();
        scanf("%d",&choice); 
        if(choice==7)
        {
            break;
        }
        if (choice< 1 || choice> 7)
        {
           printf("enter valid number\n");
           continue;
        }
        
        printf("\n enter first number: ");
        scanf("%lf",&first);
        printf(" enter second number: ");
        scanf("%lf",&second);
        switch (choice)
        {
            case 1: //add
                result=first + second;
                break;
            case 2: //subtract
                result=first - second;
                break;
            case 3: //multiply
                result=first * second;
                break;
            case 4: //divide
                result=division(first,second);
                break;
            case 5: //modulus
                result=modulus(first,second);
                break;
            case 6: //power
                result=pow(first,second);
                break;

        }
        if (!isnan(result) )
        {
            printf("\n result: %.4f\n",result); 
        }
        
       
    }
    return 0;
}

double division(double a, double b)
{
    if (b==0)
    {
        printf("\t\nmathematical error\n");
        return NAN;
    }
    else
    {
        return a/b;
    }
    
}
double modulus(int a, int b)
{
    if (b==0)
    {
        printf("\t\nmathematical error\n");
        return NAN;
    }
    else
    {
        return a%b;
    }
    
}
void print()
{
    printf("\n----------------------------------\n");
    printf("\nWelcome to calculator:\n");
    printf("\nChoose one of following options:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nNow enter your choice: ");
}
