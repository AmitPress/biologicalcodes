#include<cstdio>
#include<cstdlib>
using namespace std;
// Print a variable's location

// void get_memory_addr(int* a) {
//     cout<<"sp2"<<endl;
//     cout<<&(*a)<<endl;;
// }

//main
int main(){
    // int x = 5; // stack 1 (address space is separated)
    // get_memory_addr(&x); // stack 2 (address space is separated)
    // cout<<&x;
    /*
    [int d = 25;
    int* x = &d;
    int** y = &x;
    int*** z = &y;
    cout<<z[0][0][0];]
    */
    /*
    int x;
    int* helper = &x;
    helper[0] = 45;
    helper[1] = 65;
    helper[2] = -8;
    cout<<helper[2]; // gives us segmentation fault
    */
    /*
    char* s = "ABCDE";
    char* p = s;
    p[0] = 'Z';
    printf("%s",s); // gives us segmentation fault
    */
    // can we access heap without using malloc?
    /*
    No. The C language itself provides no such functionality. If you only care about Unix systems conforming to a deprecated feature of an old version of the Unix standard (SUSv2 or earlier, if I remember correctly), the brk and sbrk functions provide this functionality. But you really should not use it unless you're writing very low-level code that will never need to be portable.
    */
    // Bget can be used as a ref. to malloc -> http://www.fourmilab.ch/bget/
    /*
    int* x = (int*) malloc(sizeof(int)*10);
    for(int i=0; i<10; i++){
        x[i] = i;
    }
    x[10] = 52; // causes core dump or segmentation fault
    for(int i=0; i<10; i++){
        printf("%d", x[i]);
    }
    */
    /*
    // uninitialized memory space
    int* anypointer;
    printf("%d",*anypointer); // segmentation fault
    */
    // you can only use index operator ([]) with a memory block.
    // memory block can be created using array literal, array declaration or malloc.
    // malloc can occur segfault
    /*
    int* m = (int*) malloc(sizeof(int)*10); // all initialize to zero
    m[0] = 1;
    for(int i=0; i<10; i++){
        printf("%d", m[i]); // 1000000000
    }
    */
    //C char datatype
    /*
    char c; // initialize to ''
    printf("%c", c);
    */
    

    // int* y;
    // cout<<*y; // error
    // int* z;
    // z = 25;
    // cout<<z;
}