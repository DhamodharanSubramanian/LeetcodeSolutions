#define FALSE ((bool) 0u)
#define TRUE ((bool) 1u)

int lengthOfLastWord(char* s) {
    unsigned int length = strlen(s);
    int i;
    bool word_found = FALSE;

    int count = 0;

    for ( i = length-1 ; i >= 0 ; i--)
    {
        if(word_found == FALSE)
        {
            if(s[i] != ' ')
                word_found = TRUE;
        }
        
        if(word_found == TRUE)
        {
            if(s[i] == ' ')
            break;

            count++;
        }
    }
    
    return count;
}