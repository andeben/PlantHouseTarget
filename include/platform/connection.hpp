#ifndef PLATFORM_CONNECTION_HPP
#define PLATFORM_CONNECTION_HPP
#include "common/inc/communicationIf.hpp"

class Connection : public CommunicationIf
{
  public:
  Connection();
  ~Connection();
  void SendMessage(GIS_BlackChannel_t* message);
  void RegisterIncomingMessageHandler(std::function<void (GIS_BlackChannel_t* message)>);
};



#endif //PLATFORM_CONNECTION_HPP