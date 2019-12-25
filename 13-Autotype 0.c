/*给你一个长度固定的整数数组 arr，请你将该数组中出现的每个零都复写一遍，并将其余的元素向右平移。
注意：请不要在超过该数组长度的位置写入元素。
要求：请对输入的数组 就地 进行上述修改，不要从函数返回任何东西。
示例 1：
输入：[1,0,2,3,0,4,5,0]
输出：null
解释：调用函数后，输入的数组将被修改为：[1,0,0,2,3,0,0,4]
*/
void duplicateZeros(int* arr, int arrSize){
void duplicateZeros(int* arr, int arrSize){
    int i;
    int j;
    
    for(i = 0; i < arrSize; i++) {//从数组第一位开始扫描
        if(arr[i] == 0) {//当该位数字是零时
            for(j = arrSize - 1; j > i; j--) {//就将零及其右面的数字都往后挪一位
                arr[j] = arr[j - 1];             
            }
            i++;            
        }
    }
}
}
}
}