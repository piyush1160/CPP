#include<iostream>
using namespace std;
class kQueue{    
   public:
        int n;
        int *next;
        int k;
        int *front;
        int *rear;
        int *arr;
        int freespot;
    
    public:
       //default constructor
         // kQueue() { }
       
        kQueue(int n , int k){
            this-> n = n;
            this-> k = k;
            front = new int[k];
            rear = new int[k];
            for(int i= 0 ; i<k ; i++){
                front[i] = -1;
                rear[i] = -1;
            }
            next = new int[n];
            for(int i =0; i<n ; i++ ){
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[k] ; 
            freespot=0;
        }

        void enqueue(int data , int qn){
            //overflow check karne ke liye 
            if(freespot == -1){
                cout<<"No empty space is available ";
                return ;
            }
            
            //index find where i want to insert
            int index = freespot;
            
            //update freespot
            freespot = next[index];

            //check first element 
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{ 
                //link new element to prev element
                next[rear[qn-1]] = index;
            }
            
            //update next
            next[index] = -1;

            //point rear to index 
            rear[qn-1] = index;
            
            //push element 
            arr[index] = data;
        }

       int dequeue(int qn){
           //underflow
           if(front[qn-1] == -1){
               cout<<" Queue is empty  ";
               return -1;
           }
           
           //find index to pop
           int index = front[qn-1];

           //front ko age badao 
           front[qn-1] = next[index];
           
           // freeslot manage
           next[index] = freespot;
           freespot = index;
           return arr[index]; 
       } 


};

int main(){
    kQueue q(10,3);

    q.enqueue(10,1);
    q.enqueue(20,1);
    q.enqueue(40,2);
    q.enqueue(30,1);

    cout<< q.dequeue(1) <<endl ;
    cout<< q.dequeue(1) <<endl ;
    cout<< q.dequeue(1) <<endl ;
    cout<< q.dequeue(2) <<endl ;

    return 0;
}