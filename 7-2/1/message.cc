#include "message.h"
#include <iostream>

using namespace std;

MessageBook::MessageBook()
{
}

MessageBook::~MessageBook()
{
}

void MessageBook::AddMessage(int number, const string& message)
{
    message_[number] = message;
}

void MessageBook::DeleteMessage(int number)
{
    message_.erase(number);
}

vector<int> MessageBook::GetNumbers()
{
    vector<int> numbers;
    for(map<int, string>::iterator it = message_.begin(); it != message_.end(); it++){
        numbers.push_back(it->first);
    }
    return numbers;
}

const string& MessageBook::GetMessage(int number)
{
    return message_[number];
}