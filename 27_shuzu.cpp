//
// Created by 刘日一郎 on 2023/4/1.
//
#include <stdio.h>
#include "iostream"
#include "string"
#include "array"
#include <vector>

int main()
{
    int nums[] = {3,2,2,3};

    int val=0;
    std::cin>>val;
    std::cout<<"the value is : "<<val<<std::endl;

    int left=0;
    int the_nums_size = sizeof (nums)/ sizeof(int);
    int right = the_nums_size-1;
    std::cout<<"the the_nums_size is : "<<the_nums_size<<std::endl;

    std::cout<<"the out right is : "<<right<<std::endl;

    if(the_nums_size == 0)
    {
        std::cout<<"the nums is no value";
        return 0;
    }
    while (left<right) {
        std::cout << "left < right" << std::endl;
        int n=nums[left];
        while (left < right && nums[left] != val) {
            std::cout << "left value is : " << left << std::endl;
            left = left + 1;
        }

        while (left < right && nums[right] == val) {
            right = right - 1;
            std::cout << "the right is " << right << std::endl;
        }

        std::cout << "the left is " << left << std::endl;
        nums[left] = nums[right];
        std::cout << "the num left " << nums[left];

    }
}
//        if (nums[left] == val)
//        {
//            nums[left] = nums[right - 1];
//            right --;
//        }
//        else
//            left++;
//    }
//    std::cout<<"the the_nums_size is : "<<the_nums_size<<std::endl;
//
//    for (int i = 0; i < the_nums_size;i++) {
//        std::cout << nums[i] << std::endl;


//
//int main() {
//    //initial the test_vector: there are 15 integer, and initial value is 10.
//    std::vector<int> test_vector(15, 10);
//
//    std::cout << "its size is :"<< test_vector.size() << std::endl;
//    //traverse the test_vector
//    for (std::vector<int>::iterator itr = test_vector.begin(); itr != test_vector.end(); itr++) {
//        std::cout << *itr << " ";
//    }
//
//    //add
//    test_vector.push_back(20);
//    std::cout << "\nits size is :" << test_vector.size() << std::endl;
//
//    //use subscript to operation
//    std::cout << "the last value is :" << test_vector[test_vector.size()-1] << std::endl;
//
//    //delete
//    test_vector.pop_back();
//    std::cout << "its size is :" << test_vector.size() << std::endl;
//    std::cout << "the last value is :" << test_vector[test_vector.size() - 1] << std::endl;
//
//    return 0;
//
//}
//
