/*
 * 
 * It aint pretty but it works -ultros.
 * 
 * Streefighter alpha max umd_data.bin
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ULUS-10062|416C3502ED1D1365|0001|G.............|

unsigned char umd_data_bin[48]={ 
	0x55,0x4C,0x55,0x53,
	0x2D,0x31,0x30,0x30,
	0x36,0x32,0x7C,0x34,
	0x31,0x36,0x43,0x33,
	0x35,0x30,0x32,0x45,
	0x44,0x31,0x44,0x31,
	0x33,0x36,0x35,0x7C,
	0x30,0x30,0x30,0x31,
	0x7C,0x47,0x00,0x00,
	0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x7C,
};

int main(int argc, char **argv){
	
	if(argc < 2){
		printf("%s <id>\r\n", argv[0]);
		return 0;
	}
	
	memcpy(&umd_data_bin[0], argv[1], 10*sizeof(unsigned char));
	
	//printf("%s", umd_data_bin);
	FILE *fd = fopen("UMD_DATA.BIN", "w");
	fwrite(umd_data_bin, sizeof(unsigned char), 48, fd);
	fclose(fd);
	
	return 0;
}
