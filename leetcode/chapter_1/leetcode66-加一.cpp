//https://leetcode.cn/problems/plus-one/
int *plusOne(int *digits, int digitsSize, int *returnSize){
    //从最后一位往前看
    for(int i=digitsSize-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]+=1; //就把这位加一
            *returnSize =digitsSize; //直接跑路，不要去看倒数第二位
            return digits;
        }else{
            digits[i]=0; //如果是9就变成0
        }
    }
// 能走出循环，说明原本全都是 9（比如 999 变成了 000）
    // 只需要新建一个多一位的数组，首位填 1，后面全是 0（比如 1000）
    *returnSize=digitsSize+1;
    int* res =(int*)malloc(sizeof(int)*(*returnSize));  //这句老是打错
    res[0]=1;
    for(int i=1;i<*returnSize;i++){
        res[i]=0;   
        }
    return res; 
}
