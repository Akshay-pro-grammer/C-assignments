#include<stdio.h>
int main(void)
{
	double meters,kilometers,centimeters,milimeters,feet,inches;
	printf("Enter the distance in meters: ");
	scanf("%lf",&meters);
	kilometers=meters*0.001;
	centimeters=meters*100;
	milimeters=meters*1000;
	feet=meters*3.28084;
	inches=meters*39.3701;
	printf("+------------+----------------+\n");
	printf("|Unit        |Value           |\n");
	printf("|------------|----------------+\n");
	printf("|Meters      |%lf       |\n",meters);
	printf("|Kilometers  |%lf        |\n",kilometers);
	printf("|Centimeters |%lf     |\n",centimeters);
	printf("|Milimeters  |%lf    |\n",milimeters);
	printf("|Feet        |%lf       |\n",feet);
	printf("|Inches      |%lf      |\n",inches);
	printf("+------------+----------------+\n");
	return 0;
}
