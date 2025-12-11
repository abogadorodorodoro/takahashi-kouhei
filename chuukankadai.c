#include <stdio.h>
#include <string.h>
#define MIN_LENGTH 8
#define MAX_PASSWORD_LENGTH 100 

void check_password_strength_define(const char *password) {
    size_t length = strlen(password);
    int has_upper = 0;
    int has_lower = 0;

    for (size_t i = 0; i < length; i++) {
        char c = password[i];
        if (c >= 'A' && c <= 'Z') {
            has_upper = 1;
        }
        if (c >= 'a' && c <= 'z') {
            has_lower = 1;
        }
    }
    int is_long_enough = (length >= MIN_LENGTH);
    int has_both_cases = (has_upper && has_lower);

    if (is_long_enough && has_both_cases) {
        printf("Your pasword is TUYOI\n");
    } else if (has_both_cases) {
        printf("It`s time to update for pasword\n");
    } else if (is_long_enough) {
        printf("It`s time to update for pasword\n");
    } else {
        printf("Your pasword is cheap,bruh\n");
    }
}

int main(void) {
    char password[MAX_PASSWORD_LENGTH + 1];
    printf("Please enter your pasword: ");
    if (scanf("%100s", password) != 1) {
        return 1;
    }

    check_password_strength_define(password);

    return 0;
}