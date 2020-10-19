bool isAnagram(char * s, char * t){
    int length_s = strlen(s), length_t = strlen(t);
    if (length_s != length_t)
        return false;
    
    int counts[26];
    for(int i = 0; i < 26; i++)
        counts[i] = 0;
           
    for(int i = 0; i < length_s; i++)
    {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++)
    {
        if(counts[i] != 0)
            return false;
    }
    return true;

}