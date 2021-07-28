/**
 **************************************************
 *
 * @file        DHTXX-SOLDERED.h
 * @brief       Header file for DHTXX-SOLDERED
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Zvonimir Haramustek for soldered.com
 ***************************************************/

#ifndef __DHT_SOLDERED__
#define __DHT_SOLDERED__

#include "libs/DHTlib/dht.h"

class DHT11 : public dht
{
};

class DHT22 : public dht
{
};

#undef dht

#endif
