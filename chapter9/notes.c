

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


// theoretically functions should be decalered before the function is called for the first time,
// the book states that this is possible but hard to realize when dealing with a multitude of functions.
// c provides a solution, function declarations. they look like this.

retrun-type function-name ( parameters );

// needless to say, the declaration of afunctin must be consistent with the function's definition.
// this functionalty exists because of readabilty and therefor enable a more natural coding style.
// if neither of these steps are taken before compiling the compiler wont throw an error,
// instead it will default to return type int, which is the defautl return-type of a function, in case it is ommited for example, this is called an implicit declaration of the function.
// also it performs the default argument promotion, and just hope for the best.
// example of a function declaration vs a function definition is found in the average2.c


// arguments arn't parameters.
// the arguments are the values that are passed to the function, while parameters are basically only relevant for the declaration and definition so it is irrelevant, says king and he is the king, so ill assume he is right.

// arguments dont have to match the type of the parameters. they will be converted if not.
// if defined/declared before call:
// 	the arg is basically assigned to parameter type var
// else 
// 	the compiler performs the
// 	default argument promotion. ( float -> double ) then intergral promotions ( char/short -> int )

