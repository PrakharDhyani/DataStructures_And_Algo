#include<stdio.h>
#include<stdlib.h>
typedef struct queue q;
     struct queue
     {
          int *arr;
          int size;
          int front;
          int rare;
     };
     
    void create(int size , q** ptr )
     {
               (*ptr)->size = size;
                (*ptr)->arr = (int *)malloc(sizeof(int) * size));
                (*ptr)->front = -1;
                (*ptr)->rare = -1;
     }
     int isFull(q **ptr)
     {
          return (*ptr)->rare == (*ptr)->size-1;
     }
     void push( q** ptr )
     {
          int num;
          printf("Enter the Element to push : \n");
          scanf("%d",&num);
          if((*ptr)->front == -1)
          {
               (*ptr)->front ++;
               (*ptr)->rare++;
               (*ptr)->arr[front]=(*ptr)->arr[rare] = num; 
          }
          else
          {
               if(isFull(&ptr)
               {
                    printf("Queue is Full pop out some elements...!!\n");
                                
               }
               else 
               {
                    (*ptr) -> rare++;
                    (*ptr) -> arr[rare] = num;
                    (*ptr)->size++;
                }
               
          }
     }
     void pop( q** ptr)
     {
          if( (*ptr)->front ==  -1)
          {
               printf("Queue is Empty......Enter some Elements first...!!\n");
               return;
          }
          (*ptr)->size--;
          if( (*ptr)->rare ==  (*ptr)->front)
          {
           (*ptr)->front++;
          }
          return;
          
     }
     int front( q** ptr )
     {
          return (*ptr)->front;
     }
     int rare( q** ptr )
     {
           return (*ptr)->rare;
     }
     void display( q** ptr )
     {
          int temp = (*ptr)->front;
          while(temp++ != rare )
          {
               printf("%d\t",temp);
          }
          return;
     }
     
     int main()
     {
          q * que =  (q*)malloc(sizeof(q));
          create(10 , &que);
          push(10,&que);
          push(11,&que);
          push(12,&que);
          push(13,&que);
          push(14,&que);
          display(&que);
          pop(&que);
          pop(&que);
          display(&que);
          printf("Front element is  : " ,front(&que));
          printf("Rare element is  : " ,rare(&que));
          pop(&que);
          pop(&que);
          display(&que);
          return 0;         
     }
