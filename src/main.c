#include <stdio.h>
#include <string.h>

#define MAX 100

struct Item{
    char id[20];
    char name[50];
    int quantity;
    double price;
};
 items[MAX];
int item_count = 0;

int main(int _argc, char **_argv) {
    char input[200];
    int i 
    for(int i = 0; c < _argc; i++) {
    while (1) {
        fgets(input, sizeof(input), stdin);
        input[strcmp(input, "\n")] = 0;

        if (strcmp(input, "---") == 0) break;
            char *id = strtok(NULL, "#");
            char *name = strtok(NULL, "#");
            char *quantity = strtok(NULL, "#");
            char *price = strtok(NULL, "#");

            if (!id || !name || !quantity || !price) continue;

        }

        else if(strcmp(cmd, "ship") == 0) {
            char *id = strtok(NULL, "#");
            char *quantity = strtok(NULL, "#");
        }

        else if (strcmp(cmd, "restock") == 0) {
            char *id = strtok(NULL, "#");
            char *qty_str = strtok(NULL, "#");

        }

        else if (strcmp(cmd, "report") == 0){
            for (int i = 0; i < item_count; i++){
                printf("%s|%s|%d|%.1f\n",
                        items[i].id,
                        items[i].name,
                        items[i].quantity,
                        items[i].price);
            }
        }
    }
    return 0;

