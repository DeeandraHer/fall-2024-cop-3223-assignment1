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
#define PI 3.14159


//declaring functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
void Points_input(double *x1, double *y1, double *x2, double *y2);
double myheight( double hy1, double hy2);
double mywith( double wx1, double wx2 );
double mydistance(double dx1, double dy1, double dx2, double dy2 );


// main function
int main(int argc, char**argv)
{ 

  double x1,y1,x2,y2; // declaring points variables  
 
 //calling out functions 

 //askForUserInput();
  //Points_input(&x1, &y1, &x2, &y2); //might have to delete 
  calculateWidth();
  calculateHeight();
  calculateDistance();
  calculatePerimeter();
  calculateArea();

 
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
    /*this will take user input and store it in each corresponding 
    user fuction usind pointers to facilitate.*/

   //printf("Hello welcome to my Assignment1: Fractures!\n");
    //printf("Please Input values below for Point one and two:\n");

    printf("Point #1 entered:\n");
    printf("x1 = ");
     scanf("%lf", x1); //storing variable

    printf("y1 = ");
     scanf("%lf", y1); //storing variable


    printf("Point #2 entered:\n");
    printf("x2 = ");
     scanf("%lf", x2); //storing variable

    printf("y2 = ");
     scanf("%lf", y2); //storing variable




}


double calculateDistance()
{
  double x1,y1,x2,y2; // declaring points variables

  Points_input(&x1, &y1, &x2, &y2); //calling fuction that collects user input
  
 //delete
  printf("this is x1 = %.2lf\n", x1);
  printf("this is y1 = %.2lf\n", y1);
  printf("this is x2 = %.2lf\n", x2);
  printf("this is y2 = %.2lf\n", y2);

  double d = mydistance(x1,y1,x2,y2);
  //calculating distance
  //double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  //have to add -lm when compling so it links to the math library

  // delete this, this is to check the distance
  printf("The distance between the two points is %.2lf\n", d );

  return d;

}

double mydistance(double dx1, double dy1, double dx2, double dy2)
{
   double dd = sqrt((dx2 - dx1) * (dx2 - dx1) + (dy2 - dy1) * (dy2 - dy1));

   return dd;
}

double calculatePerimeter()
{
 double x1,y1,x2,y2;

 Points_input(&x1, &y1, &x2, &y2); //calling fuction that collects user input

 double perimeter = PI * mydistance(x1,y1,x2,y2);

 //delete
 printf("this is x1 = %.2lf\n", x1);
 printf("this is y1 = %.2lf\n", y1);
 printf("this is x2 = %.2lf\n", x2);
 printf("this is y2 = %.2lf\n", y2);

 printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

 return 1.0;

}

double calculateArea()
{
 double x1,y1,x2,y2;

 Points_input(&x1, &y1, &x2, &y2); //calling fuction that collects user input

 double Area = (PI / 4) * pow(mydistance(x1,y1,x2,y2), 2);

//delete
 printf("this is x1 = %.2lf\n", x1);
 printf("this is y1 = %.2lf\n", y1);
 printf("this is x2 = %.2lf\n", x2);
 printf("this is y2 = %.2lf\n", y2);

 printf("The area of the city encompassed by your request is %.2lf\n", Area);

  return 1.0;
}

double mywith( double wx1, double wx2 )
{
    double mwith = fabs(wx2 - wx1);
    return mwith;
}

double calculateWidth()
{
 double x1,y1,x2,y2;

 Points_input(&x1, &y1, &x2, &y2); //calling fuction that collects user input
 //Pointsprint(&x1, &y1, &x2, &y2);

 double with = mywith(x2, x1);

//delete
 printf("this is x1 = %.2lf\n", x1);
 printf("this is y1 = %.2lf\n", y1);
 printf("this is x2 = %.2lf\n", x2);
 printf("this is y2 = %.2lf\n", y2);

 printf("The width of the city encompassed by your request is - %.2lf\n", with);

  return 1.0;
}



double myheight(double hy1, double hy2)
{
    double mheight = fabs(hy2 - hy1);

    return mheight;
}

double calculateHeight()
{
 double x1,y1,x2,y2;

 Points_input(&x1, &y1, &x2, &y2); //calling fuction that collects user input

 double height = myheight(y2, y1);

//delete
 printf("this is x1 = %.2lf\n", x1);
 printf("this is y1 = %.2lf\n", y1);
 printf("this is x2 = %.2lf\n", x2);
 printf("this is y2 = %.2lf\n", y2);

 printf("The height of the city encompassed by your request is - %.2lf\n", height);

  return 1.0;
}