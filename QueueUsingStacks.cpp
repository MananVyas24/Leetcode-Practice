/**
 Implement the following operations of a queue using stacks.

 push(x) -- Push element x to the back of queue.
 pop() -- Removes the element from in front of queue.
 peek() -- Get the front element.
 empty() -- Return whether the queue is empty.
 Notes:
 You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are valid.
 Depending on your language, stack may not be supported natively. You may simulate a stack by using a list or deque (double-ended queue), as long as you use only standard operations of a stack.
 You may assume that all operations are valid (for example, no pop or peek operations will be called on an empty queue)
*/

# include<stack>
using namespace std;

class Queue 
{
private:
    stack<int> temp;
    stack<int> value;
    
public:
    // Push element x to the back of queue.
    void push(int x) ;
    
    // Removes the element from in front of queue.
    void pop(void) ;
   
    // Get the front element.
    int peek(void) ;
    
    // Return whether the queue is empty.
    bool empty(void) ;
   
};

void Queue::push (int x) // ENQUEUE
{
    if(value.empty())
        value.push(x);
    else
    {
        while(!value.empty())
        {
            temp.push(value.top());
            value.pop();
        }
        value.push(x);
        while(!temp.empty())
        {
            value.push(temp.top());
            temp.pop();
        }
    }
}

bool Queue::empty(void)
{
    return (value.empty());
}

int Queue::peek(void)
{
    return (value.top());
}

void Queue::pop(void)
{
    value.pop();
}
