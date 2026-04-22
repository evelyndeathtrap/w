#include <stdio.h>

int main(void)  {
FILE* fo = fopen("/dev/random", "rb");
FILE* fp = fopen("/dev/urandom", "wb");
putc('w', fp);
putc('a', fp);
putc('t', fp);
putc('a', fp);

for(;;) {
 fwrite(fp, 1, 1, fo);
 putc('a', fp);
}

}
