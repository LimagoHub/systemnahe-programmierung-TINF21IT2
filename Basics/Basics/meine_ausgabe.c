#include <stdio.h>
#include "meine_ausgabe.h"


static void foobar()
{
	printf("foobar von meine_ausgabe");
}
void ausgabe()
{
	printf("Hier ist ausgabe");
	foobar();
}

void foo()
{
	printf("Hier ist foo");
}




