/*题目：给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。

所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。

示例 1：
输入：address = "1.1.1.1"
输出："1[.]1[.]1[.]1"

示例 2：
输入：address = "255.100.50.0"
输出："255[.]100[.]50[.]0"*/


char * defangIPaddr(char * address){
    int len = strlen(address); // 计算字符串的长度
    char* ret = (char*)malloc(len + 6 + 1);//动态分配内存空间
                                           //最长的IP地址长度为xxx.xxx.xxx.xxx,无效之后最多多中括号的六位加字符串结束符

    int j = 0;
    for (int i=0; i<len; i++) { //从字符串的第一位开始
        if (address[i] == '.') {//如果该位是 . 的话
            ret[j++] = '[';    // 那么j[0]= [   j[1]= .  j[2]= ]
            ret[j++] = '.';
            ret[j++] = ']';     // 执行完上述三步即可以将小数点替换成[.]
            continue;
        }
        ret[j++] = address[i];  // j[4]= 该小数点后的第一位，j[5]= 该小数点后的第二位.....依次替换
            }

    ret[j] = '\0';   //最后一位终止位

    return ret;  
}
