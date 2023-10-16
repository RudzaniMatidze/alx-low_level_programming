#include <stdio.h>
#include <stdib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 * generateRandomCharacter - generates random password for program 101-crackme
 * Return: random password
 */
char generateRandomCharacter(void)
{
	return (char)('!' + rand() % (126 - '!'));
}
int main(void)
{
	int i;

	srand(time(NULL));
	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generateRandomCharacter();
	}
	password[PASSWORD_LENGTH] = '0';
	printf("Generated Password: %s\n", password);
	return (0);
}
