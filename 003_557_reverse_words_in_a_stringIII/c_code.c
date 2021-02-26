
void swap(long long unsigned addra, long long unsigned addrb){
   *(char*)addra ^= *(char*)addrb;
   *(char*)addrb ^= *(char*)addra; 
   *(char*)addra ^= *(char*)addrb; 
}

char * reverseWords(char * s){
    unsigned word_len, string_len;
    char *word_beg = s;
    char *ptr = s;
    
    string_len = strlen(ptr);
    
	for(int i = 0; i < string_len; i++, ptr++) {
        if (*ptr == 0x20) {
            word_len = ptr - word_beg;
            for (int j = 0; j < word_len/2; j++) {
                swap(word_beg+j, word_beg+word_len-j-1);
            }
            word_beg = ptr + 1;
        }
	}
    word_len = ptr - word_beg;
    for (int j = 0; j < word_len/2; j++) {
        swap(word_beg+j, word_beg+word_len-j-1);
    }
    return s;
}