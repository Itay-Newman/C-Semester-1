#include <stdio.h>
#include <math.h>

enum operation
{
    distance2 = 1,
    hypotenus2,
    circle2,
    rectangle2,
    square2,
    exit2
};

float distance(int xOfPointA, int yOfPointA, int xOfPointB, int yOfPointB);
float hypotenus(int side1, int side2);
float circleArea(float radius);
float circlePerimeter(float radius);
int rectangle(int rectangleSide1, int rectangleSide2);
int square(int sideOfSquare);

int main()
{
    int choice = 0;
	
	int xOfPointA = 0;
	int yOfPointA = 0;
	int xOfPointB = 0;
	int yOfPointB = 0;
	
	int side1 = 0;
	int side2 = 0;
	
	float radius = 0;
	
	int rectangleSide1 = 0;
	int rectangleSide2 = 0;
	
	int sideOfSquare = 0;
    
    do
    {
        printf("\nChoose an option:\n");
        printf("1 - calc distance between two points\n");
        printf("2 - calc hypotenus of triangle\n");
        printf("3 - calc area and perimeter of circle\n");
        printf("4 - calc area of rectangle\n");
        printf("5 - calc area of square\n");
        printf("6 - exit\n");
        scanf("%d", &choice);
        getchar();
        
        switch (choice)
        {
            case distance2:
                printf("distance is: %f\n", distance(xOfPointA, yOfPointA, xOfPointB, yOfPointB));
                break;
            case hypotenus2:
                printf("Hypotenuse is %2f\n", hypotenus(side1, side2));
                break;
            case circle2:
				printf("enter the radius of the circle:\n");
				scanf("%f", &radius);
				getchar();
				
                printf("perimeter:%0.2f\n",circlePerimeter(radius));
				printf("area:%0.2f\n", circleArea(radius));
                break;
            case rectangle2:
                printf("the area of the rectangle is: %d\n", rectangle(rectangleSide1, rectangleSide2));
                break;
            case square2:
                printf("the area of the square is: %d\n", square(sideOfSquare));
                break;
            default:
                printf("goodbye\n");
                break;
        }
    } while (choice != 6);
    
    return 0;
}
float distance(int xOfPointA, int yOfPointA, int xOfPointB, int yOfPointB)
{
    float distanceBetweenThePoints;
    
    printf("Enter point one coordinates:\n");
	scanf("%d %d",&xOfPointA, &yOfPointA);
	getchar();
	
	printf("Enter point two coordinates:\n");
	scanf("%d %d",&xOfPointB,&yOfPointB);
	getchar();
    
    distanceBetweenThePoints = sqrt(pow(xOfPointA - xOfPointB, 2) + pow(yOfPointA - yOfPointB, 2));
    
    return distanceBetweenThePoints;
}
float hypotenus(int side1, int side2)
{
    float hypotenusInTriangle;
    
    printf("Enter 2 sides of the triangle:\n");
	scanf("%d %d", &side1, &side2);
	getchar();
    
    hypotenusInTriangle = sqrt(pow(side1, 2) + pow(side2, 2));
    
    return hypotenusInTriangle;
}
float circlePerimeter(float radius)
{
    float perimeter;
    
    perimeter = 2 * 3.14 * radius;
    
    return perimeter;
}
float circleArea(float radius)
{
	float area;

    area = 3.14 * pow(radius, 2);
    
    return area;
}
int rectangle(int rectangleSide1, int rectangleSide2)
{
    int rectangleArea;
    
    printf("Enter rectangle length: \n");
	scanf("%d", &rectangleSide1);
	getchar();
	
	printf("enter rectangle width: \n");
	scanf("%d", &rectangleSide2);
	getchar();
    
    rectangleArea = rectangleSide1 * rectangleSide2;
    
    return rectangleArea;
}
int square(int sideOfSquare)
{
    int squareArea;
    
    printf("enter the length of the side of the square:\n");
	scanf("%d", &sideOfSquare);
	getchar();
    
    squareArea = sideOfSquare * sideOfSquare;
    
    return squareArea;
}
