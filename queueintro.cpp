// In this program i use stl commands/function for queue and dequeue 
#include<iostream>
#include<queue>

using namespace std;

int main()
{  

    deque<int> d;

    d.push_front(12);
    d.push_back(14);
    
    cout<<"front : "<<d.front()<<endl;
    cout<<"back : "<< d.back()<<endl;
    
   d.pop_front();
   d.pop_back();
    cout<<"front : "<<d.front()<<endl;
     cout<<"back : "<< d.back()<<endl;

         if(d.empty()){
           cout<<"dque is empty now "<<endl;
          }
          else{
               cout<<"dque is not empty "<<endl;
           }
    /*
    queue<int>q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);

     cout<<" size of queue is : " << q.size()<<endl;

     q.pop();
    
    cout<<" size of queue is : " << q.size()<<endl;
  
   cout<<" front element is : " << q.front()<<endl;

    if(q.empty()){
        cout<<"queue is empty dost "<<endl;

    }
    else{
        cout<<"queue is not empty dost "<<endl;
    }
   
  */
     
 return 0;    
}