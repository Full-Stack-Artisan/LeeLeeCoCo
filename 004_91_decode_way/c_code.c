bool mappingCheck (char* str){
    unsigned val;
    
    //Get 2 charaters and transform to unsigned integer.
    val = 10 * (*str - 0x30) + (*(str+1) - 0x30);
    
    //Check whether the value can be mapped.  e.g. 30 is not in the map, "06" will become 6, but it is invalid.
    if (val <= 26 && val >= 10)
        return true;

    return false;
}

int getPosSol (char *s) {
    //If there's a "0" in string, abort the branch immediately.
    if (*s == 0x30)
        return 0;
    
    //Check whether we reach the end of string.
    if (*s && *(s+1)){       
        if (mappingCheck(s))
            return getPosSol(s+1) + getPosSol(s+2);
        return getPosSol(s+1);
    }   
    
    //Run till the end successfully, it means that this solution is valid.
    return 1;
}    

int getDp (char *s) {
    const unsigned string_len = strlen(s);
    int array[string_len+1];
    
    array[0] = 1;
    array[1] = 1;
    
    //Check whether the first charater is "0", if yes, directly return.
    if (*s == 0x30)
        return 0;
    
    //We don't need to check 0 and 1, so start from string size 2 to string size.
    for(int i = 2; i <= string_len; i++, s++) {
        //Check whether the charater after current one is "0". e.g. "60", cuurent charater is "6".
        if (*(s+1) == 0x30)  
            //Check whether current charater is greater than "2" or equal to "0".
            if (*s > 0x32 || *s == 0x30)
                return 0;
            //In this situation, these two charaters should be treated as one. e.g. "1220", "12"->2,
            //"122"->3, "1220", where "20" can't be seperated, so the possible solutions should be the same with "12".
            else{
                array[i] = array[i-2];
                continue;
            }
        //Check whether the two charaters can be treated as one.
        if (mappingCheck(s))
            array[i] = array[i-1] + array[i-2];
        else
            array[i] = array[i-1];
    }
    
    return array[string_len];
}

int numDecodings(char * s){
    //This is a recursive solition, takes too long to finish all tests. Just provide here for reference.
    //return getPosSol(s); 
    
    //This is a iterative solution, DP based and can run through all tests on time.
    return getDp(s);
}