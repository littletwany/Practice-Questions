/*给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
你可以假设数组中无重复元素。
示例 1:
输入: [1,3,5,6], 5
输出: 2

示例 2:
输入: [1,3,5,6], 2
输出: 1*/

int searchInsert(int* nums, int numsSize, int target){
    
    int low = 0;
    int high = numsSize-1;
    int mid;
    while(low <= high){
        mid =low + ( ( high - low ) >> 1 ); //先从数组最后一位即最大值开始比较
        if(nums[mid] == target) {  //如果该位等于目标值，则输出位置
            return mid;
        }
else if(target < nums[mid]){ //如果目标值小于该位，证明要往该位的前一位移动，位置减小1
            low = mid-1;
        }else if(target > nums[mid]){//如果目标值大于该位，证明要往该位的后一位移动，位置增加1

            high = mid+1;
        }
    }
//跳出循环，证明数组中没有目标值
    if(target <nums[mid]){//如果目标值小于该位，说明要将目标值插在该位的前一位，即在数组中的位置是取代了该位，输出mid的值即可
        return mid;
    }else{
        return mid+1;//如果目标值大于该位，说明要将目标值插在该位的后一位，即在数组中的位置是mid+1
    }
}
