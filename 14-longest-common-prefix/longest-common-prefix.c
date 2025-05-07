char* longestCommonPrefix(char** strs, int strsSize) {
    unsigned int str_idx = 0;
    unsigned int char_idx = 0;
    char c;

    if(strsSize > 1)
    {
        while( c = strs[0][char_idx])
        {
            for( str_idx = 1 ; str_idx < strsSize ; str_idx++)
            {
                if(c != strs[str_idx][char_idx])
                {
                    strs[0][char_idx] = 0;
                    break;
                }
            }

            if(str_idx != strsSize)
            {
                break;
            }

            char_idx++;

        }
        
    }

    return strs[0];
}