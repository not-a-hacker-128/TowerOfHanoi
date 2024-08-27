#include <iostream>
using namespace std;
 
void move(int,int,int,int);

int main() {
    int num;
    cout << "Enter the number of disks":
    cin >> num;
    cout << endl;
    move(num,1,3,2);
    system("PAUSE");
    return 0;
}

void move(int count, int p1, int p2, int p3 , int p4)
{
    if (count > 0){
        move( count -1 , p1, p2, p3);
        cout << "Move disk" << count << "from" << p1 << "to" << p3 << "." << endl;
        move(count - 1,p2,p3,p1)
    }

}