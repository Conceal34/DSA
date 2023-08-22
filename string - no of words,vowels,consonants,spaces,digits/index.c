#include <stdio.h>
#include <String.h>

int noOfDigit(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
        {
            count++;
        }
    }
    return count;
}

int noOfWords(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    return count + 1;
}

int noOfSpace(char string[])
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

void vowelsAndConsonants(char string[])
{
    int vowel = 0, consonant = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            vowel++;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            consonant++;
        }
    }
    printf("the no of vowels: %d \n the no of consonants: %d \n", vowel, consonant);
}

int main()
{
    char str[50];
    puts("input the  string:");
    fgets(str, 100, stdin);
    vowelsAndConsonants(str);
    printf("the no of \n digits: %d \n words: %d \n spaces: %d", noOfDigit(str), noOfWords(str), noOfSpace(str));
}