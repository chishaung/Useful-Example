
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define G 6.67 * (0.00000000001)

using namespace std;


int main()
{
	
	// Question 1.
	// force = mass * acceleration
	float force, mass, acceleration;

	printf("Please enter the mass and acceleration here: ");
	scanf("%f %f", &mass, &acceleration);

	force = mass * acceleration;
	printf("Force = %.4f * %.4f = %.4f \n", mass, acceleration, force);

	// Queation 2.
	// volume_cylinder = PI * radius2 * height
	float cylinder, radius, height;
	printf("please enter the radius and height: ");
	scanf("%f %f", &radius, &height);
	cylinder = PI * radius * radius * height;
	printf("cylinder = %.4f * %.4f * %.4f * %.4f = %.4f \n", PI, radius, radius, height, cylinder);
	

	// Question 3.
	// encoded_character = (plaintext_character - 'a') + 'A'
	char encoded_char, plaintext_char;
	printf("Please enter the encoded_character and plaintext_character here: ");
	scanf(" %c", &plaintext_char);
	encoded_char = (plaintext_char - 'a') + 'A';
	printf("encoded character = %c \n", encoded_char);
	

	
	// Question 4.
	// force = G * mass1 * mass2 / distance^2, where G = 6.67 * 10^-11
	//double G = 6.67 * (0.00000000001);
	double force2;
	double mass1, mass2, distance;

	printf("Please enter the mass1 amd mass2 and distance here: ");
	scanf("%lf %lf %lf", &mass1, &mass2, &distance);

	force2 = G * mass1 * mass2 / (distance * distance);
	
	printf("Force = %.14f * %.4f * %.4f / (%.4f * %.4f) = %.20f \n", G, mass1, mass2, distance, distance, force2);
	


	
	// Question 5.
	// vout = r2 / (r1 + r2) * vin
	float vout, vin, r1, r2;
	printf("Please enter the r1 and r2 and vin here: ");
	scanf("%f %f %f", &r1, &r2, &vin);

	vout = r2 / (r1 + r2) * vin;
	printf("vout = %.4f / (%.4f + %.4f) * %.4f = %.4f \n", r2, r1, r2, vin, vout);
	
	
	// Question 6.
	// distance = square root of ((x1 - x2)2 + (y1 - y2)2)
	float distance2, x1, x2, y1, y2;
	printf("Please enter the x1, x2, y1, y2: ");
	scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
	distance = sqrt(((x1 - x2)*(x1- x2) + (y1 - y2)*(y1 - y2)));
	printf("Distance = sqrt((%.4f - %.4f) * (%.4f - %.4f) + (%.4f - %.4f) * (%.4f - %.4f)) = %.6f \n", x1, x2, x1, x2, y1, y2, y1, y2, distance2);
	
	// Question 7.
	// y = (73 / 12) - x * z + a / (a % 2)
	float y, x, z;
	int a;

	printf("Please enter the x, z, a (a should be odd number): ");
	scanf("%f %f %d", &x, &z, &a);

	
	y = ( (float)73 / (float)12 ) - x * z + a / (a % 2);
	printf( "y = ( 73 / 12 ) - %f * %f + %d / (%d %% 2) = %f \n", x, z, a, a, y);

	

	system("PAUSE");

	return 0;
}
