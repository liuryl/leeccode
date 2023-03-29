#include <iostream>
#include <vector>

//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}


class Solution {
    void backtrack(std::vector<string> &result,string &str,int left,int right,int n)
    {
        if(str.size()==n*2)
        {
            result.push_back(str);
            return;
        }
        if(left<n)
        {
            str.push_back('(');//将一个元素添加到vector后面，类似于oython的append

            backtrack(result,str,left+1,right,n);
            str.pop_back();//删除字符串最后一个字符
        }
        if(right<left)
        {
            str.push_back(')');
            backtrack(result,str,left,right+1,n);
            str.pop_back();
        }
    }
public:
    std::vector<string> generateParenthesis(int n) {
        std::vector<string> result;
        string current;
        backtrack(result,current,0,0,n);
        return result;
    }
};