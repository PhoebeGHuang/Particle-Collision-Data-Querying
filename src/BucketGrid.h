#pragma once
#include <vector>
#include <queue>
#include "CollisionEvent.h"

class BucketGrid {
    static int bucketSize;
    static int minEnergyOut;
    static int maxEnergyOut;

    // Reference: https://en.cppreference.com/w/cpp/container/priority_queue
    priority_queue<CollisionEvent*,vector<CollisionEvent*>,CollisionEvent::LessEfficient> grid [3][(maxEnergyOut - minEnergyOut) / bucketSize];

public:
    BucketGrid();
};

