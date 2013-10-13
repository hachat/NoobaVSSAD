#include "detectedevent.h"


DetectedEvent::DetectedEvent()
{
}

DetectedEvent::DetectedEvent(QObject *parent)
    :QObject(parent)
{
}

DetectedEvent::DetectedEvent(const DetectedEvent &other)
{
    event_identifier = other.getIdentifier();
    event_message = other.getMessage();
    confidence = other.getConfidence();
}

DetectedEvent::~DetectedEvent()
{
}

DetectedEvent & DetectedEvent::operator =(const DetectedEvent &other)
{
    event_identifier = other.getIdentifier();
    event_message = other.getMessage();
    confidence = other.getConfidence();
    return *this;
}
