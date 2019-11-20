 #include<bits/stdc++.h>
 using namespace std;

 #define Q_SIZE 5

 typedef struct{

 int data[Q_SIZE+1];
 int head,tail;



 }Queue;


 void enqueue(Queue *q,int item)
 {
     if((q->tail+1)%(Q_SIZE+1)==q->head)
     {
         cout<<"queue is full"<<endl;
         return;
     }

     q->data[q->tail]=item;
     q->tail=(q->tail+1)%(Q_SIZE+1);
 }

 int dequeue(Queue *q)
 {
     int item;
     if(q->tail==q->head)
     {
         cout<<"queueu is empty"<<endl;
         return -1;
     }

     item=q->data[q->head];
     q->head=(q->head+1)%(Q_SIZE +1);
     return item;
 }

 int main()
 {
     Queue q1;

     q1.tail=0;
     q1.head=0;

     enqueue(&q1,43);
     enqueue(&q1,40);

     enqueue(&q1,400);

     enqueue(&q1,4000);


 }
