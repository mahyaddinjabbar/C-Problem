/*Create two programs in C++ to process sequences of values in two ways:
  1) implementing it through a linked list, using dynamic data structures,
  2) using STL::list.

In both implementations, a specific function to
process values should be created and presented
in action (showing both initial and resulting values).
In the case of linked-list, also auxiliary
functions should be created and allocated
memory for the structure should be freed.

G10. Create a function with parameter n to delete from list
all elements: if element follows directly after
element with value n and value of following element
 is not equal to n then delete the following element.
*/
#include<iostream>
#include<list>
using namespace std;

void deleteN(list<int>list1, int n){
    for (auto it=list1.begin();it!=list1.end();++it) {
        cout<<*it<<" ";
        if(*it!=n) continue;
        auto nextX = next(it,1);
        if(*nextX==n) continue;
        list1.erase(nextX);
    }
}
void printlist(list<int>list1){
    for(auto&i: list1){
        cout<<i<<" ";
    }
}
int main(){
    list<int> list1 = {1,4,9,4,7,2,4,4};
    printlist(list1);
    cout<<endl<<"Deleted linked list: "<<endl;
    deleteN(list1,4);
}
