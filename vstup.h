#ifndef DO_UKOL
#define DO_UKOL

do {
        printf("Type a whole number:");
        scanf("%d", &number);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar!=0) {
            printf ("No whole number has been typed. Try again.\n");
        }
        else if (number == 0) {
            printf("The number %d is zero. Program will be closed.\n", number);
        } else if (number > 0) {
            printf("The number %d is positive.\n", number);
        } else {
            printf("The number %d is negative.\n", number);
        }
    } while (countOfChar !=0 || number != 0);
    return 0;



#endif