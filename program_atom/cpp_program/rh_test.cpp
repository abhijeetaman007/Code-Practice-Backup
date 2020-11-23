#include <stdio.h>
typedef struct
{
    int top;
    char arr[100];
} STACK;

void push(char x, STACK *s)
{
    (s->top)++;
    (s->arr[s->top]) = x;
}

void pop(STACK *s)
{
    (s->top)--;
}


int main()
{

    STACK s1;
    s1.top = -1;
    char exp[100];
    scanf("%s",exp);
    char ch;
    int i=0;
    int flag=0;
    // printf("%d",)
    while((ch=exp[i++])!='\0'){
        if(ch=='('||ch=='{'||ch=='['){
            // cout<<"open"<<endl;
            push(ch,&s1);
        }
        else{
            if(ch==')'){
                if(s1.arr[s1.top]=='('){
                    pop(&s1);
                    // cout<<"close )"<<endl;
                }
                else{
                    flag=1;
                    break;
                }
            }
            else if(ch=='}'){
                if(s1.arr[s1.top]=='{'){
                    pop(&s1);
                }
                else{
                    flag=1;
                    break;
                }
            }
            else if(ch==']'){
                if(s1.arr[s1.top]=='['){
                    pop(&s1);
                }
                else{
                    flag=1;
                    break;
                }
            }
        }

    }
    if(flag==1||s1.top!=-1){
        printf("not balanced");
    }
    else if(s1.top==-1){
        printf("balanced");
    }
    
}