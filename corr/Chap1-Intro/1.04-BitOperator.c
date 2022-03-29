/*
 -----------------------------------------------------------------------------------
 Nom du fichier : 1.04-BitOperator.c
 Auteur(s)      : (\_/)
 Date creation  : <jj.mm.aaaa>

 Description    : 1.04
                     Que valent chacune des expressions suivantes
                        1)    22 | 11
                        2)    0 ^ 19
                        3)    2 << 3
                        4)    30 & 14
                        5)    8 >> 2
                        6)    4 & 29
                        7)    9 << 4
                        8)    31 ^ 27
                        9)    23 | 3
                        10)   -1 >> 1
                        11)   -5 >> 1
                        12)   3 & ~2
                        13)   6 | 5 & 4

 Remarque(s)    : <� compl�ter>

 Compilateur    : Mingw-w64 gcc 11.2.0
 -----------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("1) %d\n", 22 | 11);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0001 0110
	//                   |  0000 0000 0000 0000 0000 0000 0000 1011
	//                      0000 0000 0000 0000 0000 0000 0001 1111 => 31
	// After Exec. :    31
	printf("2) %d\n", 0 ^ 19);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0000 0000
	//                  ^   0000 0000 0000 0000 0000 0000 0001 0011
	//                      0000 0000 0000 0000 0000 0000 0001 0011 => 19
	// After Exec. :    19
	printf("3) %d\n", 2 << 3);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0000 0010
	//                      0000 0000 0000 0000 0000 0000 0001 0000 => 16
	// After Exec. :    16
	printf("4) %d\n", 30 & 14);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0001 1110
	//                   &  0000 0000 0000 0000 0000 0000 0000 1110
	//                      0000 0000 0000 0000 0000 0000 0000 1110 => 14
	// After Exec. :    14
	printf("5) %d\n", 8 >> 2);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0000 1000
	//                      0000 0000 0000 0000 0000 0000 0000 0010 => 2
	// After Exec. :    2
	printf("6) %d\n", 4 & 29);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0000 0100
	//                   &  0000 0000 0000 0000 0000 0000 0001 1101
	//                      0000 0000 0000 0000 0000 0000 0000 0100 => 4
	// After Exec. :    4
	printf("7) %d\n", 9 << 4);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0000 1001
	//                      0000 0000 0000 0000 0000 0000 1001 0000 => 144
	// After Exec. :    144
	printf("8) %d\n", 31 ^ 27);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0001 1111
	//                  ^   0000 0000 0000 0000 0000 0000 0001 1011
	//                      0000 0000 0000 0000 0000 0000 0000 0100 => 4
	// After Exec. :    4
	printf("9) %d\n", 23 | 3);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0001 0111
	//                   |  0000 0000 0000 0000 0000 0000 0000 0011
	//                      0000 0000 0000 0000 0000 0000 0001 0111 => 23
	// After Exec. :    23
	printf("10) %d\n", -1 >> 1);		// NOLINT
	// Before Exec. :       1111 1111 1111 1111 1111 1111 1111 1111
	//                      1111 1111 1111 1111 1111 1111 1111 1111 => -1
	// After Exec. :    -1
	printf("11) %d\n", -5 >> 1);		// NOLINT
	// Before Exec. :       1111 1111 1111 1111 1111 1111 1111 1011
	//                      1111 1111 1111 1111 1111 1111 1111 1101 => -3
	// After Exec. :    -3
	printf("12) %d\n", 3 & ~2);		// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0000 0011
	//                   &  1111 1111 1111 1111 1111 1111 1111 1101
	//                      0000 0000 0000 0000 0000 0000 0000 0001 => 1
	// After Exec. :    1
	printf("13) %d\n", 6 | 5 & 4);	// NOLINT
	// Before Exec. :       0000 0000 0000 0000 0000 0000 0000 0101
	//                   &  0000 0000 0000 0000 0000 0000 0000 0100 => Priority on '&'
	//                      0000 0000 0000 0000 0000 0000 0000 0100 => 4
	//                   |  0000 0000 0000 0000 0000 0000 0000 0101
	//                      0000 0000 0000 0000 0000 0000 0000 0101 => 6
	// After Exec. :    6

	return EXIT_SUCCESS;
}