/*在柠檬水摊上，每一杯柠檬水的售价为5美元。
顾客排队购买你的产品，（按账单 bills 支付的顺序）一次购买一杯。
每位顾客只买一杯柠檬水，然后向你付 5 美元、10 美元或 20 美元。你必须给每个顾客正确找零，也就是说净交易是每位顾客向你支付 5 美元。
注意，一开始你手头没有任何零钱。
如果你能给每位顾客正确找零，返回 true ，否则返回 false 。
示例 1：
输入：[5,5,5,10,20]
输出：true
解释：
前 3 位顾客那里，我们按顺序收取 3 张 5 美元的钞票。
第 4 位顾客那里，我们收取一张 10 美元的钞票，并返还 5 美元。
第 5 位顾客那里，我们找还一张 10 美元的钞票和一张 5 美元的钞票。
由于所有客户都得到了正确的找零，所以我们输出 true。*/

class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five = 0, ten = 0;
        for (int bill: bills) { //从数组bills中依次取出元素赋值给整形变量bill，循环执行for中语句
            if (bill == 5)
                five++;         //5元不需要找零
            else if (bill == 10) {
                if (five == 0) return false;  //10元找零一张5元，如果没有5元，不能正确找零，返回false
                five--;
                ten++;
            } else {
                if (five > 0 && ten > 0) {   // 20元的情况下，可以找零一张5元一张10元
                    five--;
                    ten--;
                } else if (five >= 3) {      //也可以找零三张5元
                    five -= 3;
                } else {
                    return false;            //不能正确找零，返回false
                }
            }
        }

        return true;                        //能给每位顾客正确找零，返回true
    }
}
