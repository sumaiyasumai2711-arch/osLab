#include<stdio.h>
#include<stdlib.h>

int main()  {
    
    printf("Running Processes:\n");
    system("ps");

    printf("\nTop Processes:\n");
    system("top -n 1");

    printf("\nBackground job:\n");
    system("sleep 30 &");

    printf("\njobs:\n");
    system("jobs"); 

    printf("\nBring job to Background:\n");
    system("bg");

    printf("\nBring job to Foreground:\n");
    system("fg");

    return 0;

}