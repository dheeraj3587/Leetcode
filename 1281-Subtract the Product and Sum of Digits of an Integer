class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,digit=0;
        int sum;
        while(n!=0){
            digit=n%10;
            product=digit*product;
            sum=sum+digit;
            n=n/10;
        }
        return(product-sum);
        
    }
};
