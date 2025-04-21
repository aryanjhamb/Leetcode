class Solution {
public:
    int hIndex(vector<int>& c) {
       int count = 0 ; 
       sort(c.rbegin(),c.rend());
       for(int i = 0 ;  i <c.size() ; i++)
       {
        if(c[i]>=i+1)
        count++;
       } 
       return count;
    }
};