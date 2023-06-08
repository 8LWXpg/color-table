#include <stdio.h>

int main() {
	for (int i = 40; i <= 47; i++) {
		printf("\t  %dm  ", i);
	}
	puts("");
	for (int i = 30; i <= 37; i++) {
		printf("%dm\t", i);
		for (int j = 40; j <= 47; j++) {
			printf("\e[%d;%dm  gYw  \e[0m\t", i, j);
		}
		puts("");
	}
	puts("");
	for (int i = 100; i <= 107; i++) {
		printf("\t  %dm ", i);
	}
	puts("");
	for (int i = 90; i <= 97; i++) {
		printf("%dm\t", i);
		for (int j = 100; j <= 107; j++) {
			printf("\e[%d;%dm  gYw  \e[0m\t", i, j);
		}
		puts("");
	}
	return 0;
}
