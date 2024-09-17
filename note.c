#include <stdio.h>

int main()
{
    int amount, note500, note100, note50, note20, note10, note5, note2, note1;
    
   
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount = amount - (note500 * 500);
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount = amount - (note100 * 100);
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount = amount - (note50 * 50);
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount = amount - (note20 * 20);
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount = amount - (note10 * 10);
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount = amount - (note5 * 5);
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount = amount - (note2 * 2);
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

  
    printf("Total number of notes = \n");
    printf("No. of 500 notes = %d\n", note500);
    printf("No. of 100 notes = %d\n", note100);
    printf("No. of 50 notes = %d\n", note50);
    printf("No. of 20 notes = %d\n", note20);
    printf("No. of 10 notes = %d\n", note10);
    printf("No. of 5 notes = %d\n", note5);
    printf("No. of 2 notes = %d\n", note2);
    printf("No. of 1 notes = %d\n", note1);

    return 0;
}

