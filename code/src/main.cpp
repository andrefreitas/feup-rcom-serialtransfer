#include <iostream>
#include "datalink.h"
#define BAUDRATE B38400
#define MODEMDEVICE "/dev/ttyS0"
#define _POSIX_SOURCE 1 /* POSIX compliant source */

using namespace std;

int main(int argc, char* argv[]) {
	if (argc == 2) {
		if (strcmp(argv[1], "transmitter") == 0) {
			dataLink d((char*) MODEMDEVICE, BAUDRATE, 3, 3);
			d.llopen(TRANSMITTER);
		}
		else if (strcmp(argv[1], "receiver") == 0) {
			dataLink d((char*) MODEMDEVICE, BAUDRATE, 3, 3);
			d.llopen(RECEIVER);
		}
		else
			cout << "Uso: \"nserial receiver\" or \"nserial transmitter \" " << endl;
	}
	else
		cout << "Uso: \"nserial receiver\" or \"nserial transmitter \" " << endl;
	return 0;
}
