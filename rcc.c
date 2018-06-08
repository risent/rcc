#include <stdio.h>

void rcc_parse(char *filename)
{
        int c;
        FILE *file = fopen(filename, "r");
        if (file) {
                while ((c = getc(file)) != EOF)
                        putchar(c);
                fclose(file);
        } else {
                fprintf(stderr, "File: <%s> does not exists\n", filename);
        }

}

int main(int argc, char **argv)
{
	printf("%s\n", "Hello RCC!");
	for (int i = 0; i < argc; i++) {
		printf("%s\n", *(argv + i));
	}

        if (argc > 1)
                rcc_parse(argv[1]);

	return 0;
}
