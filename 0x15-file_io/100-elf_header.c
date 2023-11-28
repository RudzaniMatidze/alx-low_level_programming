#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void print_pntr(char *pntr);
void print_typess(char *pntr);
void print_os_abi(char *pntr);
void print_vrsion(char *pntr);
void print_dt(char *pntr);
int chck_elf(char *pntr);
void print_mgic(char *pntr);
void chck_systm(char *pntr);
int main(int arc, char *arv[]);

/**
 * print_pntr - prints the address
 * @magc: magic number
 * Return: does not return
 */
void print_pntr(char *pntr)
{
	int mc;
	int go;
	char systm;

	printf("  Entry point address:               0x");

	systm = pntr[4] + '0';
	if (systm == '1')
	{
		go = 26;
		printf("80");
		for (mc = go; mc >= 22; mc--)
		{
			if (pntr[mc] > 0)
				printf("%x", pntr[mc]);
			else if (pntr[mc] < 0)
				printf("%x", 256 + pntr[mc]);
		}
		if (pntr[7] == 6)
			printf("00");
	}
	if (systm == '2')
	{
		go = 26;
		for (mc = go; mc > 23; mc--)
		{
			if (pntr[mc] >= 0)
				printf("%02x", pntr[mc]);
			else if (pntr[mc] < 0)
				printf("%02x", 256 + pntr[mc]);
		}
	}
	printf("\n");
}

/**
 * print_typess - prints type
 * @pntr: magic number
 * Return: does not return
 */
void print_typess(char *pntr)
{
	char typess = pntr[16];

	if (pntr[5] == 1)
		typess = pntr[16];
	else
		typess = pntr[17];

	printf("  Type:                              ");
	if (typess == 0)
		printf("NONE (no file type)\n");
	else if (typess == 1)
		printf("REL (relocatable file)\n");
	else if (typess == 2)
		printf("EXEC (executable file)\n");
	else if (typess == 3)
		printf("DYN (shares object file)\n");
	else if (typess == 4)
		printf(" CORE (core file)\n");
	else
		printf("<unknown: %x>\n", typess);
}

/**
 * print_os_abi- prints OS/ABI
 * @pntr: magic number
 * Return:does not return
 */
void print_os_abi(char *pntr)
{
	char os_abi = pntr[7];

	printf("  OS/ABI:                            ");
	if  (os_abi == 0)
		printf("UNIX - System V\n");
	else if (os_abi == 2)
		printf("UNIX - NetBSD\n");
	else if (os_abi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", os_abi);

	printf("  ABI Version:                       %d\n", pntr[8]);
}

/**
 * print_vrsion - prints version
 * @pntr: magic number
 * Return: does not return
 */
void print_vrsion(char *pntr)
{
	int vrsion = pntr[6];

	printf("  Version:                           %d", vrsion);
	if (vrsion == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * print_dt - prints data
 * @pntr: magic number
 * Return:does not return
 */
void print_dt(char *pntr)
{
	char dt = pntr[5];

	printf("  Data:                              2's complement");
	if (dt == 1)
		printf(", little endian\n");
	if (dt == 2)
		printf(", big endian\n");
}

/**
 * chck_elf - check if it's an elf file
 * @pntr: magic number
 * Return: 1 if success, 0 if not
 */
int chck_elf(char *pntr)
{
	int addrss = (int)pntr[0];
	char E = pntr[1];
	char L = pntr[2];
	char F = pntr[3];

	if (addrss == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * print_mgic - prints magic info
 * @pntr: magic number
 * Return: no return
 */
void print_mgic(char *pntr)
{
	int bt;

	printf("  Magic:  ");
	for (bt = 0; bt < 16; bt++)
		printf(" %02x", pntr[bt]);

	printf("\n");
}

/**
 * chck_systm - checks system version
 * @pntr: magic number
 * Return: does not return
 */
void chck_systm(char *pntr)
{
	char systm = pntr[4] + '0';

	if (systm == '0')
		exit(98);

	printf("ELF Hader:\n");
	print_mgic(pntr);

	if (systm == '1')
		printf("  Class:                             ELF32\n");
	if (systm == '2')
		printf("  Class:                             ELF64\n");

	print_dt(pntr);
	print_vrsion(pntr);
	print_os_abi(pntr);
	print_typess(pntr);
	print_pntr(pntr);
}

/**
 * main - check the code
 * @arc: argument count
 * @arv: argument vector
 * Return: 0 (success)
 */
int main(int arc, char *arv[])
{
	int fld, ret_rd;
	char pntr[27];

	if (arc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fld = open(arv[1], O_RDONLY);
	if (fld < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(fld, 0, SEEK_SET);
	ret_rd = read(fld, pntr, 27);

	if (ret_rd == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!chck_elf(pntr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	chck_systm(pntr);
	close(fld);

	return (0);
}
