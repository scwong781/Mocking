#include <semaphore.h> // sem_t
#include <atomic> // atomic_int
#include <pthread.h> // thread_t
#include <string>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <arpa/inet.h>

#ifndef FAKE_H
#define FAKE_H

class Fake {
public:
    Fake();
    int test();
    int test1(int a);
    std::string test2(std::string g);
    void test3();
};

Fake::Fake() {

}

#endif
