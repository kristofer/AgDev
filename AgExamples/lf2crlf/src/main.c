/*
 * Title:			LF to CRL for text files on MOS
 * Author:			Kristofer Younger
 * Created:			04/01/2024
 * Last Updated:	04/01/2024
 *
 * Modinfo:
 */
 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // read in every byte from standard input and if you find a \n, write \r\n to standard output
    int c; 
	// c = getchar();
	// putchar(c);

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar('\r');
        }
        putchar(c);
    }
    return 0;
}
