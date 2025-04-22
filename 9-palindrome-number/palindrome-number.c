

bool isPalindrome(int x) {
    bool ret_val = 0;
    unsigned int reverse_number = 0, temp = x;
    
    if(x >=0)
    {
        while(x)
        {
            reverse_number = (reverse_number * 10) + (x % 10);
            x /= 10;
        }
        

        if(temp == reverse_number)
            ret_val = 1;
    }
    
    return ret_val;
}