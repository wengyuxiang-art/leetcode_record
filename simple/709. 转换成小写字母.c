char* toLowerCase(char* s) {
    int len = strlen(s);
    
    for (int i=0; i<len; i++){
        
        // 小写tolower；大写toupper
        s[i] = tolower(s[i]);
        
    }
    return s;

}