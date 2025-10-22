

General form of a funtion

return-type function-name ( parameters ) 
{
	declarations
	statements
}

// has to include a return statement.
// functions cant return arrays
// specifying that the return type is void indicates that the function doesn't return a value
// some programmers put the return type above the funcitons name, exp.

double
average( double a, double b) 
{ 
	return ( a + b ) / 2;
}


// theoretically functions should be "defined" before the function is called for the first time,
// the book states that this is possible but hard to realize when dealing with a multitude of functions.
// c provides a solution, "function declarations". they look like this.

retrun-type function-name ( parameters );

// needless to say, the declaration of afunctin must be consistent with the function's definition.
// this functionalty exists because of readabilty and therefor enable a more natural coding style.
// if neither of these steps are taken before compiling the compiler wont throw an error,
// instead it will default to return type int, which is the defautl return-type of a function, 
// in case it is ommited for example, this is called an implicit declaration of the function.
// also it performs the default argument promotion, and just hope for the best.
// example of a function declaration vs a function definition is found in the average2.c


// arguments arn't parameters.
// the arguments are the values that are passed to the function, 
// while parameters are basically only relevant for the declaration and definition so it is irrelevant, 
// says king and he is the king, so ill assume he is right.

// arguments dont have to match the type of the parameters. they will be converted if not.
// if defined/declared before call:
// 	the arg is basically assigned to parameter type var
// else 
// 	the compiler performs the
// 	default argument promotion. ( float -> double ) then intergral promotions ( char/short -> int )


// if we write:

average;

// this would be a "pointer to a function", instead of a function call, so we can write this, 
// although the function wont be called, since its a pointer to the function.


f( a, b );
f( (a, b), c );
// comma, in the context of the first call is not an operator, 
// since c treats arguments in a functioncall as "assignement expressions".
// so it would be equivalent to "arg1 = a; arg2 = b;" and these assignements are seperated by commas.
// in the context of the second expression, the comma would be interpreted as an operator. e.g.:
// "arg1 = (a, b); arg2 = c"


// on "prototyping"
// we are allowed to use differing parameter names when declaring a function, so we could legaly do this:

double average( double important_value, double irrelevant_value );


// we are allowed to do this :

void print_pun( void ), print_count( int n );

// since it is legal since both have return type void, 
// it is even legal to combine function declarations and variable declarions, like so: 

double x, y, average( double a, double b );
