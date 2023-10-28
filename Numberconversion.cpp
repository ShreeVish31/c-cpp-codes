#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
long decimalToBinary(int decimal) {
    long binary = 0;
    int remainder, i = 1;

    while (decimal != 0) {
        remainder = decimal % 2;
        decimal = decimal / 2;
        binary = binary + remainder * i;
        i = i * 10;
    }

    return binary;
}


bool isValidBinaryDigit(char c) {
    return (c == '0' || c == '1');
}


int binaryToDecimal(long binary) {
    int decimal = 0, i = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;

        // Check if the remainder is a valid binary digit (0 or 1)
        if (!isValidBinaryDigit(remainder + '0')) {
            printf("Invalid binary input.\n");
            return -1;  // Return -1 to indicate an error
        }

        binary = binary / 10;
        decimal = decimal + remainder * pow(2, i);
        i++;
    }

    return decimal;
}

int decimalToOctal(int decimal) {
    int octal = 0, i = 1;

    while (decimal != 0) {
        octal = octal + (decimal % 8) * i;
        decimal = decimal / 8;
        i = i * 10;
    }

    return octal;
}


int octalToDecimal(int octal) {
    int decimal = 0, i = 0;

    while (octal != 0) {
        decimal = decimal + (octal % 10) * pow(8, i);
        octal = octal / 10;
        i++;
    }

    return decimal;
}


long hexToBinary(char hex[]) {
    long binary = 0, i = 0;
    int val, len = 0;

    while (hex[len] != '\0') {
        len++;
    }
    len--;

    while (len >= 0) {
        switch (hex[len]) {
            case '0':
                val = 0;
                break;
            case '1':
                val = 1;
                break;
            case '2':
                val = 2;
                break;
            case '3':
                val = 3;
                break;
            case '4':
                val = 4;
                break;
            case '5':
                val = 5;
                break;
            case '6':
                val = 6;
                break;
            case '7':
                val = 7;
                break;
            case '8':
                val = 8;
                break;
            case '9':
                val = 9;
                break;
            case 'A':
            case 'a':
                val = 10;
                break;
            case 'B':
            case 'b':
                val = 11;
                break;
            case 'C':
            case 'c':
                val = 12;
                break;
            case 'D':
            case 'd':
                val = 13;
                break;
            case 'E':
            case 'e':
                val = 14;
                break;
            case 'F':
            case 'f':
                val = 15;
                break;
            default:
                printf("Invalid hexadecimal input.\n");
                return 0;
        }
        binary += val * pow(16, i);
        i++;
        len--;
    }

    return binary;
}


void binaryToHex(long binary) {
    char hex[32];
    int i = 0;

    while (binary > 0) {
        int digit = binary % 16;
        if (digit < 10) {
            hex[i++] = digit + '0';
        } else {
            hex[i++] = digit - 10 + 'A';
        }
        binary /= 16;
    }

    if (i == 0) {
        printf("0\n");
        return;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int choice, decimal, octal;
    long binary;
    char hex[32];

    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Octal\n");
    printf("4. Octal to Decimal\n");
    printf("5. Hexadecimal to Binary\n");
    printf("6. Binary to Hexadecimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            printf("Binary: %ld\n", decimalToBinary(decimal));
            break;
        case 2:
            printf("Enter a binary number: ");
            scanf("%ld", &binary);
            printf("Decimal: %d\n", binaryToDecimal(binary));
            break;
        case 3:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            printf("Octal: %d\n", decimalToOctal(decimal));
            break;
        case 4:
            printf("Enter an octal number: ");
            scanf("%d", &octal);
            printf("Decimal: %d\n", octalToDecimal(octal));
            break;
        case 5:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex);
            printf("Binary: %ld\n", hexToBinary(hex));
            break;
        case 6:
            printf("Enter a binary number: ");
            scanf("%ld", &binary);
            binaryToHex(binary);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

