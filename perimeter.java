给定由一些正数（代表长度）组成的数组 A，返回由其中三个长度组成的、面积不为零的三角形的最大周长。
如果不能形成任何面积不为零的三角形，返回 0。
示例 1：
输入：[2,1,2]
输出：5

示例 2：
输入：[1,2,1]
输出：0

示例 3：
输入：[3,2,3,4]
输出：10

class Solution {
    public int largestPerimeter(int[] A) {
    if (A.length < 3){ //判断是否大于三个数，否则不能构成三角形
        return 0;
    }
    Arrays.sort(A);//将数组按从大到小排序，先从最大的三个检查，依次往下看连续的三个数是否能构成三角形，如果可以数输出出周长就是最大的
                   //其中不会出现跳跃的情况，那样的话数字之间差值更大,更不能构成三角形
    for (int i = A.length-1; i >=2; i--){
        if ((A[i] + A[i-1] > A[i-2]) && (A[i] + A[i-2] > A[i-1]) && A[i-1] + A[i-2] > A[i])//三角形三条边满足的条件
        return A[i] + A[i-1] + A[i-2];//返回周长
     }   
    
    return 0;
                                         }
        
              }