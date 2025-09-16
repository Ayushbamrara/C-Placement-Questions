#include<stdio.h>
int main(){
    union a {
        short int i;
        char ch[2];
    };
    union a u;
    u.ch[0] = 3;
    u.ch[1] = 2;
    printf("%d %d %d", u.ch[0], u.ch[1], u.i);
    return 0;
}

// 3 2 515

/* How does u.i interpret this?

u.i is a short int (2 bytes).
It reads both bytes together.
But how these bytes are combined depends on the system’s endianness:
1.Little Endian (most common, e.g., Intel PCs):
    Lower byte = stored first (ch[0] = 3)
    Higher byte = stored second (ch[1] = 2)
    1 byte = 8 bits by this of 2 byte we got 2^8 = 256
    So u.i = (2 × 256) + 3 = 515 
    
2.Big Endian (rare):
    Higher byte = stored first (ch[0] = 3)
    Lower byte = stored second (ch[1] = 2)
    So u.i = (3 × 256) + 2 = 770 */