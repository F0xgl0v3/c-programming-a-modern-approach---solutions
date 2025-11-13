
we can perform arithmatic on pointers 
assuming 
p = &a[0];
it points to the first element of a we can now add, lets say 3 to that pointer and make it point to a[3], the fourth element of the array. that can be expressed like this:
p += 3;

we can also perform arythmatic on pointers that "point to the same array" this is important, bcs if it is undefined if we use pointers that point to elements in different arrays.

valid operators:
+ - > >= < <= ==

we can to this O_O

for ( int *p = &a[3]; p <= &a[7]; p++ ) {
	...
}

array declarations
if we declare an array a, like so int a[10]; a beomes a pointer to the first element of the array, so *a = 7; is basically equivalent in outcome as a[0] = 7; this enables us to not only use pointer arythmatic on the array pointer
but also enables us to modify the elemnts of the array by writing expression like tis *(a+7) wich would modify the 8th elemtent of a. summorized:
*(a+n) 
a[n]
can be used interchangeably in all cases that i know of. this solidifys my understanding as [n] as a pointer offset. still interested in how it looks internaly. probalbly nothing special, just an int of somekind.

performance
if we only pass a pointer to an array to a function instead of an array itself, we usually have better performance, because the programm doesnt have to copy the whole array, only make space for a pointer.

multidimensional arrays
a[row][col]
if int a[3][9] && int *p = &a[0][0]
*p+10 eq a[1][2]
because of how arrays are stored in memory, one block where each row follows the last.
the flowing loop illustrates this quite well:

int row, col;
int a[row][col];
int *p;

for ( p = &a[0][0]; p < &a[row-1][col-1]; p++ ) {
	*p = 0;
}

we go through a[0][0], a[0][1], a[0][2], ..., a[0][col-1]
the next element that would be accesed would be a[1][0], a[1][1], ...

for every 2D array a[i] becomes a pointer to the first element of the row i so this is possible 
p = a[i] 
further this must mean that p = a is possible aswell and is eq to p = a[0][0]
we shall view a as an array of pointers to arrays of int.

keep in mind, if we perform pointer arythmatic, if we add a number n to a pointer p
n is usually multiplyed by the number of bytes the type of p needs to store its values. 
that would mean, lets say 4*n in case of int.

