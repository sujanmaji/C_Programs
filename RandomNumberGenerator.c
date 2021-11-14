#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    FILE *fp;    // Creaing File pointer
    int n, a, b; // Creating data variable

    // Title
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t~: n Random Numbers Generator Between a range [a:b] :~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    // Input data
    printf("How many numbers do you wan ? (Value of n) : ");
    scanf("%d", &n);

    printf("Enter the range [a:b] : ");
    scanf("%d %d", &a, &b);

    // Random Number Generating msg
    printf("\n Generating Random Numbers ......\n");

    fp = fopen("out.out", "w+"); // Opening or Creating Output File

    srand((unsigned)time(0));

    if (a > b)
    {
        // Swapping
        int temp = a;
        a = b;
        b = temp;
    }

    // Output Heading
    fprintf(fp, " %d Random Numbers between the range [%d:%d] are :~\n\n", n, a, b);

    // Generating Random Numbers
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, " %d", (a + rand() % (b - a + 1)));
    }

    fclose(fp); // Closing Output File

    // File Opening msg
    printf(" Successfully Random Numbers generated.\e[30m%20s\e[0m \n Please open the \"RandomNumber.out\" file to see the output.\n", "\x2d\x62\x79\x20\x53\x75\x6a\x61\x6e");

    return 0;
}
