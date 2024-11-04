#include <stdio.h>
#include <arpa/inet.h>

int main()
{
	unsigned int x = 0x12345678;
	unsigned char *p = (unsigned char *) &x;
	
	if (htonl(0) == 0){
		printf("El host es little endian.\n");
	}else{
		printf("El host es big endian.\n");
	}
	printf("El valor 0x%x en el orden de los bytes del host es:  0x%x 0x%x 0x%x 0x%x\n", x, p[0], p[1], p[2], p[3]);
	return 0;
}



