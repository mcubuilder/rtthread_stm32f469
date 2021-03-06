#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

#define RTT_DIR "rt-thread"

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDEL_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
#define RT_DEBUG

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_MEMHEAP
#define RT_USING_MEMHEAP_AS_HEAP
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart3"
#define ARCH_ARM
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M4

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */


/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 10
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 256
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 16

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 8
#define DFS_FILESYSTEM_TYPES_MAX 8
#define DFS_FD_MAX 64
#define RT_USING_DFS_ELMFAT

/* elm-chan's FatFs, Generic FAT Filesystem Module */

#define RT_DFS_ELM_CODE_PAGE 437
#define RT_DFS_ELM_WORD_ACCESS
#define RT_DFS_ELM_USE_LFN_3
#define RT_DFS_ELM_USE_LFN 3
#define RT_DFS_ELM_MAX_LFN 255
#define RT_DFS_ELM_DRIVES 2
#define RT_DFS_ELM_MAX_SECTOR_SIZE 512
#define RT_DFS_ELM_REENTRANT
#define RT_USING_DFS_DEVFS
#define RT_USING_DFS_ROMFS

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SERIAL
#define RT_USING_I2C
#define RT_USING_I2C_BITOPS
#define RT_USING_PIN
#define RT_USING_MTD_NOR
#define RT_USING_SDIO
#define RT_SDIO_STACK_SIZE 512
#define RT_SDIO_THREAD_PRIORITY 15
#define RT_MMCSD_STACK_SIZE 1024
#define RT_MMCSD_THREAD_PREORITY 22
#define RT_MMCSD_MAX_PARTITION 16
#define RT_USING_SPI
#define RT_USING_SPI_WIFI

/* Using WiFi */


/* Using USB */


/* POSIX layer and C standard library */

#define RT_USING_LIBC
#define RT_USING_POSIX

/* Network */

/* Socket abstraction layer */


/* light weight TCP/IP stack */

#define RT_USING_LWIP
#define RT_USING_LWIP202
#define RT_LWIP_IGMP
#define RT_LWIP_ICMP
#define RT_LWIP_DNS
#define RT_LWIP_DHCP
#define IP_SOF_BROADCAST 1
#define IP_SOF_BROADCAST_RECV 1

/* Static IPv4 Address */

#define RT_LWIP_IPADDR "192.168.1.30"
#define RT_LWIP_GWADDR "192.168.1.1"
#define RT_LWIP_MSKADDR "255.255.255.0"
#define RT_LWIP_UDP
#define RT_LWIP_TCP
#define RT_LWIP_RAW
#define RT_MEMP_NUM_NETCONN 8
#define RT_LWIP_PBUF_NUM 16
#define RT_LWIP_RAW_PCB_NUM 2
#define RT_LWIP_UDP_PCB_NUM 2
#define RT_LWIP_TCP_PCB_NUM 4
#define RT_LWIP_TCP_SEG_NUM 30
#define RT_LWIP_TCP_SND_BUF 4096
#define RT_LWIP_TCP_WND 8192
#define RT_LWIP_TCPTHREAD_PRIORITY 10
#define RT_LWIP_TCPTHREAD_MBOX_SIZE 8
#define RT_LWIP_TCPTHREAD_STACKSIZE 1024
#define RT_LWIP_ETHTHREAD_PRIORITY 12
#define RT_LWIP_ETHTHREAD_STACKSIZE 1024
#define RT_LWIP_ETHTHREAD_MBOX_SIZE 8
#define LWIP_NETIF_STATUS_CALLBACK 1
#define SO_REUSE 1
#define LWIP_SO_RCVTIMEO 1
#define LWIP_SO_SNDTIMEO 1
#define LWIP_SO_RCVBUF 1
#define LWIP_NETIF_LOOPBACK 0
#define RT_LWIP_STATS

/* Modbus master and slave stack */


/* AT commands */


/* VBUS(Virtual Software BUS) */


/* Utilities */


/* ARM CMSIS */


/* RT-Thread online packages */

/* IoT - internet of things */

#define PKG_USING_WEBCLIENT
#define PKG_USING_WEBCLIENT_V100

/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */

#define PKG_USING_NETUTILS
#define PKG_NETUTILS_PING
#define PKG_NETUTILS_IPERF
#define PKG_USING_NETUTILS_LATEST_VERSION

/* IoT Cloud */


/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */

#define PKG_USING_LITTLEFS
#define PKG_USING_LITTLEFS_V090
#define LFS_READ_SIZE 256
#define LFS_WRITE_SIZE 256
#define LFS_BLOCK_SIZE 4096
#define LFS_LOOKAHEAD 512

/* peripheral libraries and drivers */


/* miscellaneous packages */

#define PKG_USING_OPTPARSE
#define PKG_USING_OPTPARSE_V100

/* samples: kernel and components samples */


/* Privated Packages of RealThread */

#define PKG_USING_CODEC
#define PKG_USING_CODEC_V110
#define CODEC_USING_HELIX_MP3
#define CODEC_USING_HELIX_AAC
#define PKG_USING_PLAYER
#define PKG_USING_PLAYER_V120
#define PLAYER_ENABLE_NET_STREAM
#define PLAYER_USING_NETSTREAM_BUFSZ 720
#define PLAYER_USING_EXAMPLE00
#define PLAYER_USING_EXAMPLE01

/* examples */

/* Audio codec configuration */

#define PLAYER_ENABLE_CODEC_WAV
#define PLAYER_ENABLE_CODEC_MP3
#define PLAYER_ENABLE_CODEC_AAC

/* Net related configuration */

#define LWIP_TCP_KEEPALIVE 1

/* Application configuration */

#define PLAYER_ENABLE_APP_LIST

/* Network Utilities */


/* rtpkgs online packages */

#define SOC_STM32F469NI

/* STM32 Bsp Config */

#define BSP_USING_HEAP_SRAM_SDRAM

/* Select uart drivers */

#define BSP_USING_UART3

/* Select pin drivers */

#define BSP_USING_PIN

/* Select i2c bus drivers */

#define BSP_USING_I2C2

/* Select spi bus drivers */

#define BSP_USING_SPI2
#define SPI_USING_DMA

/* Select sdram drivers */

#define BSP_USING_SDRAM

/* Select audio drivers */

#define BSP_USING_AUDIO

/* Select sdcard drivers */

#define BSP_USING_SDCARD
#define BSP_USING_SDCARD_BLOCK
#define BSP_USING_SDCARD_MOUNT
#define BSP_USING_SDCARD_PATH_MOUNT "/mnt/sd"

/* Select lcd drivers */

#define BSP_USING_LCD

/* Select ramdisk drivers */

#define BSP_USING_RAMDISK
#define BSP_USING_RAMDISK_SIZE 4
#define BSP_USING_RAMDISK_MOUNT
#define BSP_USING_RAMDISK_PATH_MOUNT "/mnt/tmp"

/* Select qspi flash drivers */

#define BSP_USING_QSPI_FLASH
#define BSP_USING_QSPI_FLASH_MOUNT
#define BSP_USING_QSPI_FLASH_PATH_MOUNT "/mnt/flash"

#endif
