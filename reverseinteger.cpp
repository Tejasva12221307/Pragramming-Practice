class Solution {
    public:
        int reverse(int x) {
          int revnum =0;
           while(x != 0){
            int digit = x % 10;
            if(revnum>INT_MAX/10 || revnum<INT_MIN/10){
                return 0;
            }
            revnum = (revnum *10) + digit;
            x= x/10;
           }
           return revnum;
        }
    };