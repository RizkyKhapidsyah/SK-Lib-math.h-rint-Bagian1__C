#include <stdio.h>      /* printf */
#include <fenv.h>       /* fegetround, FE_* */
#include <math.h>       /* rint */
#include <conio.h>

int main() {
    printf("rounding using ");

    switch (fegetround()) {
    case FE_DOWNWARD: 
        printf("downward"); break;
    case FE_TONEAREST: 
        printf("to-nearest"); break;
    case FE_TOWARDZERO: 
        printf("toward-zero"); break;
    case FE_UPWARD: 
        printf("upward"); break;
    default: 
        printf("unknown");
    }

    printf(" rounding:\n");
    printf("rint (1.1) = %.1f\n", rint(1.1));
    printf("rint (7.8) = %.1f\n", rint(7.8));
    printf("rint (-1.2) = %.1f\n", rint(-1.2));
    printf("rint (-5.3) = %.1f\n", rint(-5.3));

    _getch();
    return 0;
}