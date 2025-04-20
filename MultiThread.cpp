#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int count=0;
mutex mtx;
int main(){
    thread t1([](){
        mtx.lock();
        for(int i=0;i<100;i++){
            count++;
            cout<<"thread1:"<<count<<endl;
        }
        mtx.unlock();
    });
    thread t2([](){
        mtx.lock();
        for(int i=0;i<100;i++){
            count++;
            cout<<"thread2:"<<count<<endl;
        }
        mtx.unlock();
    });
    t1.join();
    t2.join();
    return 0;
}
