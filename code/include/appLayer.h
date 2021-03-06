#include "datalink.h"
class appLayer {
	char* filePath;
	int buildControlPackage(const char* filePath, unsigned char* package, int fileSize,unsigned char control);
	int buildDataPackage(unsigned char* package,unsigned char* data, int index,int dataLen);
	map<string,string> args;
	int timeout;
	int baudrate;
	int readSize;
	int maxAttempts;
	int fileSize;
	int errorProb;
	bool restoreTransfer;
	int parseFileName(unsigned char *buf, char *filepath, int bufLen);
	map<string,int> stats;
	int fileSizeReceived;

public:
	appLayer();
	void buildArgs(int argc, char* argv[]);
	int sendFile();
	int receiveFile();
	void showStats();
	int getTotalReceived();

};
