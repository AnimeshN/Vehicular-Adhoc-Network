
#ifndef __VEINS_SIMPLEAPP_H_
#define __VEINS_SIMPLEAPP_H_

#include <omnetpp.h>
#include "veins/modules/heterogeneous/messages/HeterogeneousMessage_m.h"
#include "veins/modules/mobility/traci/TraCIScenarioManager.h"
#include "veins/modules/mobility/traci/TraCIMobility.h"
#include "veins/base/utils/SimpleLogger.h"

using Veins::TraCIScenarioManager;
using Veins::TraCIScenarioManagerAccess;

/**
 * @brief
 * A simple application that sends messages via the DONTCARE channel to other cars and sometimes a
 * message to the server via LTE.
 */

class SimpleApp: public cSimpleModule {

protected:
	int toDecisionMaker;
	int fromDecisionMaker;
	std::string sumoId;
	bool debug;
	bool infoLogging;

protected:
	virtual void initialize(int stage);
	virtual void handleMessage(cMessage *msg);
};

#endif
