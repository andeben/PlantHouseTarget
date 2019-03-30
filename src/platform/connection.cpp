#include "platform/connection.hpp"

Connection::Connection()
{
}

Connection::~Connection()
{
}

void Connection::SendMessage(GIS_BlackChannel_t* message)
{

}

void Connection::RegisterIncomingMessageHandler(std::function<void (GIS_BlackChannel_t* message)>)
{
  
}