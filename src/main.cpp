#include "stdio.h"
#include "etl/list.h"

using namespace etl;
using namespace std;

struct Point {
    int x;
    int y;
};

int main(void)
{
    etl::list<Point, 10> mylist;


    mylist.push_front((Point){ .x = 1, .y = 2});
    mylist.push_front((Point){ .x = 3, .y = 4});

    // printf("list.size=%ld\nlist.available=%ld\n", mylist.size(), mylist.available());
    while (mylist.size() != 0) {
        auto pt = mylist.back();
        printf("x=%d, y=%d\n", pt.x, pt.y);
        mylist.pop_back();
    }
    return 0;
}


//---
extern "C" {
void _exit(int a) { for(;;); }
int _sbrk() { return -1; }
int _close() { return -1; }
int _read() { return -1; }
int _fstat() { return -1; }
int _isatty() { return -1; }
int _lseek() { return -1; }

int _write(int file, char* ptr, int len)
{
    return -1;
}
void foo()
{
}

}
