class Solution {
public:
    double myPow(double x, int n) {
        long long temp = n;
        if (temp < 0)
        {
            x = 1/x;
            temp = (-1) * (temp);
        }
        if (temp ==0)
            return 1;
        double temp2 = myPow(x,temp/2);
        if (temp%2 ==0)
            return temp2*temp2;
        else 
            return x*temp2*temp2;
};
};