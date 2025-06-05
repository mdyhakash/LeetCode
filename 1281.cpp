// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {

        int prod=1;
        int sum=0;
        int rem;

        while(n!=0){
            rem=n%10;
            sum=sum+rem;
            prod=prod*rem;

            
            n=n/10;

        }
        int result= prod - sum;
        return result;


        
    }


};