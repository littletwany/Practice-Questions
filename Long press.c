/*你的朋友正在使用键盘输入他的名字 name。偶尔，在键入字符c时，按键可能会被长按，而字符可能被输入 1 次或多次。
你将会检查键盘输入的字符 typed。如果它对应的可能是你的朋友的名字（其中一些字符可能被长按），那么就返回 True。

示例 1：
输入：name = "alex", typed = "aaleex"
输出：true
解释：'alex' 中的 'a' 和 'e' 被长按。

示例 2：
输入：name = "saeed", typed = "ssaaedd"
输出：false
解释：'e' 一定需要被键入两次，但在 typed 的输出中不是这样。

示例 3：
输入：name = "leelee", typed = "lleeelee"
输出：true
*/
bool isLongPressedName(char * name, char * typed){

while( '\0' != *name && '\0' != *typed)
{
    if(*name == *typed)  name++,typed++;//判断名字中的一个字母是否等于键入的相应的字母，如果等于就接着比较下一位
    else typed++;     //如果不等于，看该位是否等于键入的下一位，判断有没有长按
} 
if('\0' == *name)   return true;   //字符数组结束，证明键入的字母都能与名字对应，返回true

return false;  
}
