#include "sorted.h"
#include <iostream>

using namespace std;

SortedArray::SortedArray()
{
}

SortedArray::~SortedArray()
{
}

void SortedArray::AddNumber(int num)
{
    numbers_.push_back(num);
}

vector<int> SortedArray::GetSortedAscending()
{
    vector<int> output = numbers_;
    for(int i = 0; i < output.size(); i++){
        for(int j = i + 1; j < output.size(); j++){
            if(output[i] > output[j]){
                int temp = output[i];
                output[i] = output[j];
                output[j] = temp;
            }
        }
    }
    return output;
}

vector<int> SortedArray::GetSortedDescending()
{
    vector<int> output = numbers_;
    for(int i = 0; i < output.size(); i++){
        for(int j = i + 1; j < output.size(); j++){
            if(output[i] < output[j]){
                int temp = output[i];
                output[i] = output[j];
                output[j] = temp;
            }
        }
    }
    return output;
}

int SortedArray::GetMax()
{
    int max = numbers_[0];
    for(int i = 1; i < numbers_.size(); i++){
        if(max < numbers_[i]) max = numbers_[i];
    }
    return max;
}

int SortedArray::GetMin()
{
    int min = numbers_[0];
    for(int i = 1; i < numbers_.size(); i++){
        if(min > numbers_[i]) min = numbers_[i];
    }
    return min;
}
