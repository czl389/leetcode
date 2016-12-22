class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(expandDigits(digits)) {
            digits[0]=1;
            for(int i=1;i<digits.size();i++) {
                digits[i]=0;
            }
            digits.push_back(0);
        }
        else if(digits[digits.size()-1]!=9) {
            digits[digits.size()-1]+=1;
        }
        else{
            int carry=0;
            digits[digits.size()-1]+=1;
            for(int i=digits.size()-1;i!=-1;i--) {
                digits[i]+=carry;
                if(digits[i]==10) {
                    digits[i]=0;
                    carry=1;
                }
                else
                    carry=0;
            }
        }
        return digits;
    }
    //all digits are 9
    bool expandDigits(vector<int> digits) {
        for(auto i:digits) {
            if(i!=9)
                return false;
        }
        return true;
    }
};