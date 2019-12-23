/*假设你有一个很长的花坛，一部分地块种植了花，另一部分却没有。可是，花卉不能种植在相邻的地块上，它们会争夺水源，两者都会死去。
给定一个花坛（表示为一个数组包含0和1，其中0表示没种植花，1表示种植了花），和一个数 n 。能否在不打破种植规则的情况下种入 n 朵花？能则返回True，不能则返回False。
示例 1:
输入: flowerbed = [1,0,0,0,1], n = 1
输出: True

示例 2:
输入: flowerbed = [1,0,0,0,1], n = 2
输出: False*/
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int count = 0；
    if (flowerbedSize < 1)
         return flase;//没有花坛
    if (flowerbedSize == 1 && n <= 1 && flowerbed[0] == 0)
         return true;//如果花坛只有一部分，这部分没有种花，并且要求种花的数目为1，返回true
     
      for (int i = 0; i < flowerbedSize; i++){
           if (i == 0){//如果第二部分没种花，那么第一部分种花
               if(flowered[i+1] == 0){
                   count++;
                   flowerbed[i] = 1;
               }
           }
            else if(i == (flowerbedSize - 1)){//最后一部分是否种花只看它的前一部分有没有种花
                if(flowerbed[i-1] == 0){
                    count++
                    flowerbed[i] = 1;
                }
            }
            else if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){//剩下的中间部分，如果前后都没有种花，那么这部分种花
                count++;
                flowerbed[i] = 1;
            }
       }
       if(count >= n)
           return true;
        return false;
}
