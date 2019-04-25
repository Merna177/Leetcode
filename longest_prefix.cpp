class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.size()==0)
           return "";
       if (strs.size()==1)
           return strs[0];
       int min_size = strs[0].size();
       int index=0;
        //get the shortest string to compare it with others 
       for ( int i =1;i<strs.size();i++){
           if(strs[i].size()<min_size)
           {
               min_size=strs[i].size();
               index=i;
           }
       }
       int reached = 0;
       string output="";
       int flag=0;
       //first loop to get all subsequence of string (taking first element,taking first and second...)
       for (int i=0;i<strs[index].size();i++){
       //compare this substring with other strings prefrix
           for(int j=0;j<strs.size();j++){
               //dont compare it by itself
               if(j==index)continue;
               if(strs[index].compare(0,i+1,strs[j],0,i+1)!=0){
                   flag=1;
                   break;
               }
            
           }
           
           if(flag==1){
               break;
           }
           //if all strings matched this prefix add the new character to the longest_prefix string (output)
           else {
               output+=strs[index][i];
           }
       }
       return output;
    }
};
