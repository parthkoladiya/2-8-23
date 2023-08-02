#include <stdio.h>
#include <conio.h>
void main()
 {
    int num, reversedNum = 0, temp;
     clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
	int digit = temp % 10;
	reversedNum = reversedNum * 10 + digit;
	temp /= 10;
    }

    printf("Reverse of the number: %d\n", reversedNum);

    if (num == reversedNum) {
	printf("The number is a palindrome.\n");
    } else {
	printf("The number is not a palindrome.\n");
    }

    getch();
}
