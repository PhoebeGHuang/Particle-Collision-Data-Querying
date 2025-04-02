#pragma once
#include <string>

using namespace std;

struct CollisionEvent {
    int eventID;
    string incomingParticles;
    string outgoingParticles;
    float kineticEnergyIn;  // GeV
    float restEnergyOut;    // GeV
    float efficiency;       // Derived as restEnergyOut / kineticEnergyIn
};

