#include <stdio.h>
#include <unistd.h>


void print(const char* symbol) {
	printf("%s", symbol);
	fflush(stdout);
	printf("%s", "\b");
	usleep(250000);
}

int main(int argc, char* argv[]) {
	while(1) {
		print("\u2803");
		print("\u2809");
		print("\u2818");
		print("\u2830");
		print("\u28a0");
		print("\u28c0");
		print("\u2844");
		print("\u2806");
	};
}
