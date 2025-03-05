#include <stdio.h>

int main()
{
	char a;
	char *ptr;

	/* initialize variables! */
	a = 'A';

	printf("Value of variable 'a': %c\n",a);
	/* assign ptr to a's address */
	ptr = &a;
	printf("Address of variable 'a': %p\n",ptr);
	printf("Value of pointer 'ptr': %c\n",*ptr);
	printf("Value of pointer 'ptr': %c\n",*ptr);


	return(0);
}

/*#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
int main(void) {
   const size_t x = 150;
   int a[x];
   for (size_t i = 0;i < x; ++i)
   a[i] = i;
   printf("SIZE_MAX = %lu
", SIZE_MAX);
   size_t size = sizeof(a);
   printf("size = %zu
", size);
}
