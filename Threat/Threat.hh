#ifndef THREAT_H_
#define THREAT_H_

#include <string>
#include <iostream>
#include "ThreatType.hh"
#include "ThreatStatus.hh"

class Threat
{
private:
string mName;
int status;
threat_type type;
int m_id;

public:

// Constructor and descructor
Threat(string pName, int pId);
virtual ~Threat();

//modifiers
void setStatus(int pStatus);
void setType(threat_type pType);
void setName(string pName);
void setID(int pId);

//accessors
int getStatus();
threat_type getType();
string getName();
int getID();
};
