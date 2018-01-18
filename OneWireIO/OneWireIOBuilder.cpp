/**
OneWireIOBuilder implementation.
*/

#include "OneWireIOServer.h"
#include "OneWireIOBuilder.h"

using namespace OneWireIO;

OneWireIOBuilder::OneWireIOBuilder(const char* libName, const char* timeStamp)
  : CDPBuilder(libName, timeStamp)
{
}

CDPComponent* OneWireIOBuilder::CreateNewComponent(const std::string& type)
{
  if (type=="OneWireIO.OneWireIOServer")
    return new OneWireIOServer;

  return CDPBuilder::CreateNewComponent(type);
}

CDPBaseObject* OneWireIOBuilder::CreateNewCDPOperator(const std::string& modelName, const std::string& type, const CDPPropertyBase* inputProperty)
{
  return CDPBuilder::CreateNewCDPOperator(modelName, type, inputProperty);
}
