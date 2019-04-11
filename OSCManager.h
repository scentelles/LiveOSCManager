#include <WiFiUdp.h>
#include <OSCMessage.h>

class OSCManager
{
  public:
    WiFiUDP Udp; 
    // A UDP instance to let us send and receive packets over UDP
    IPAddress * outIP_;
    int outPort_;          // remote port to receive OSC
    int localPort_;        // local port to listen for OSC packets (actually not used for sending)
  
  public:
    OSCManager();
	OSCManager(IPAddress * myAddress, int outPort, int localPort);
    void setup();
    void sendOSCMessage(String msg, int parameter);
	void sendOSCMessage(String msg, int parameter1, int parameter2);
	void sendOSCMessage(String msg, int parameter1, int parameter2, int parameter3);
    void sendNote(unsigned int note, unsigned int velocity, int duration);
    void sendCC(unsigned int nb, unsigned int value);
    void sendCommand(String command);
};
