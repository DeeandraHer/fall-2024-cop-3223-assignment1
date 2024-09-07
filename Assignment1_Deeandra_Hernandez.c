//********************************************************
// Assignment1_Deeandra_Hernandez.c
// Author: Deeandra Hernandez
// Date: 9/6/24
// Class: COP 3223, Professor Parra
// Purpose: 

// Input: 
//
// Output:
// //********************************************************

#include <stdio.h>
#include <math.h>
#define  PI 3.14159


//declaring functions
//double calculateDistance();
/*double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();*/
void Points_input(double *x1, double *y1, double *x2, double *y2);
//void Point2_input(double Px2, double Py2);
//void Printme();

// main function
int main(int argc, char**argv)
{ 

   //declaring variable
  double x1,y1,x2,y2;


 //calling out functions 
 //askForUserInput();
  Points_input(&x1, &y1, &x2, &y2);
  //Point2_input(x2,y2);
  //calculateDistance();
  /*calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();*/
 printf("this is x1 = %.2lf\n", x1);
 printf("this is y1 = %.2lf\n", y1);
 printf("this is x2 = %.2lf\n", x2);
 printf("this is y2 = %.2lf\n", y2);

    
 
    return 0;
}

//function to call for user input
//idealy this function will store points 1 and 2
/*double askForUserInput()
{
    printf("Point #1 entered:\n");
    printf("x1 = ");
     scanf("%lf", &x1); //storing variable

    printf("y1 = ");
     scanf("%lf", &y1);

    printf("Point #2 entered:\n");
    printf("x2 = ");
     scanf("%lf", &x2); //storing variable

    printf("y2 = ");
     scanf("%lf", &y1); //storing variable


}*/

void Points_input(double *x1, double *y1, double *x2, double *y2)
{
     printf("Point #1 entered:\n");
    printf("x1 = ");
     scanf("%lf", x1); //storing variable

    printf("y1 = ");
     scanf("%lf", y1);


    printf("Point #2 entered:\n");
    printf("x2 = ");
     scanf("%lf", x2); //storing variable

    printf("y2 = ");
     scanf("%lf", y2); //storing variable


    

}

/*void Point2_input(double Px2, double Py2)
{
    printf("Point #2 entered:\n");
    printf("x2 = ");
     scanf("%lf\n", &Px2); //storing variable

    printf("y2 = ");
     scanf("%lf\n", &Py2); //storing variable

}*/




/*double calculateDistance()
{
  double d; //declaring variable





}*/

/*double calculatePerimeter()
{

}

double calculateArea()
{

}

double calculateWidth()
{

}

double calculateHeight()
{
    
}*/