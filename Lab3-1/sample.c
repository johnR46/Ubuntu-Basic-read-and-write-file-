#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<unistd.h>
#include	"ksamp.h"


void sampleCmdline() {
	printf("sampleCmdline --  Not implemented\n");
}


void sampleCpuInfo() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/cpuinfo", "r");
	printf("CPU Information\n");
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Skip processor
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// cpu
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// model
	printf("  %s", lineBuf);
	fclose(thisProcFile);
}


void sampleDevices() {
	printf("sampleDevices  --  Not implemented\n");
}


void sampleDma() {
	printf("sampleDma  --  Not implemented\n");
}


void sampleFilesystems() {
	printf("sampleFilesystems  --  Not implemented\n");
}


void sampleInterrupts() {
	printf("sampleInterrupts  --  Not implemented\n");
}


void samplePartitions() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/partitions", "r");
	printf("All Partitions\n");
	while(fgets(lineBuf, LB_SIZE+1, thisProcFile) != NULL) 
		printf("  %s", lineBuf);
	fclose(thisProcFile);
}


void sampleKcore() {
	printf("sampleKmsg --  Not implemented\n");
}


void sampleKmsg() {
	printf("sampleKmsg --  Not implemented\n");
}


void sampleKsyms() {
	printf("sampleKsyms --  Not implemented\n");
}


void sampleLoadAvg() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/loadavg", "r");
	fgets(lineBuf, LB_SIZE+1, thisProcFile);
	printf("Load average:  %s", lineBuf);
	fclose(thisProcFile);
}


void sampleLocks() {
	printf("sampleLocks --  Not implemented\n");
}


void sampleMalloc() {
	printf("sampleMalloc --  Not implemented\n");
}


void sampleMd() {
	printf("sampleMd --  Not implemented\n");
}


void sampleMeminfo() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/meminfo", "r");
	printf("Memory Information:\n");
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Header line
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Data
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Swap memory line
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Total memory
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Free memory
	printf("  %s", lineBuf);
//	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Shared  memory
//	printf("  %s\n", lineBuf);
//	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Buffers
//	printf("  %s\n", lineBuf);
//	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Cached memory
//	printf("  %s\n", lineBuf);
//	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Swap total
//	printf("  %s\n", lineBuf);
//	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Swap free
//	printf("  %s\n", lineBuf);
	fclose(thisProcFile);
}


void sampleModules() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/modules", "r");
	fgets(lineBuf, LB_SIZE+1, thisProcFile);
	printf("NOT RIGHT YET --   %s\n", lineBuf);
	fclose(thisProcFile);
}


void sampleMounts() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/mounts", "r");
	printf("File Systems Mounted:\n");
	while(fgets(lineBuf, LB_SIZE+1, thisProcFile) != NULL) 
		printf("  %s", lineBuf);
	fclose(thisProcFile);
}


void sampleRc() {
	printf("sampleRc --  Not implemented\n");
}


void samplePci() {
	printf("samplePci --  Not implemented\n");
}


void sampleScsi() {
	printf("sampleScsi --  Not implemented\n");
}


void sampleSmp() {
	printf("sampleSmp --  Not implemented\n");
}


void sampleStab() {
	printf("sampleStab --  Not implemented\n");
}


void sampleStat() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/stat", "r");
	printf("Kernel Statistics\n");
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Jiffies
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Disk operations
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Disk reads
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Disk writes
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Disk read sectors
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Disk written sectors
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Memory pages
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Swap  pages
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Interrupts
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Context switches
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Boot time
	printf("  %s", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Processes started
	printf("  %s", lineBuf);
	fclose(thisProcFile);
}


void sampleSockStat() {
	int i;
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/net/sockstat", "r");
	printf("Socket information\n");
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// sockets used
	printf("  %s\n", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// TCP
	printf("  %s\n", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// UDP
	printf("  %s\n", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// Raw
	printf("  %s\n", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// PAC
	printf("  %s\n", lineBuf);
	fgets(lineBuf, LB_SIZE+1, thisProcFile);	// SYN_COOKIES
	printf("  %s\n", lineBuf);
	fclose(thisProcFile);
}


void sampleUptime() {
	int i;
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/uptime", "r");
	fscanf(thisProcFile, "%s", lineBuf);
	i = atoi(lineBuf);
	printf("Uptime:  %d:%d:%d\n", i/3600, i/60, i%60);
	fclose(thisProcFile);
}


void sampleVersion() {
	char lineBuf[LB_SIZE];
	FILE *thisProcFile;

	thisProcFile = fopen("/proc/version", "r");
	fscanf(thisProcFile, "%s", lineBuf);
	printf("Kernel version:\n  %s", lineBuf);
	fscanf(thisProcFile, "%s", lineBuf);
	printf(" %s", lineBuf);
	fscanf(thisProcFile, "%s", lineBuf);
	printf(" %s\n", lineBuf);
	fclose(thisProcFile);


}
