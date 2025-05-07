#define FALSE ((bool)0u)
#define TRUE  ((bool)1u)

bool isValid(char* s) {
    bool ret_val = FALSE;
    unsigned int length_of_string = strlen(s);
    char *replica_arr = malloc((length_of_string/2) * sizeof(char));

    unsigned int i, j = 0;

    for(i = 0 ; i < length_of_string ; i++)
    {
        if((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
        {
            /* Open bracket */
            if(j < (length_of_string/2))
            {
                replica_arr[j++] = s[i];
            }
            else
            {
                /* wrong value */
                break;
            }
        }
        else
        {
            /* Close bracket */
            if(j > 0)
            {
                j--;
                if(((s[i] == ')') && (replica_arr[j] == '(')) || \
                   ((s[i] == '}') && (replica_arr[j] == '{')) || \
                   ((s[i] == ']') && (replica_arr[j] == '[')) )
                {
                    /* correct value */ 
                }
                else
                {
                    /* wrong value */
                    break;
                }
            }
            else
            {
                /* No entries yet */
                break;
            }
               
        }
    }

    if((i == length_of_string) && (j == 0))
    {
       ret_val = TRUE; 
    }

    return ret_val;
}