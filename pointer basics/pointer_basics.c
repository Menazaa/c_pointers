#include <stdio.h>

int main()
{
	char a;
	char *ptr; /* pointer declaration. NOTE : pointers con't be used without initialization as it could
                  crash the program and the entire system  */
    char **ptrptr;  // pointer to a pointer variable


	/* initialize variables! */
	a = 'A';

	printf("Value of variable 'a': %c\n",a);
	/* assign ptr to a's address */
	ptr = &a;   
    // assign ptrptr to ptr's address
    ptrptr = &ptr;
	printf("Address of variable 'a': %p\n",ptr);
    printf("Address of the pointer \"ptr\": %p\n",ptrptr);
	printf("Value of pointer 'ptr': %c\n",*ptr);
    printf("Value of variable ptrptr: %p\n",*ptrptr);

	return(0);
}
