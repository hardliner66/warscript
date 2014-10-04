#include "MessageQueue.h"

using namespace std;

boost::mutex mtx_;
queue<Message> _MessageQueue;

MessageQueue::MessageQueue() {

}

void MessageQueue::enqueue(Message m) {
	mtx_.lock();
	_MessageQueue.push(m);
	mtx_.unlock();
}

Message MessageQueue::dequeue() {
	mtx_.lock();
	Message m;
	if (_MessageQueue.size()) {
		m = _MessageQueue.front();
		_MessageQueue.pop();
	}
	if ((int)m.Type < 0)
		m = Message();
	mtx_.unlock();
	return m;
}

MessageQueue::~MessageQueue(){
	
}