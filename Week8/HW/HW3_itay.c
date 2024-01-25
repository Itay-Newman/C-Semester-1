#include <stdio.h>
#include <math.h>

void distance(int xOfPointA, int yOfPointA, int xOfPointB, int yOfPointB, float distanceBetweenThePoints);
void hypotenus(int side1, int side2, float hypotenusInTriangle);
void circle(float radius, float area, float perimeter);
void circle(float radius, float area, float perimeter);
void rectangle(int rectangleSide1, int rectangleSide2, int rectangleArea);
void square(int sideOfSquare, int squareArea);

int main()
{
	int choice = 0;
	
	int xOfPointA = 0;
	int yOfPointA = 0;
	int xOfPointB = 0;
	int yOfPointB = 0;
	float distanceBetweenThePoints = 0;
	
	int side1 = 0;
	int side2 = 0;
	float hypotenusInTriangle = 0;
	
	float radius = 0;
	float area = 0;
	float perimeter = 0;
	
	int rectangleSide1 = 0;
	int rectangleSide2 = 0;
	int rectangleArea = 0;
	
	int sideOfSquare = 0;
	int squareArea = 0;
	do
	{
	printf("welcome to my calculator!\n choose option:\n1 - calc distance between two points\n2 - calc hypotenus of triangle\n3 - calc area and perimeter of circle\n4 - calc area of rectangle\n5 - calc area of square\n6 - exit\n");
	scanf("%d", &choice);
	getchar();
	
		if (choice == 1)
		{
			distance(xOfPointA, yOfPointA, xOfPointB, yOfPointB, distanceBetweenThePoints);
		}
		else if(choice == 2)
		{
			hypotenus(side1, side2, hypotenusInTriangle);
		}
		else if(choice == 3)
		{
			circle(radius, area, perimeter);
		}
		else if(choice == 4)
		{
			rectangle(rectangleSide1, rectangleSide2, rectangleArea);
		}
		else if(choice == 5)
		{
			square(sideOfSquare, squareArea);
		}
		else if(choice == 6)
		{
			printf("goodbye\n");
		}
	} while (choice != 6);
		
	return 0;
}

void distance(int xOfPointA, int yOfPointA, int xOfPointB, int yOfPointB, float distanceBetweenThePoints)
{
	printf("Enter point one coordinates:\n");
	scanf("%d %d",&xOfPointA, &yOfPointA);
	getchar();
	
	printf("Enter point two coordinates:\n");
	scanf("%d %d",&xOfPointB,&yOfPointB);
	getchar();
	
	distanceBetweenThePoints = sqrt (pow (xOfPointA - xOfPointB, 2) + pow (yOfPointA - yOfPointB, 2));
	printf("Distance is %2f\n", distanceBetweenThePoints);
}
void hypotenus(int side1, int side2, float hypotenusInTriangle)
{
	printf("Enter 2 sides of the triangle:\n");
	scanf("%d %d", &side1, &side2);
	getchar();
	
	hypotenusInTriangle = sqrt (pow (side1, 2) + pow (side2, 2));
	printf("Hypotenuse is %2f\n", hypotenusInTriangle);
}
void circle(float radius, float area, float perimeter)
{
	printf("Enter circle radius:\n");
	scanf("%f", &radius);
	getchar();
	
	area = 3.14 * pow (radius, 2);
	perimeter = 2 * 3.14 * radius;
	
	printf("perimeter:%2f\n",perimeter);
	printf("Area:%f\n", area);
}
void rectangle(int rectangleSide1, int rectangleSide2, int rectangleArea)
{
	printf("Enter rectangle length: \n");
	scanf("%d", &rectangleSide1);
	getchar();
	
	printf("enter rectangle width: \n");
	scanf("%d", &rectangleSide2);
	getchar();
	
	rectangleArea = rectangleSide1 * rectangleSide2;
	
	printf("the area of the rectangle is: %d\n", rectangleArea);
}
void square(int sideOfSquare, int squareArea)
{
	printf("enter the length of the side of the square:\n");
	scanf("%d", &sideOfSquare);
	getchar();
	
	squareArea = sideOfSquare * sideOfSquare;
	
	printf("the area of the square is: %d\n", squareArea);
}
