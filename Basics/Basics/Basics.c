#include <stdio.h>

void abc(double *myarray, size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%f\n",myarray[i]);
	}
	
	
}


int main()
{
	//double x = 10.0;
	//printf("%d\n", sizeof(x));

	//double *ptr; // Bei der Deklaration aendert * den Type 
	//ptr = &x;

	//printf("%d\n", sizeof(ptr));
	//printf("%p\n", ptr);

	//printf("%f\n", *ptr); // Zur Laufzeit dereferenziert der * (Liefert Wert an der Adresse)


	double feld[]={10.0,20.0,30.0};
	printf("%d\n", sizeof(feld));

	printf("%f\n", feld[0]); // wert von feld + 0 mal sizeof(double)
	double* ptr;
	ptr = feld;
	printf("%f\n", *ptr);
	printf("%f\n", *feld);
	printf("%f\n", ptr[0]);
	printf("%f\n", ptr[1]);
	printf("%f\n", *(ptr + 1));

	printf("%d\n", sizeof(ptr));

	abc(feld, sizeof(feld)/sizeof(double));
}



