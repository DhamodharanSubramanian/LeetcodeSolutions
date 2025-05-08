int strStr(char* haystack, char* needle) {

    int found = -1;
    int i,j,temp;

    for(i = 0 ; (strlen(haystack) - i) >= strlen(needle) ; i++)
    {

        printf("i = %d\n", i);
        printf("strlen(haystack) = %d\n", strlen(haystack));
        printf("strlen(needle) = %d\n", strlen(needle));
        printf("(strlen(haystack) - strlen(needle)) = %d\n", (strlen(haystack) - strlen(needle)));

        temp = i;

        for(j = 0 ; j < strlen(needle) ; j++, temp++)
        {
            if(haystack[temp] != needle[j])
            {
                break;
            }
        }

        if(j == strlen(needle))
        {
            found = i;
            break;
        }
    }

    return found;
    
}