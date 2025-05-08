int strStr(char* haystack, char* needle) {

    int found = -1;
    unsigned int i,j,temp;

    for(i = 0 ; i < strlen(haystack); i++)
    {
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