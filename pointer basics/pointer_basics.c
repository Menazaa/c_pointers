#include <stdio.h>

int main()
{
    // pointer declaration, initialization, and pointers of pointers
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

// pointers operators and symbolic constants


// Char example
    char ch;

	/* initialize variables! */
	ch = 'A';

	printf("Value of variable 'a': %c\n",ch);
	printf("Address of variable 'a': %p\n",&ch);
	printf("Size of variable 'a': %lu\n",sizeof(ch));


// int example

	int num;

	/* initialize variables! */
	num = 12345;

	printf("Value of variable num: %d\n",num);
	/* the address may be different from system to system */
	printf("Address of variable num: %p\n",&num);
	/* integers typically occupy 4 bytes in modern systems */
	printf("Size of variable : %lu\n",sizeof(num));
	

	return(0);
}
