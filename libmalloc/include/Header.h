//
//  Header.h
//  libmalloc
//
//  Created by cooci on 2022/4/22.
//

#ifndef Header_h
#define Header_h

//( 0x00007fffffe00000ULL )
//( 0x00007fffffe00000 )
#define _COMM_PAGE64_BASE_ADDRESS      ( 0x00007fffffe00000ULL )
#define _COMM_PAGE_START_ADDRESS		_COMM_PAGE64_BASE_ADDRESS

#define	_COMM_PAGE_MEMORY_SIZE			(_COMM_PAGE_START_ADDRESS+0x038)
#define _COMM_PAGE_NCPUS  				(_COMM_PAGE_START_ADDRESS+0x022)

#define	_COMM_PAGE_PHYSICAL_CPUS		(_COMM_PAGE_START_ADDRESS+0x035)
#define	_COMM_PAGE_LOGICAL_CPUS			(_COMM_PAGE_START_ADDRESS+0x036)
#define _COMM_PAGE_CPU_TO_CLUSTER       (_COMM_PAGE_START_ADDRESS+0x200)
#define _COMM_PAGE_CPU_CLUSTERS         (_COMM_PAGE_START_ADDRESS+0x02F)        // uint8_t number of CPU clusters


#define NOTE_MEMORYSTATUS_PRESSURE_NORMAL       0x00000001      /* system memory pressure has returned to normal */
#define NOTE_MEMORYSTATUS_PRESSURE_WARN         0x00000002      /* system memory pressure has changed to the warning state */
#define NOTE_MEMORYSTATUS_PRESSURE_CRITICAL     0x00000004      /* system memory pressure has changed to the critical state */
#define NOTE_MEMORYSTATUS_LOW_SWAP              0x00000008      /* system is in a low-swap state */
#define NOTE_MEMORYSTATUS_PROC_LIMIT_WARN       0x00000010      /* process memory limit has hit a warning state */
#define NOTE_MEMORYSTATUS_PROC_LIMIT_CRITICAL   0x00000020      /* process memory limit has hit a critical state - soft limit */
#define NOTE_MEMORYSTATUS_MSL_STATUS   0xf0000000      /* bits used to request change to process MSL status */


//#define OS_VARIANT_NOTRESOLVED 1

#endif /* Header_h */
