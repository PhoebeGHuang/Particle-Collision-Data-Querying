#pragma once

using namespace std;

struct CollisionEvent {
    int eventID;
    short outgoingParticles [3];
    float kineticEnergyIn;  // GeV
    float restEnergyOut;    // GeV
    float efficiency;       // Derived as restEnergyOut / kineticEnergyIn

    struct LessEfficient {
        bool operator()(const CollisionEvent &a, const CollisionEvent &b) {return a.efficiency < b.efficiency;}
    };
};

