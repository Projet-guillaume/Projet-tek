#include "Errors.hpp"

NasaError::NasaError(std::string const &message, const std::string &component) : _message(message), _component(component)
{

}

std::string const &NasaError::getComponent() const
{
    return this->_component;
}

MissionCriticalError::MissionCriticalError(std::string const &message, const std::string &component) : NasaError(message, component)
{

}

LifeCriticalError::LifeCriticalError(std::string const &message, const std::string &component) : NasaError(message, component)
{

}

UserError::UserError(std::string const &message, const std::string &component) : NasaError(message, component)
{

}

CommunicationError::CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
{

}