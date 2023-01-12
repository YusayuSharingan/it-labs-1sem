#include <stdio.h>
#define NUM_BYTES 4

typedef unsigned int byte;

void reverse_bytes(byte bytes[NUM_BYTES]) {
byte num, new_num, varbit;
int i;
new_num = 0;

for (i = 0; i < NUM_BYTES; i++) {
num = bytes[i];
new_num = 0;

int j;

for (j = 0; j < 8; j++) {
varbit = num % 2;
num >>= 1;
new_num = (new_num << 1) + varbit;
}
bytes[i] = new_num;
}
}

int main() {
int number;
scanf("%d", &number);

byte bytes[NUM_BYTES];

int i;
for (i = 0; i < NUM_BYTES; i++) {
bytes[i] = 255 & (number >> (i * 8));
}

reverse_bytes(bytes);

number = 0;

for (i = 0; i < NUM_BYTES; i++) {
number |= bytes[i] << (i * 8);
}

printf("%d", number);

}
