#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	FILE* PASS = fopen("pass.dat", "wb+");
	char password[30][32];
	char characters[] = {"\\!@#$%^&*()_+`~1234567890-=qwertyuiop[]QWERTYUIOP{}|asdfghkl;'ASDFGHJKL:zxcvbnm,./ZXCVBNM<>?"};

	srand((unsigned int)time(0));

	for (int i = 0; i < 30; ++i) {
		for (int j = 0; j < 31; ++j) {
			password[i][j] = characters[rand() % 91];
		}
		password[i][31] = 0;
		fputs(password[i], PASS);
		fputs("\n", PASS);
	}

	fclose(PASS);
	return 0;
}
