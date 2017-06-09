typedef struct toh
{
 int info;
 struct toh *next;
}node;

node *start1,*ptr1,*start2,*ptr2,*start3,*ptr3,*ptr;

void intro();
void create();
void display();
node* deletenode(node *s);
node* insertnode(node *s,int n);
int check();
void wrap();

void start_timer(int seconds);
