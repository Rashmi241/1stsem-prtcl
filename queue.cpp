#include<iostream>
using namespace std;
int queue[3],n=3;
int front=-1;
int rear=-1;
void enque(int ele)
{
    if(rear==n-1)
    cout<<"queue overflow!"<<endl;
    else
    {
        if(front==-1)
        front=0;
        cout<<"enter the element to insert"<<endl;
        cin>>ele;
        rear=rear+1;
        queue[rear]=ele;
    }
}
void dequeue(int ele)
{
    if(front==-1||front>rear)
    {
        cout<<"queue is emty.."<<endl;
    }
    else
    {
cout<<"element deleted from queue is "<<queue[front]<<endl;
front=front+1;
    }
}
void Display()
{
    if(front==-1)
    {
        cout<<"queue is emty.."<<endl;
    }
    else
    {
     cout<<"elements are:"<<endl;
     for(int i=front;i<=rear;i++)
     cout<<queue[i]<<" "<<endl;
     
    }
}
int main()
{
    int ch;
    cout<<"1)enqueue"<<endl;
    cout<<"2)dequeue"<<endl;
    cout<<"3)display"<<endl;
    cout<<"4)exit"<<endl;
    while(ch!=4)
    {
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:enqueue(int ele);
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:
          cout<<exit<<endl;
            default:
            cout<<"invalid choice"<<endl;
            break;
            default:
            cout<<"invalid choice"<<endl; 
        }
    }
}