11. Pointers

& (address) operator - the address operator, if x is a variable, then &x is the address of x in memory.
* (indirection) operator - the indirection operator, if p is a pointer, then *p represents the object to which p currently points.

int i;
int *p;
p = &i

p now points to i

printf("%d\n", *p); 
will print the value of i, not the address of i.

* can be viewed as the inverse of &.

applying & to a variable produces a pointer to the variable; applying * to the pointer takes us back to the original variable:
j = *&i;   // is the same as j = i; 
	  
when we assigne a pointer int *p the astrix * is not interpreted as an indirection operator but an extended type definition. 

const
we can use const to make a variable we pass immutable. this bekomes relevant when we deal with memory critical applications, lets say the value of the variable is big, ( maybe we pass a struct ) 
if we just pass a pointer we save on memory space, so this practice becomes more memory efficent. also it seems like it is computationally more efficient anyway. 
trying to modify a cont will cause a compilation error
what also is relevant when thinking about const is that if we go f( const int *p ) it makes the value that p points to immutable, not p itself.
in this context it is interesting that the expression int * const p can be used to declare an immutable pointer. this illustrated the fact that in a "declaration" the astrix "*" is a "type extension"


we can return pointers form a function. e.g.

int *max( int *a, int *b ) {
	if ( *a > *b ) return a;
	else return b;
}
