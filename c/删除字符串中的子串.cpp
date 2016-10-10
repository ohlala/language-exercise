#include <stdio.h>

#include <string.h>

#define STRING_SIZE 80

void delete_substr(const char *str, const char *substr, char *resultstr) {

    int i, j;

    unsigned long substrlen, resultstrlen;

    char *p;

substrlen = strlen(substr);

    strcpy(resultstr, str);

    resultstrlen = strlen(resultstr);

    p = strstr(resultstr, substr);

while(p != NULL) {

        for(i = 0; i < substrlen; i++) {

            for(j = (p - resultstr) + substrlen - i; j < resultstrlen; j++){

                resultstr[j - substrlen] = resultstr[j];

            }
               resultstrlen=resultstrlen-substrlen;

               resultstr[resultstrlen] = '\0';
        }

        p = strstr(resultstr, substr);

    }

}

int main(void)

{

    char str[STRING_SIZE + 1], substr[STRING_SIZE + 1], resultstr[STRING_SIZE + 1];

    scanf("%s", str);

    scanf("%s", substr);

    delete_substr(str, substr, resultstr);

    printf("%s\n", resultstr);

    return 0;

}
