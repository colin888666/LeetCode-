/*
 * @lc app=leetcode.cn id=76 lang=c
 *
 * [76] 最小覆盖子串
 */

// @lc code=start

char *minWindow(char *s, char *t)
{

    int map[256] = {0}; // 用map[]统计字符串t中各字母的个数
    int sublength = 0;
    int result = __INT_MAX__;
    int start = 0;
    int slen = strlen(s);
    int tlen = strlen(t); //用tlen统计还未找到的字符串t中字母的个数

    // 统计字符串t中各字母的个数
    for (int i = 0; i < tlen; i++)
    {
        map[t[i]]++;
    }

    for (int left = 0, right = 0; right < slen; right++)
    {
        // s中每个字母对应的哈希表-1
        if (map[s[right]]-- > 0)
            // 若是对应字符串t的字母，则更新tlen的值
            tlen--;

        while (tlen == 0) // 出现匹配的字符串
        {
            sublength = right - left + 1;

            if (sublength < result)
            {
                start = left;
                result = sublength;
            }

            if (++map[s[left]] > 0)
                tlen++;

            left++;
        }
    }

    if (result != __INT_MAX__)
    {
        char *res = (char *)malloc(sizeof(char) * (result + 1));
        *res = '\0';
        strncat(res, s + start, result);
        return res;
    }
    return "";
}
// @lc code=end
