#pragma once

using namespace std;

struct CollisionEvent {
    int eventID;
    short outgoingParticles [3];
    float kineticEnergyIn;  // GeV
    float restEnergyOut;    // GeV
    float efficiency;       // Derived as restEnergyOut / kineticEnergyIn
};

