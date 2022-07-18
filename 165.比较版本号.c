/*
 * @lc app=leetcode.cn id=165 lang=c
 *
 * [165] 比较版本号
 */

// @lc code=start


int compareVersion(char * version1, char * version2){

    int version1_len = 0;
    int version2_len = 0;

    while (version1[version1_len] != '\0')
    {
        version1_len ++;
    }
    
    while (version2[version2_len] != '\0')
    {
        version2_len ++;
    }
    
    int i = 0, j = 0;

    while (i < version1_len || j < version2_len)
    {
        int a = 0;
        int b = 0;

        while (i < version1_len  && version1[i] != '.')
        {
            a = a * 10 + (version1[i] - '0');
            i++;
        }
        i++;

        while (j < version2_len && version2[j] != '.')
        {
            b = b * 10 + (version2[j] - '0');
            j++;
        }
        j++;

        if (a != b)
            return a > b ? 1 : -1;
    }
    
    return 0;
}
// @lc code=end

