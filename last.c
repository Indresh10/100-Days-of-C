int lengthOfLastWord(char *s)
{
    int cnt = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
            continue;
        else
        {
            while (i >= 0 && s[i] != ' ')
            {
                cnt++;
                i--;
            }
            return cnt;
        }
    }
    return cnt;
}