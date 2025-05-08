int strStr(char* haystack, char* needle) {

    int found = -1;
    int i,j,temp;

    for(i = 0 ; i <= (strlen(haystack) - strlen(needle)) ; i++)
    {
        if((strlen(haystack) - i) <  strlen(needle))
        {
            break;
        }

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