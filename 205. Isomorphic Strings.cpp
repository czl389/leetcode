class Solution {
public:
    bool isIsomorphic(string s, string t) {
        /*根据一对一映射的特点，我们需要用两个哈希表分别来记录原字符串和目标字符串中字符出现情况，由于ASCII码只有256个字符，所以我们可以用一个256大小的数组来代替哈希表，并初始化为0，我们遍历原字符串，分别从源字符串和目标字符串取出一个字符，然后分别在两个哈希表中查找其值，若不相等，则返回false，若想等，将其值更新为i + 1*/
        //看的网上的答案，因为比较简短，所以采用了。问题的关键在于在两个集合间建立1对1映射，比如set1:a -> set2:b ; set1:b -> set2:c 这样是允许的。
        //我的理解是：下面的做法可以说是"1对1映射"的充分条件，一对位置的字符对应的值相等
        vector<int> hash1(256,0);
        vector<int> hash2(256,0);
        for(int i=0;i<s.size();i++) {
            if(hash1[s[i]]!=hash2[t[i]]) return false;
            else {
                hash1[s[i]]=i+1;
                hash2[t[i]]=i+1;
            }
        }
        return true;
    }
};