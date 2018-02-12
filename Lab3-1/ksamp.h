#ifndef KSAMP_H
#define KSAMP_H

#define	LB_SIZE	1024

// Primary /proc Sampling functions
void sampleCmdline();
void sampleCpuInfo();
void sampleDevices();
void sampleDma();
void sampleFilesystems();
void sampleInterrupts();
void samplePartitions();
void sampleKcore();
void sampleKmsg();
void sampleKsyms();
void sampleLoadAvg();
void sampleLocks();
void sampleMalloc();
void sampleMd();
void sampleMeminfo();
void sampleModules();
void sampleMounts();
void samplePci();
void sampleRc();
void sampleScsi();
void sampleSmp();
void sampleStab();
void sampleStat();
void sampleSockStat();
void sampleUptime();
void sampleVersion();


// /proc/net Sampling functions
void sampleNArp();
void sampleNDev();
void sampleNRaw();
void sampleNRoute();
void sampleNSnmp();
void sampleNSockstat();
void sampleNTcp();
void sampleNUdp();
void sampleNUnix();


// /proc/[pid] Sampling functions
void samplePCmdline();
// void samplePCwd();	// Link to current directory
void samplePEnviron();
// void samplePExe();	// Link to an executable file
// void samplePFd();	// Directory of open file descriptors
void samplePMaps();
// void samplePMem();	// Represents the physical memory for the process
// void samplePRoot();	// Can reach this process's root directory here
void samplePStat();
void samplePStatm();
void samplePStatus();


// /proc/sys Sampling functions
void sampleSKernel();
// void sampleSNet();	// Configuration-dependent net info
// void sampleSVm();	// Control params for mem mgmt

#endif 
