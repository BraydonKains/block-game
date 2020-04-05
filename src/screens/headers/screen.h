#ifndef Screen_h
#define Screen_h

class Screen {
	virtual void eventHandler() = 0;
	virtual void run() = 0;
	virtual void render() = 0;
};

#endif
