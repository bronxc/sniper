extern apicall_t iphlpapi_apicalls[];
extern int iphlpapi_apicalls_size;

extern apicall_t kernel32_apicalls[];
extern int kernel32_apicalls_size;

extern apicall_t kernelbase_apicalls[];
extern int kernelbase_apicalls_size;

#define MAX_HANDLED_ARGS 17

#define MAX_HANDLED_RETS 11

typedef enum : uint32_t
{
	FUNDAMENTAL_TYPE,
	MIB_UDPSTATS,
	MIB_IPNET_TABLE2,
	MIB_TCPROW_LH,
	TCP_ESTATS_TYPE,
	MIB_UNICASTIPADDRESS_ROW,
	MIB_IPNETROW_LH,
	IP_ADAPTER_INDEX_MAP,
	MIB_IPFORWARDTABLE,
	OVERLAPPED,
	IP_PER_ADAPTER_INFO_W2KSP1,
	MIB_UNICASTIPADDRESS_TABLE,
	FIXED_INFO_W2KSP1,
	UDP_TABLE_CLASS,
	MIB_IF_TABLE_LEVEL,
	MIB_IF_TABLE2,
	TCPIP_OWNER_MODULE_INFO_CLASS,
	MIB_IPFORWARDROW,
	IP_OPTION_INFORMATION,
	MIB_IPNET_ROW2,
	MIB_IPPATH_ROW,
	NET_LUID_LH,
	SOCKADDR_INET,
	MIB_IPFORWARD_ROW2,
	MIB_TCPSTATS_LH,
	GUID,
	MIB_MULTICASTIPADDRESS_TABLE,
	MIB_IPINTERFACE_TABLE,
	IP_ADAPTER_INFO,
	MIB_IPPATH_TABLE,
	MIB_ANYCASTIPADDRESS_ROW,
	IP_INTERFACE_INFO,
	MIB_TCPTABLE,
	MIB_TCP6TABLE,
	MIB_MULTICASTIPADDRESS_ROW,
	MIB_IPINTERFACE_ROW,
	IP_INTERFACE_NAME_INFO_W2KSP1,
	MIB_IPSTATS_LH,
	MIB_TCPTABLE2,
	TCP_TABLE_CLASS,
	MIB_ICMP_EX_XPSP1,
	MIB_UDP6ROW_OWNER_MODULE,
	SOCKADDR,
	MIB_IPNETTABLE,
	MIB_UDPROW_OWNER_MODULE,
	MIB_ICMP,
	MIB_INVERTEDIFSTACK_TABLE,
	MIB_IPFORWARD_TABLE2,
	MIB_TCP6ROW,
	MIB_IPADDRTABLE,
	MIB_TCP6TABLE2,
	IP_ADAPTER_ADDRESSES_LH,
	MIB_IFTABLE,
	MIB_ANYCASTIPADDRESS_TABLE,
	MIB_IFROW,
	MIB_TCP6ROW_OWNER_MODULE,
	MIB_IF_ROW2,
	MIB_TCPROW_OWNER_MODULE,
	IP_UNIDIRECTIONAL_ADAPTER_ADDRESS,
	SOCKADDR_IN6,
	MIB_IFSTACK_TABLE,
	MIB_UDP6TABLE,
	SOCKADDR_IN6_PAIR,
	MIB_UDPTABLE,
	SECURITY_ATTRIBUTES,
	INPUT_RECORD,
	NLSVERSIONINFO,
	SMALL_RECT,
	COORD,
	CHAR_INFO,
	FILETIME,
	TIME_DYNAMIC_ZONE_INFORMATION,
	CONTEXT,
	PROCESSOR_NUMBER,
	COMPUTER_NAME_FORMAT,
	TAGHEAPLIST32,
	NLSVERSIONINFOEX,
	SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION,
	TAGACTCTX_SECTION_KEYED_DATA,
	HEAP_INFORMATION_CLASS,
	TAGMODULEENTRY32,
	TAGPROCESSENTRY32,
	CONSOLE_READCONSOLE_CONTROL,
	TP_CALLBACK_ENVIRON_V3,
	CONSOLE_CURSOR_INFO,
	GROUP_AFFINITY,
	WOW64_LDT_ENTRY,
	FINDEX_INFO_LEVELS,
	FINDEX_SEARCH_OPS,
	COMSTAT,
	NORM_FORM,
	EXCEPTION_RECORD,
	TIME_ZONE_INFORMATION,
	SYSTEMTIME,
	FILEMUIINFO,
	CONSOLE_FONT_INFOEX,
	SYSTEM_INFO,
	COMMTIMEOUTS,
	JOB_SET_ARRAY,
	RTL_CRITICAL_SECTION,
	MEMORYSTATUS,
	PROCESS_HEAP_ENTRY,
	TAGTHREADENTRY32,
	FILE_INFO_BY_HANDLE_CLASS,
	REASON_CONTEXT,
	COMMCONFIG,
	OSVERSIONINFOEXA,
	OSVERSIONINFOEXW,
	OVERLAPPED_ENTRY,
	CONSOLE_HISTORY_INFO,
	OFSTRUCT,
	MEMORYSTATUSEX,
	CURRENCYFMTW,
	NUMBERFMTW,
	STREAM_INFO_LEVELS,
	FILE_SEGMENT_ELEMENT,
	CONSOLE_FONT_INFO,
	WIN32_FIND_DATAA,
	WIN32_FIND_DATAW,
	LARGE_INTEGER,
	CPINFOEXA,
	CPINFOEXW,
	EXCEPTION_POINTERS,
	JOBOBJECTINFOCLASS,
	DCB,
	PERFORMANCE_INFORMATION,
	STARTUPINFOW,
	PROCESS_INFORMATION,
	RTL_RUN_ONCE,
	STARTUPINFOA,
	CURRENCYFMTA,
	RTL_CONDITION_VARIABLE,
	TAGMODULEENTRY32W,
	CONSOLE_SCREEN_BUFFER_INFO,
	CONSOLE_SCREEN_BUFFER_INFOEX,
	ULARGE_INTEGER,
	POWER_REQUEST_TYPE,
	TP_POOL_STACK_INFORMATION,
	MEMORY_BASIC_INFORMATION,
	LATENCY_TIME,
	LDT_ENTRY,
	OSVERSIONINFOA,
	CPINFO,
	GET_FILEEX_INFO_LEVELS,
	PROCESS_MEMORY_COUNTERS,
	CONSOLE_SELECTION_INFO,
	WOW64_CONTEXT,
	SYSTEM_POWER_STATUS,
	OSVERSIONINFOW,
	RTL_SRWLOCK,
	TAGHEAPENTRY32,
	FILE_ID_DESCRIPTOR,
	MODULEINFO,
	TAGPROCESSENTRY32W,
	PSAPI_WS_WATCH_INFORMATION,
	DEBUG_EVENT,
	NUMBERFMTA,
	SYSTEM_LOGICAL_PROCESSOR_INFORMATION,
	BY_HANDLE_FILE_INFORMATION,
	MEMORY_RESOURCE_NOTIFICATION_TYPE,
	PSAPI_WS_WATCH_INFORMATION_EX,
	PERFORMANCE_DATA,
	IO_COUNTERS,
	COMMPROP,
	TAGACTCTXA,
	TAGACTCTXW,
	WER_REGISTER_FILE_TYPE,
	HEAP_SUMMARY,
	GENERIC_MAPPING,
	ACL,
	WELL_KNOWN_SID_TYPE,
	TOKEN_PRIVILEGES,
	TOKEN_INFORMATION_CLASS,
	SECURITY_IMPERSONATION_LEVEL,
	PRIVILEGE_SET,
	ACL_INFORMATION_CLASS,
	OBJECT_TYPE_LIST,
	LOGICAL_PROCESSOR_RELATIONSHIP,
	SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX,
	LUID,
	TOKEN_TYPE,
	AUDIT_EVENT_TYPE,
	SID_IDENTIFIER_AUTHORITY,
	SID_AND_ATTRIBUTES,
	LUID_AND_ATTRIBUTES,
	TOKEN_GROUPS,
	__STRUCT_TYPE_MAX
} struct_type_t;

static const char* struct_names[__STRUCT_TYPE_MAX]
{
	[FUNDAMENTAL_TYPE] = "",
	[MIB_UDPSTATS] = "_MIB_UDPSTATS",
	[MIB_IPNET_TABLE2] = "_MIB_IPNET_TABLE2",
	[MIB_TCPROW_LH] = "_MIB_TCPROW_LH",
	[TCP_ESTATS_TYPE] = "TCP_ESTATS_TYPE",
	[MIB_UNICASTIPADDRESS_ROW] = "_MIB_UNICASTIPADDRESS_ROW",
	[MIB_IPNETROW_LH] = "_MIB_IPNETROW_LH",
	[IP_ADAPTER_INDEX_MAP] = "_IP_ADAPTER_INDEX_MAP",
	[MIB_IPFORWARDTABLE] = "_MIB_IPFORWARDTABLE",
	[OVERLAPPED] = "_OVERLAPPED",
	[IP_PER_ADAPTER_INFO_W2KSP1] = "_IP_PER_ADAPTER_INFO_W2KSP1",
	[MIB_UNICASTIPADDRESS_TABLE] = "_MIB_UNICASTIPADDRESS_TABLE",
	[FIXED_INFO_W2KSP1] = "FIXED_INFO_W2KSP1",
	[UDP_TABLE_CLASS] = "_UDP_TABLE_CLASS",
	[MIB_IF_TABLE_LEVEL] = "_MIB_IF_TABLE_LEVEL",
	[MIB_IF_TABLE2] = "_MIB_IF_TABLE2",
	[TCPIP_OWNER_MODULE_INFO_CLASS] = "_TCPIP_OWNER_MODULE_INFO_CLASS",
	[MIB_IPFORWARDROW] = "_MIB_IPFORWARDROW",
	[IP_OPTION_INFORMATION] = "ip_option_information",
	[MIB_IPNET_ROW2] = "_MIB_IPNET_ROW2",
	[MIB_IPPATH_ROW] = "_MIB_IPPATH_ROW",
	[NET_LUID_LH] = "_NET_LUID_LH",
	[SOCKADDR_INET] = "_SOCKADDR_INET",
	[MIB_IPFORWARD_ROW2] = "_MIB_IPFORWARD_ROW2",
	[MIB_TCPSTATS_LH] = "_MIB_TCPSTATS_LH",
	[GUID] = "_GUID",
	[MIB_MULTICASTIPADDRESS_TABLE] = "_MIB_MULTICASTIPADDRESS_TABLE",
	[MIB_IPINTERFACE_TABLE] = "_MIB_IPINTERFACE_TABLE",
	[IP_ADAPTER_INFO] = "_IP_ADAPTER_INFO",
	[MIB_IPPATH_TABLE] = "_MIB_IPPATH_TABLE",
	[MIB_ANYCASTIPADDRESS_ROW] = "_MIB_ANYCASTIPADDRESS_ROW",
	[IP_INTERFACE_INFO] = "_IP_INTERFACE_INFO",
	[MIB_TCPTABLE] = "_MIB_TCPTABLE",
	[MIB_TCP6TABLE] = "_MIB_TCP6TABLE",
	[MIB_MULTICASTIPADDRESS_ROW] = "_MIB_MULTICASTIPADDRESS_ROW",
	[MIB_IPINTERFACE_ROW] = "_MIB_IPINTERFACE_ROW",
	[IP_INTERFACE_NAME_INFO_W2KSP1] = "ip_interface_name_info_w2ksp1",
	[MIB_IPSTATS_LH] = "_MIB_IPSTATS_LH",
	[MIB_TCPTABLE2] = "_MIB_TCPTABLE2",
	[TCP_TABLE_CLASS] = "_TCP_TABLE_CLASS",
	[MIB_ICMP_EX_XPSP1] = "_MIB_ICMP_EX_XPSP1",
	[MIB_UDP6ROW_OWNER_MODULE] = "_MIB_UDP6ROW_OWNER_MODULE",
	[SOCKADDR] = "sockaddr",
	[MIB_IPNETTABLE] = "_MIB_IPNETTABLE",
	[MIB_UDPROW_OWNER_MODULE] = "_MIB_UDPROW_OWNER_MODULE",
	[MIB_ICMP] = "_MIB_ICMP",
	[MIB_INVERTEDIFSTACK_TABLE] = "_MIB_INVERTEDIFSTACK_TABLE",
	[MIB_IPFORWARD_TABLE2] = "_MIB_IPFORWARD_TABLE2",
	[MIB_TCP6ROW] = "_MIB_TCP6ROW",
	[MIB_IPADDRTABLE] = "_MIB_IPADDRTABLE",
	[MIB_TCP6TABLE2] = "_MIB_TCP6TABLE2",
	[IP_ADAPTER_ADDRESSES_LH] = "_IP_ADAPTER_ADDRESSES_LH",
	[MIB_IFTABLE] = "_MIB_IFTABLE",
	[MIB_ANYCASTIPADDRESS_TABLE] = "_MIB_ANYCASTIPADDRESS_TABLE",
	[MIB_IFROW] = "_MIB_IFROW",
	[MIB_TCP6ROW_OWNER_MODULE] = "_MIB_TCP6ROW_OWNER_MODULE",
	[MIB_IF_ROW2] = "_MIB_IF_ROW2",
	[MIB_TCPROW_OWNER_MODULE] = "_MIB_TCPROW_OWNER_MODULE",
	[IP_UNIDIRECTIONAL_ADAPTER_ADDRESS] = "_IP_UNIDIRECTIONAL_ADAPTER_ADDRESS",
	[SOCKADDR_IN6] = "sockaddr_in6",
	[MIB_IFSTACK_TABLE] = "_MIB_IFSTACK_TABLE",
	[MIB_UDP6TABLE] = "_MIB_UDP6TABLE",
	[SOCKADDR_IN6_PAIR] = "_sockaddr_in6_pair",
	[MIB_UDPTABLE] = "_MIB_UDPTABLE",
	[SECURITY_ATTRIBUTES] = "_SECURITY_ATTRIBUTES",
	[INPUT_RECORD] = "_INPUT_RECORD",
	[NLSVERSIONINFO] = "_nlsversioninfo",
	[SMALL_RECT] = "_SMALL_RECT",
	[COORD] = "_COORD",
	[CHAR_INFO] = "_CHAR_INFO",
	[FILETIME] = "_FILETIME",
	[TIME_DYNAMIC_ZONE_INFORMATION] = "_TIME_DYNAMIC_ZONE_INFORMATION",
	[CONTEXT] = "_CONTEXT",
	[PROCESSOR_NUMBER] = "_PROCESSOR_NUMBER",
	[COMPUTER_NAME_FORMAT] = "_COMPUTER_NAME_FORMAT",
	[TAGHEAPLIST32] = "tagHEAPLIST32",
	[NLSVERSIONINFOEX] = "_nlsversioninfoex",
	[SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION] = "_SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION",
	[TAGACTCTX_SECTION_KEYED_DATA] = "tagACTCTX_SECTION_KEYED_DATA",
	[HEAP_INFORMATION_CLASS] = "_HEAP_INFORMATION_CLASS",
	[TAGMODULEENTRY32] = "tagMODULEENTRY32",
	[TAGPROCESSENTRY32] = "tagPROCESSENTRY32",
	[CONSOLE_READCONSOLE_CONTROL] = "_CONSOLE_READCONSOLE_CONTROL",
	[TP_CALLBACK_ENVIRON_V3] = "_TP_CALLBACK_ENVIRON_V3",
	[CONSOLE_CURSOR_INFO] = "_CONSOLE_CURSOR_INFO",
	[GROUP_AFFINITY] = "_GROUP_AFFINITY",
	[WOW64_LDT_ENTRY] = "_WOW64_LDT_ENTRY",
	[FINDEX_INFO_LEVELS] = "_FINDEX_INFO_LEVELS",
	[FINDEX_SEARCH_OPS] = "_FINDEX_SEARCH_OPS",
	[COMSTAT] = "_COMSTAT",
	[NORM_FORM] = "_NORM_FORM",
	[EXCEPTION_RECORD] = "_EXCEPTION_RECORD",
	[TIME_ZONE_INFORMATION] = "_TIME_ZONE_INFORMATION",
	[SYSTEMTIME] = "_SYSTEMTIME",
	[FILEMUIINFO] = "_FILEMUIINFO",
	[CONSOLE_FONT_INFOEX] = "_CONSOLE_FONT_INFOEX",
	[SYSTEM_INFO] = "_SYSTEM_INFO",
	[COMMTIMEOUTS] = "_COMMTIMEOUTS",
	[JOB_SET_ARRAY] = "_JOB_SET_ARRAY",
	[RTL_CRITICAL_SECTION] = "_RTL_CRITICAL_SECTION",
	[MEMORYSTATUS] = "_MEMORYSTATUS",
	[PROCESS_HEAP_ENTRY] = "_PROCESS_HEAP_ENTRY",
	[TAGTHREADENTRY32] = "tagTHREADENTRY32",
	[FILE_INFO_BY_HANDLE_CLASS] = "_FILE_INFO_BY_HANDLE_CLASS",
	[REASON_CONTEXT] = "_REASON_CONTEXT",
	[COMMCONFIG] = "_COMMCONFIG",
	[OSVERSIONINFOEXA] = "_OSVERSIONINFOEXA",
	[OSVERSIONINFOEXW] = "_OSVERSIONINFOEXW",
	[OVERLAPPED_ENTRY] = "_OVERLAPPED_ENTRY",
	[CONSOLE_HISTORY_INFO] = "_CONSOLE_HISTORY_INFO",
	[OFSTRUCT] = "_OFSTRUCT",
	[MEMORYSTATUSEX] = "_MEMORYSTATUSEX",
	[CURRENCYFMTW] = "_currencyfmtW",
	[NUMBERFMTW] = "_numberfmtW",
	[STREAM_INFO_LEVELS] = "_STREAM_INFO_LEVELS",
	[FILE_SEGMENT_ELEMENT] = "_FILE_SEGMENT_ELEMENT",
	[CONSOLE_FONT_INFO] = "_CONSOLE_FONT_INFO",
	[WIN32_FIND_DATAA] = "_WIN32_FIND_DATAA",
	[WIN32_FIND_DATAW] = "_WIN32_FIND_DATAW",
	[LARGE_INTEGER] = "_LARGE_INTEGER",
	[CPINFOEXA] = "_cpinfoexA",
	[CPINFOEXW] = "_cpinfoexW",
	[EXCEPTION_POINTERS] = "_EXCEPTION_POINTERS",
	[JOBOBJECTINFOCLASS] = "_JOBOBJECTINFOCLASS",
	[DCB] = "_DCB",
	[PERFORMANCE_INFORMATION] = "_PERFORMANCE_INFORMATION",
	[STARTUPINFOW] = "_STARTUPINFOW",
	[PROCESS_INFORMATION] = "_PROCESS_INFORMATION",
	[RTL_RUN_ONCE] = "_RTL_RUN_ONCE",
	[STARTUPINFOA] = "_STARTUPINFOA",
	[CURRENCYFMTA] = "_currencyfmtA",
	[RTL_CONDITION_VARIABLE] = "_RTL_CONDITION_VARIABLE",
	[TAGMODULEENTRY32W] = "tagMODULEENTRY32W",
	[CONSOLE_SCREEN_BUFFER_INFO] = "_CONSOLE_SCREEN_BUFFER_INFO",
	[CONSOLE_SCREEN_BUFFER_INFOEX] = "_CONSOLE_SCREEN_BUFFER_INFOEX",
	[ULARGE_INTEGER] = "_ULARGE_INTEGER",
	[POWER_REQUEST_TYPE] = "_POWER_REQUEST_TYPE",
	[TP_POOL_STACK_INFORMATION] = "_TP_POOL_STACK_INFORMATION",
	[MEMORY_BASIC_INFORMATION] = "_MEMORY_BASIC_INFORMATION",
	[LATENCY_TIME] = "LATENCY_TIME",
	[LDT_ENTRY] = "_LDT_ENTRY",
	[OSVERSIONINFOA] = "_OSVERSIONINFOA",
	[CPINFO] = "_cpinfo",
	[GET_FILEEX_INFO_LEVELS] = "_GET_FILEEX_INFO_LEVELS",
	[PROCESS_MEMORY_COUNTERS] = "_PROCESS_MEMORY_COUNTERS",
	[CONSOLE_SELECTION_INFO] = "_CONSOLE_SELECTION_INFO",
	[WOW64_CONTEXT] = "_WOW64_CONTEXT",
	[SYSTEM_POWER_STATUS] = "_SYSTEM_POWER_STATUS",
	[OSVERSIONINFOW] = "_OSVERSIONINFOW",
	[RTL_SRWLOCK] = "_RTL_SRWLOCK",
	[TAGHEAPENTRY32] = "tagHEAPENTRY32",
	[FILE_ID_DESCRIPTOR] = "FILE_ID_DESCRIPTOR",
	[MODULEINFO] = "_MODULEINFO",
	[TAGPROCESSENTRY32W] = "tagPROCESSENTRY32W",
	[PSAPI_WS_WATCH_INFORMATION] = "_PSAPI_WS_WATCH_INFORMATION",
	[DEBUG_EVENT] = "_DEBUG_EVENT",
	[NUMBERFMTA] = "_numberfmtA",
	[SYSTEM_LOGICAL_PROCESSOR_INFORMATION] = "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION",
	[BY_HANDLE_FILE_INFORMATION] = "_BY_HANDLE_FILE_INFORMATION",
	[MEMORY_RESOURCE_NOTIFICATION_TYPE] = "_MEMORY_RESOURCE_NOTIFICATION_TYPE",
	[PSAPI_WS_WATCH_INFORMATION_EX] = "_PSAPI_WS_WATCH_INFORMATION_EX",
	[PERFORMANCE_DATA] = "_PERFORMANCE_DATA",
	[IO_COUNTERS] = "_IO_COUNTERS",
	[COMMPROP] = "_COMMPROP",
	[TAGACTCTXA] = "tagACTCTXA",
	[TAGACTCTXW] = "tagACTCTXW",
	[WER_REGISTER_FILE_TYPE] = "_WER_REGISTER_FILE_TYPE",
	[HEAP_SUMMARY] = "_HEAP_SUMMARY",
	[GENERIC_MAPPING] = "_GENERIC_MAPPING",
	[ACL] = "_ACL",
	[WELL_KNOWN_SID_TYPE] = "WELL_KNOWN_SID_TYPE",
	[TOKEN_PRIVILEGES] = "_TOKEN_PRIVILEGES",
	[TOKEN_INFORMATION_CLASS] = "_TOKEN_INFORMATION_CLASS",
	[SECURITY_IMPERSONATION_LEVEL] = "_SECURITY_IMPERSONATION_LEVEL",
	[PRIVILEGE_SET] = "_PRIVILEGE_SET",
	[ACL_INFORMATION_CLASS] = "_ACL_INFORMATION_CLASS",
	[OBJECT_TYPE_LIST] = "_OBJECT_TYPE_LIST",
	[LOGICAL_PROCESSOR_RELATIONSHIP] = "_LOGICAL_PROCESSOR_RELATIONSHIP",
	[SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX] = "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX",
	[LUID] = "_LUID",
	[TOKEN_TYPE] = "_TOKEN_TYPE",
	[AUDIT_EVENT_TYPE] = "_AUDIT_EVENT_TYPE",
	[SID_IDENTIFIER_AUTHORITY] = "_SID_IDENTIFIER_AUTHORITY",
	[SID_AND_ATTRIBUTES] = "_SID_AND_ATTRIBUTES",
	[LUID_AND_ATTRIBUTES] = "_LUID_AND_ATTRIBUTES",
	[TOKEN_GROUPS] = "_TOKEN_GROUPS",
};

typedef enum : uint8_t
{
	IPHLPAPI,
	NTDLL,
	KERNELBASE,
	KERNEL32,
	__DLL_MAX,
	UNDEFINED
} dll_id_t;

static dll_t dlls[__DLL_MAX] = 
{
	[IPHLPAPI] =
		{
			.name = "iphlpapi.dll", .apicalls = iphlpapi_apicalls, .apicalls_size = iphlpapi_apicalls_size
		},
	[KERNEL32] =
		{
			.name = "kernel32.dll", .apicalls = kernel32_apicalls, .apicalls_size = kernel32_apicalls_size
		},
	[KERNELBASE] =
		{
			.name = "kernelbase.dll", .apicalls = kernelbase_apicalls, .apicalls_size = kernelbase_apicalls_size
		},
	[NTDLL] =
		{
			.name = "ntdll.dll"
		},
};

