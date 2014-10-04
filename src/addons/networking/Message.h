
#ifndef WS_MESSAGE_H
#define WS_MESSAGE_H

#include "../../extensions/Property.h"

enum MessageType {
	MSG_NULL,
	MSG_DATA,
	MSG_REQ,
	MSG_ACK,
	MSG_RST
};

class Message
{
private:
	MessageType _type;
	void Init();
public:
	Message();
	Message(MessageType type);
	property<Message, MessageType, READ_WRITE> Type;
	MessageType getType();
	void setType(MessageType type);
};

#endif /* WS_MESSAGE_H */