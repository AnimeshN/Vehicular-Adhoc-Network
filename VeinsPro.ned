package org.car2x.veins.modules.heterogeneous.application;

//
// A simple application that just sends messages.
//
simple SimpleApp {
	parameters:
		bool debug = default(false);
		bool infoLogging = default(true);
    gates:
        output toDecisionMaker;
        input  fromDecisionMaker;
}
