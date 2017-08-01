/*
 * This class allows us to add threats
 * to the system when dealing with the data coming in.
 * 
 * - Team Alpha
 */

#include "ThreatStatus.hh"
#include "ThreatType.hh"
#include <iostream>
#include <string>
#include "Threat.hh"

Threat::Threat(string pName, int pId) {
  mName = pName;
  m_id = pId;
  status = NO_THREAT;
  type = threat_type.NON_URGENT;
}

Threat::~Threat() {}

int Threat::getStatus() {return status;}
threat_type Threat::getType()  {return type;}
int Threat::getID() {return m_id;}
string Threat::getName() {return mName;}

void Threat::setStatus(int pStatus) {status = pStatus;}
void Threat::setType(threat_type pType) {type = pType;}
void Threat::setName(string pName) {mName = pName;}
void Threat::setID(int pId) {m_id = pId;}

