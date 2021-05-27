#include <semaphore.h> // sem_t
#include <atomic> // atomic_int
#include <pthread.h> // thread_t
#include <string>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <arpa/inet.h>

#include <trompeloeil/trompeloeil.h>
#include "Fake.h"

#ifndef MOCKFAKE_H
#define MOCKFAKE_H

class MockFake : Fake {
public:
    MockFake() {};
    MAKE_MOCK0(test, int());
    MAKE_MOCK1(test1, int(int));

};

#endif
