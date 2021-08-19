//(4)Race condition among parent and child processes

#include<stdio.h>
#include<unistd.h>

void sb(char* str) {
	setbuf(stdout, NULL);
	for (int i = 0; str[i] != '\0'; i++) printf("%c", str[i]);
}

int main() {
	pid_t pid = fork();

	if (pid < 0) return -1;
	if (pid) sb("parent parent parent parent");
	else sb("child child child child child");
}
