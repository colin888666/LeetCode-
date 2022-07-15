/*
 * @lc app=leetcode.cn id=844 lang=c
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start

#include <stdbool.h>
int backspace(char *s)
{
    int slow = 0;
    int fast = 0;

    while (fast < strlen(s))
    {
        if (s[fast] != '#')
        {
            s[slow] = s[fast];
            slow++;
        }
        else if (slow > 0)
        {
            slow--;
        }

        fast++;
    }

    return slow;
}

bool backspaceCompare(char *s, char *t)
{

    int slen = backspace(s);
    int tlen = backspace(t);

    if (slen != tlen)
        return false;

    for (int i = 0; i < slen; i++)
    {
        if (s[i] != t[i])
            return false;
    }

    return true;
}
// @lc code=end
