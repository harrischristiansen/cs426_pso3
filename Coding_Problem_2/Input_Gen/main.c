#include <stdio.h>
#include <unistd.h>



int main(int argc, char* argv[]){
	int i;
	FILE *const out = fdopen(fileno(stdout), "wb");
	int address = ?;
	int count = ?;
	for(i = 0; i < count; i++)
		write(fileno(out), &address, 4);
	
}
