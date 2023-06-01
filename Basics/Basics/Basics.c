#include <stdio.h>
#include <memory.h>

int string_lenght(char * text)
{
	register int counter = 0; // Liegt nicht auf dem Stack, sondern in einem CPU-Register
	while(text[counter]) counter++;
	
	return counter;
}

void string_copy(char * destination, const char * source)
{
	/*char *buffer = (char *) malloc(100 * sizeof(char));
	memset(buffer,  'a', 10 * sizeof(char));
	buffer[10] = 0;*/

	while (*destination++ = *source++);

	
	
}

int main()
{
	
	char gruss[] = "Hallo";
	printf("%d\n", sizeof(gruss));

	printf("%s\n", gruss);
	printf("%d\n",string_lenght(gruss));

	char buffer[100];
	
	string_copy(buffer, gruss);
	printf("%s\n", buffer);

	
}



