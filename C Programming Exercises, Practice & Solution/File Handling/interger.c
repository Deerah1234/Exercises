#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Failed to open input file\n");
        return 1;
    }

    FILE *even_file = fopen("even.txt", "w");
    if (even_file == NULL) {
        printf("Failed to create even file\n");
        return 1;
    }

    FILE *odd_file = fopen("odd.txt", "w");
    if (odd_file == NULL) {
        printf("Failed to create odd file\n");
        return 1;
    }

    FILE *prime_file = fopen("prime.txt", "w");
    if (prime_file == NULL) {
        printf("Failed to create prime file\n");
        return 1;
    }

    int num;
    while (fscanf(input_file, "%d", &num) == 1) {
        if (num % 2 == 0) {
            fprintf(even_file, "%d\n", num);
        } else {
            fprintf(odd_file, "%d\n", num);
        }

        if (is_prime(num)) {
            fprintf(prime_file, "%d\n", num);
        }
    }

    fclose(input_file);
    fclose(even_file);
    fclose(odd_file);
    fclose(prime_file);

    return 0;
}
