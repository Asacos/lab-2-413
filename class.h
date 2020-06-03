#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

#include <cstring>
#include <iterator>
#include <vector>
#include <deque>

using namespace std;

template<typename T>
class Deque
{
private:
    vector<T> data_;
public:

    deq(vector<T> data_)
    {
        this->data_=data_;
    }

    void pushBack(int var)
    {
        data_.push_back(var);
    }

    void pushFront(int var)
    {
        data_.insert(data_.begin(), var);
    }

    T popBack()
    {
        int answer=data_[data_.size()-1];
        data_.pop_back();
        return answer;
    }

    T popFront()
    {
        int answer=data_[0];
        data_.erase(data_.begin());
        return answer;
    }

    int topBack()
    {
        if (!data_.empty())
        {
            int answer=data_[data_.size()-1];
            return answer;
        }
    }

    int topFront()
    {
        if (!data_.empty())
        {
            int answer=data_[0];
            return answer;
        }
    }

    void _clear()
    {
        data_.erase(data_.begin(), data_.end());
    }

    int isEmpty()
    {
        if (!data_.empty())
            return 1;
        return 0;
    }

    size_t _size()
    {
        return data_.size();
    }

    void Print()
    {
        if (!data_.empty())
            copy(data_.begin(), data_.end(), ostream_iterator<int>(cout, " "));
        else cout<<"None"<<endl;
    }

    ~Deque(){}
};

#endif // CLASS_H_INCLUDED
