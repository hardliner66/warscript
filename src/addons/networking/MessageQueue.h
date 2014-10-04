#ifndef WS_MESSAGE_QUEUE_H
#define WS_MESSAGE_QUEUE_H
#include <queue>
#include <boost/thread/mutex.hpp>
#include "Message.h"

class MessageQueue
{
public:
	MessageQueue();
	void enqueue(Message m);
	Message dequeue();
	~MessageQueue();	
};

#endif /* WS_MESSAGE_QUEUE_H */