#include <stdio.h>

// upper case start from 65-90
// lower case start from 97-122

int main(int argc, char const *argv[])
{
    int v = 97-65, char_limit = 200, key;
    char message[char_limit], message_upper[char_limit], message_coded[char_limit];

    printf("Please enter your message: ");
    fgets(message, char_limit, stdin);

    printf("please specify key to displace ( Between 2 - 5 ): ");
    scanf("%d", &key);

    printf("your message is : %s", message);

    for (int i = 0; i < char_limit; i++){
        // converted message to upper Case
        if (message[i] == '\n')
        {
            message_upper[i] = '\0';
            break;
        }
        if (message[i] >= 97 && message[i] <= 122)
        {
            message_upper[i] = message[i] - v;
        } else
        {
            message_upper[i] = message[i];
        }
        
    }

    for (int i = 0; i < char_limit; i++)
    {
        if (message_upper [i] == '\0') break;

        if (message_upper[i] >= 65 && message_upper[i] <= 90)
        {
            message_coded[i] = message_upper[i] + key;
            if (message_coded[i] > 90) 
            {
                message_coded[i] = message_coded[i] - 26;
            }
        } else
        {
            message_coded[i] = message_upper[i];
        }
        
    }

    printf("your message after converted to uppercase : %s\n", message_upper);
    printf("your message after encryption is : %s\n", message_coded);

    return 0;
}

