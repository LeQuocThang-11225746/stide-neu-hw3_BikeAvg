#include <stdio.h>
    int main()
{ 
   int x;
   float y;
   printf ("Total distance travelled :");
   scanf ("%d",&x);
   printf("Total spent fuel :");
   scanf ("%f",&y);
   printf("Bike’s average consumption %f", y/x*100);
   
    return 0;
}
