#include <stdio.h>

int main() {
	printf("%6d, %4d\n", 86, 1040);		//should produce the following output: "    86, 1040 \n"
	printf("%12.5e\n", 30.253);		//should produce the following output: " 3.02530e+01 \n"
	printf("%.4f\n", 83.162);		//should produce the following output: "83.1620 \n"
	printf("%-6.2g\n", .0000009979);	//should produce the following output: "1e-06\n"

}
