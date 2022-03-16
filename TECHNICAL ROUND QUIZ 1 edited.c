#include <stdio.h>
int i=40;  //declaring a variable with memory
extern int i;  //declaring a variable without assigning memory
void main()
{
    int num=(5,4,3,2,1,0);
    do{
        printf("%d and %d",i++,num); //since in do while loop it takes from right most value
                               so 0 is taken into account therefore 0 is taken as num value 
    }
    
    while(5,4,3,2,1,0);
    
}


OUTPUT:

40 and 0

NOTE:
if suppose num=(5,4,3,2,1)
it takes num from 1 and goes to infinity 
else last of while loop num can be from 1 to 9 the loop runs to infinity
