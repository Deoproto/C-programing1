#include "processes.h"
#include <stdio.h>
#include <string.h>

void printprocesses() {
    if (processcount == 0) {
        printf("Няма активни процеси.\n");
        return;
    }
    for (int i = 0; i < processcount; i++) {
        printf("Процес ID: %d, Име: %s\n", processes[i].id, processes[i].name);
    }
}

void clear_input_buffer() {
    while (getchar() != '\n');
}

int main() {
    while (1) {
        printf("Изберете опция:\n");
        printf("1. Създаване на процес\n");
        printf("2. Извеждане на списък с процеси\n");
        printf("3. Спиране на процес\n");
        printf("4. Изход\n");
        printf("Вашият избор: ");

        int choice;
        if (scanf("%d", &choice) != 1) {
            printf("Невалиден вход. Опитайте отново.\n");
            clear_input_buffer();
            continue;
        }

        clear_input_buffer();

        switch (choice) {
            case 1: {
                if (processcount >= MAX_PROCESSES) {
                    printf("Максималният брой процеси е достигнат.\n");
                    break;
                }
                char name[MAX_NAME_LENGTH + 1];
                printf("Въведете име на процеса: ");
                if (!fgets(name, sizeof(name), stdin)) {
                    printf("Грешка при четене на име. Опитайте отново.\n");
                    break;
                }
                name[strcspn(name, "\n")] = '\0'; 
                int id = createnewprocess(name);
                if (id == 0) {
                    printf("Грешка при създаване на процес.\n");
                } else {
                    printf("Създаден е процес с ID: %d\n", id);
                }
                break;
            }
            case 2:
                printprocesses();
                break;
            case 3: {
                printf("Въведете ID на процеса, който да спрете: ");
                int id;
                if (scanf("%d", &id) != 1) {
                    printf("Невалиден вход. Опитайте отново.\n");
                    clear_input_buffer();
                    break;
                }
                stopprocess(id);
                break;
            }
            case 4:
                return 0;
            default:
                printf("Невалиден избор. Опитайте отново.\n");
        }
    }
}



