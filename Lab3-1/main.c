#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<sys/time.h>
#include	<time.h>
#include	<unistd.h>

#include	"ksamp.h"

#define	STANDARD	0
#define	SHORT	1
#define	LONG	2

int main(int argc, char *argv[]) {

	int i;
	int reportType;
	int interval, iteration, duration;
	char repTypeName[16];
	char c1, c2;
	char lineBuf[LB_SIZE];
	struct timeval now;
	FILE *thisProcFile;

// Determine report type
	reportType = STANDARD;
	strcpy(repTypeName, "Standard");
	if(argc > 1) {
		sscanf(argv[1], "%c%c", &c1, &c2);
		if(c1 != '-') {
			fprintf(stderr, "usage: ksamp [-s][-l int dur]\n");
			exit(1);
		}
		if(c2 ==  's') {
			reportType = SHORT;
			strcpy(repTypeName, "Short");
		}
		if(c2 ==  'l') {
			reportType = LONG;
			strcpy(repTypeName, "Long");
		}
	}

// Get the current time
	gettimeofday(&now, NULL);
	printf("Status report type %s at  %s\n",
			repTypeName, ctime(&(now.tv_sec)));

	thisProcFile = fopen("/proc/sys/kernel/hostname", "r");
	fgets(lineBuf, LB_SIZE+1, thisProcFile);
	printf("Machine hostname: %s", lineBuf);
	fclose(thisProcFile);


	sampleCpuInfo();		// CPU information
	sampleVersion();		// Kernel version
	sampleUptime();			// Uptime
	if(reportType == STANDARD) exit(0);
	sampleStat();			// Kernel statistics
	sampleMeminfo();		// Memory information
	if(reportType == SHORT) exit(0);
	sampleMounts();			// Mounted file systems
	interval = atoi(argv[2]);
	duration = atoi(argv[3]);
	iteration = 0;
	while(iteration<duration) {
		sleep(interval);
		sampleLoadAvg();
		iteration += interval;
	}

	exit(0);
}