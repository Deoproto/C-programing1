#include <stdio.h>
#include <stdint.h> 
#include <string.h> 

int main() {
    uint8_t state = 0; 
    char input[10];    
    int room;

    printf("Smart Home\n");
    printf("Wywedi 'on <room>' za da wkluchish swetlina, 'off <room>' za da izkluchish swetlina, 'status' za prowerish swetlinite dali sa izklucheni ili wklucheni, or 'exit' izlizash.\n");

    while (1) {
        printf("\nWywedi: ");
        scanf("%s", input); 

        if (strcmp(input, "on") == 0) { 
            scanf("%d", &room); 

            if (room >= 1 && room <= 8) {
                state |= (1 << (room - 1)); 
                printf("Wkluchena swetlina w staq %d.\n", room);
            } else {
                printf("Newaliden nomer na staq. Wywedi 1-8\n");
            }
        } else if (strcmp(input, "off") == 0) { 
            scanf("%d", &room); 

            if (room >= 1 && room <= 8) {
                state &= ~(1 << (room - 1)); 
                printf("Izkluchena swetlina w staq %d.\n", room);
            } else {
                printf("Newaliden nomer na staq. Wywedi 1-8.\n");
            }
        } else if (strcmp(input, "status") == 0) {
            printf("Swetlinite sa pusnati w stai: ");
            for (int i = 0; i < 8; i++) {
                if (state & (1 << i)) { 
                    printf("%d ", i + 1);
                }
            }
            printf("\n");
        } else if (strcmp(input, "exit") == 0) {
            printf("Dowivdane!\n");
            break;
        } else {
            printf("Invalid command! Use 'on <room>', 'off <room>', 'status', or 'exit'.\n");
        }
    }

    return 0;
}

