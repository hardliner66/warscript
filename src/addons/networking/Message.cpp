#include "Message.h"

void Message::Init() {
	Type.setContainer(this);
	Type.setter(&Message::setType);
	Type.getter(&Message::getType);
}

Message::Message() {
	Init();
	_type = MSG_NULL;
}

Message::Message(MessageType type) {
	Init();
	_type = type;
}

MessageType Message::getType() {
	return _type;
}

void Message::setType(MessageType type) {
	_type = type;
}