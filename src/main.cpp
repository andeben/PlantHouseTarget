#include <Arduino.h>
#include "platform/platform.hpp"
#include "platform/connection.hpp"
#include "client/inc/clientMain.hpp"

static Platform*   mPlatform;
static Connection* mConnection;
static Client*     mClient;
void setup() {
  mPlatform   = new Platform();
  mConnection = new Connection();
  //mClient     = new Client(mConnection);
}

void loop() {
  // put your main code here, to run repeatedly:
}