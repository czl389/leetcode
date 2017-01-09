class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        int cows=0;
        //get bulls
        for(int i=0;i<secret.size();i++) {
            if(secret[i]==guess[i]) {
                secret.erase(i,1);
                guess.erase(i,1);
                bulls++;
                i--;
            }
        }
        //get cows
        for(int i=0;i<secret.size();i++) {
            for(int j=0;j<guess.size();j++) {
                if(secret[i]==guess[j]) {
                    guess.erase(j,1);
                    cows++;
                    break;
                    
                }
            }
        }
        //generate string
        string result{};
        result.append(to_string(bulls));
        result.push_back('A');
        result.append(to_string(cows));
        result.push_back('B');
        return result;
    }
};