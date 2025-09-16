typedef long a;
// extern a int c;    invalid combination of type specifiers
//extern int a c;    c undefined
// correct - extern a; int c;
// correct - extern a c;
extern a c;

// Q - What are LG and LPG 

typedef long LG, *LPG;
extern LPG lptr;

//Ans - LG is typedef of long and LPG as a pointer to long.
// Sec Statement declare lptr of type LPG with storage class as extern.

//Q - what is err
typedef enum error {warning , test , exception} err;       // typedef enum error err
//Ans - Its is a typedef  for enum error 

//Q - Different type of linkage
// 1. Internal linkage - Static variable , function with file scope.
// 2. External linkage - global non static varibale and function.
// 3. No linkage - local variable.