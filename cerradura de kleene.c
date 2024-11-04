#include <stdio.h>

int main() {
char a, b;
scanf(" %c %c", &a, &b);

  for (int i = 0; i < 2; i++) { 
    for (int j = 0; j < 2; j++) {
    if (i == 0 && j == 0) {
        printf("%c%c\n", a, a);
} else if (i == 0 && j == 1) {
        printf("%c%c\n", a, b); 
} else if (i == 1 && j == 0) {
        printf("%c%c\n", b, a); 
} else if (i == 1 && j == 1) {
        printf("%c%c\n", b, b); 
}
}
}
printf("%c%c%c%c\n", b, b, a, a);

return 0; 
}
