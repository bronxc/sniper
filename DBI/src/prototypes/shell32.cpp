// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "pyrebox.h"

libcall_info_t shell32_info[] = {
	{ "AssocCreateForClasses",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rgClasses", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ASSOCIATIONELEMENT", 96, IN },
		{1, "cClasses", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "AssocGetDetailsOfPropKey",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "pkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagpropertykey", 160, IN },
		{3, "pv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, OUT },
		{4, "pfFoundPropKey", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CDefFolderMenu_Create2",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "apidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{4, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{5, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "nKeys", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ahkeys", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "ppcm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IContextMenu", 32, OUT },
	}
	},
	{ "CIDLData_CreateFromIDArray",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "apidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{3, "ppdtobj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDataObject", 32, OUT },
	}
	},
	{ "CommandLineToArgvW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{0, "lpCmdLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pNumArgs", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DAD_AutoScroll",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pad", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AUTO_SCROLL_DATA", 384, IN },
		{2, "pptNow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "DAD_DragEnterEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndTarget", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ptStart", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "DAD_DragEnterEx2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndTarget", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ptStart", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{2, "pdtObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
	}
	},
	{ "DAD_DragLeave",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DAD_DragMove",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "DAD_SetDragImage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "him", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pptOffset", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "DAD_ShowDragImage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DllGetClassObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "DllInstall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bInstall", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszCmdLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DoEnvironmentSubstA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cchSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DoEnvironmentSubstW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DragAcceptFiles",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fAccept", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DragFinish",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DragQueryFileA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DragQueryFileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DragQueryPoint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "DriveType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iDrive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DuplicateIcon",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtractAssociatedIconA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszIconPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "piIcon", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ExtractAssociatedIconExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszIconPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "piIconIndex", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "piIconId", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ExtractAssociatedIconExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "piIconIndex", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "piIconId", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ExtractAssociatedIconW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "piIcon", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ExtractIconA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszExeFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nIconIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtractIconExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "phiconLarge", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "phiconSmall", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtractIconExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "phiconLarge", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "phiconSmall", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtractIconW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszExeFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nIconIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindExecutableA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpResult", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FindExecutableW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetCurrentProcessExplicitAppUserModelID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "AppID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "GetFileNameFromBrowse",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchFilePath", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszWorkingDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pszDefExt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pszFilters", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "pszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ILAppendID",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pmkid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHITEMID", 24, IN },
		{2, "fAppend", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ILClone",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILCloneFirst",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILCombine",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidl2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILCreateFromPathA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ILCreateFromPathW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ILFindChild",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidlParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidlChild", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILFindLastID",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILGetNext",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILGetSize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILIsEqual",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidl2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILIsParent",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidl2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "fImmediate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ILLoadFromStreamEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILRemoveLastID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, INOUT },
	}
	},
	{ "ILSaveToStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "InitNetworkAddressControl",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "IsLFNDriveA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "IsLFNDriveW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "IsNetDrive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iDrive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsUserAnAdmin",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "OpenRegStream",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, OUT },
		{0, "hkey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszSubkey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PathCleanupSpec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "PathGetShortPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pszLongPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "PathIsExe",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PathIsSlowA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PathIsSlowW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PathMakeUniqueName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszUniqueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "cchMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszTemplate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszLongPlate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pszDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PathQualify",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PathResolve",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{1, "dirs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "fFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PathYetAnotherMakeUniqueName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszUniqueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszShort", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszFileSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PickIconDlg",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cchIconPath", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "piIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PifMgr_CloseProperties",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hProps", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PifMgr_GetProperties",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProps", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszGroup", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpProps", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbProps", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PifMgr_OpenProperties",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszApp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszPIF", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hInf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PifMgr_SetProperties",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProps", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszGroup", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpProps", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbProps", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReadCabinetState",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CABINETSTATE", 80, OUT },
		{1, "cLength", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RealDriveType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iDrive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "fOKToHitNet", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RestartDialog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPrompt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwReturn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RestartDialogEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPrompt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwReturn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwReasonCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCurrentProcessExplicitAppUserModelID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "AppID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHAddDefaultPropertiesByExt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszExt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pPropStore", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
	}
	},
	{ "SHAddFromPropSheetExtArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hpsxa", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpfnAddPage", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHAddToRecentDocs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SHAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHAppBarMessage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwMessage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AppBarData", 288, IN },
	}
	},
	{ "SHAssocEnumHandlers",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszExtra", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "afFilter", NKT_DBOBJCLASS_Enumeration, "ASSOC_FILTER", 32, IN },
		{2, "ppEnumHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumAssocHandlers", 32, IN },
	}
	},
	{ "SHAssocEnumHandlersForProtocolByApplication",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "protocol", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "enumHandlers", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHBindToFolderIDListParent",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psfRoot", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{4, "ppidlLast", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHBindToFolderIDListParentEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psfRoot", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "ppbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{5, "ppidlLast", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHBindToObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHBindToParent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "ppidlLast", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHBrowseForFolderA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_browseinfoA", 256, IN },
	}
	},
	{ "SHBrowseForFolderW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_browseinfoW", 256, IN },
	}
	},
	{ "SHChangeNotification_Lock",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hChange", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwProcId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{3, "plEvent", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SHChangeNotification_Unlock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hLock", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHChangeNotify",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "wEventId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwItem1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwItem2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SHChangeNotifyDeregister",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHChangeNotifyRegister",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fSources", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fEvents", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pshcne", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHChangeNotifyEntry", 64, IN },
	}
	},
	{ "SHChangeNotifyRegisterThread",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "status", NKT_DBOBJCLASS_Enumeration, "SCNRT_STATUS", 32, IN },
	}
	},
	{ "SHCloneSpecialIDList",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fCreate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHCLSIDFromString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "SHCoCreateInstance",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszCLSID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateAssociationRegistration",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateDataObject",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "apidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{3, "pdtInner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateDefaultContextMenu",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdcm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DEFCONTEXTMENU", 288, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateDefaultExtractIcon",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateDefaultPropertiesOp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
		{1, "ppFileOp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IFileOperation", 32, OUT },
	}
	},
	{ "SHCreateDirectory",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHCreateDirectoryExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "SHCreateDirectoryExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "SHCreateFileExtractIconW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "SHCreateItemFromIDList",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateItemFromParsingName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateItemFromRelativeName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psiParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
		{1, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateItemInKnownFolder",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "kfid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwKFFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateItemWithParent",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "psfParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{2, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppvItem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateProcessAsUserW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pscpi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHCREATEPROCESSINFOW", 416, IN },
	}
	},
	{ "SHCreatePropSheetExtArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "max_iface", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHCreateQueryCancelAutoPlayMoniker",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppmoniker", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, OUT },
	}
	},
	{ "SHCreateShellFolderView",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcsfv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SFV_CREATE", 128, IN },
		{1, "ppsv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellView", 32, OUT },
	}
	},
	{ "SHCreateShellFolderViewEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcsfv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CSFV", 224, IN },
		{1, "ppsv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellView", 32, OUT },
	}
	},
	{ "SHCreateShellItem",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "psfParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{2, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{3, "ppsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellItem", 32, OUT },
	}
	},
	{ "SHCreateShellItemArray",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{2, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{4, "ppsiItemArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellItemArray", 32, OUT },
	}
	},
	{ "SHCreateShellItemArrayFromDataObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateShellItemArrayFromIDLists",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgpidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{2, "ppsiItemArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellItemArray", 32, OUT },
	}
	},
	{ "SHCreateShellItemArrayFromShellItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateStdEnumFmtEtc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cfmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "afmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{2, "ppenumFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumFORMATETC", 32, OUT },
	}
	},
	{ "SHDefExtractIconA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "iIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phiconLarge", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "phiconSmall", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "nIconSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHDefExtractIconW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phiconLarge", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "phiconSmall", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "nIconSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHDestroyPropSheetExtArray",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hpsxa", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHDoDragDrop",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdata", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{2, "pdsrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDropSource", 32, IN },
		{3, "dwEffect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pdwEffect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "Shell_GetCachedImageIndex",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uIconFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Shell_GetCachedImageIndexA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uIconFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Shell_GetCachedImageIndexW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uIconFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Shell_GetImageLists",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "phiml", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "phimlSmall", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "Shell_MergeMenus",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hmDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hmSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uInsert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uIDAdjust", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "uIDAdjustMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Shell_NotifyIconA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMessage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_NOTIFYICONDATAA", 4064, IN },
	}
	},
	{ "Shell_NotifyIconGetRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "identifier", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_NOTIFYICONIDENTIFIER", 224, IN },
		{1, "iconLocation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "Shell_NotifyIconW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMessage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_NOTIFYICONDATAW", 7648, IN },
	}
	},
	{ "ShellAboutA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szApp", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szOtherStuff", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShellAboutW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szApp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szOtherStuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShellExecuteA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpOperation", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpParameters", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "lpDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "nShowCmd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShellExecuteExA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pExecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHELLEXECUTEINFOA", 480, IN },
	}
	},
	{ "ShellExecuteExW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pExecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHELLEXECUTEINFOW", 480, IN },
	}
	},
	{ "ShellExecuteW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpOperation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpParameters", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "lpDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "nShowCmd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShellMessageBoxA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAppInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpcText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpcTitle", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "fuStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShellMessageBoxW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAppInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpcText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpcTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "fuStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHEmptyRecycleBinA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszRootPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHEmptyRecycleBinW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszRootPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHEnumerateUnreadMailAccountsW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKeyUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszMailAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchMailAddress", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHEvaluateSystemCommandTemplate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszCmdTemplate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppszApplication", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{2, "ppszCommandLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{3, "ppszParameters", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "SHFileOperationA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileOp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEOPSTRUCTA", 240, IN },
	}
	},
	{ "SHFileOperationW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileOp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEOPSTRUCTW", 240, IN },
	}
	},
	{ "SHFind_InitMenuPopup",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IContextMenu", 32, OUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwndOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "idCmdFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "idCmdLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHFindFiles",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidlSaveFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "SHFlushSFCache",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "SHFormatDrive",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "drive", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fmtID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SHFreeNameMappings",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hNameMappings", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetAttributesFromDataObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "dwAttributeMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "pcItems", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "SHGetDataFromIDListA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "nFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cb", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetDataFromIDListW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "nFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cb", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetDesktopFolder",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppshf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellFolder", 32, OUT },
	}
	},
	{ "SHGetDiskFreeSpaceExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszDirectoryName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pulFreeBytesAvailableToCaller", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, IN },
		{2, "pulTotalNumberOfBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, IN },
		{3, "pulTotalNumberOfFreeBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, IN },
	}
	},
	{ "SHGetDiskFreeSpaceExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszDirectoryName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pulFreeBytesAvailableToCaller", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, IN },
		{2, "pulTotalNumberOfBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, IN },
		{3, "pulTotalNumberOfFreeBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, IN },
	}
	},
	{ "SHGetDriveMedia",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszDrive", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pdwMediaContent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "SHGetFileInfoA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psfi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEINFOA", 2816, IN },
		{3, "cbFileInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetFileInfoW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psfi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEINFOW", 5536, IN },
		{3, "cbFileInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetFolderLocation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHGetFolderPathA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SHGetFolderPathAndSubDirA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pszSubDir", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SHGetFolderPathAndSubDirW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pszSubDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHGetFolderPathW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHGetIconOverlayIndexA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetIconOverlayIndexW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetIDListFromObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHGetImageList",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iImageList", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "SHGetInstanceExplorer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppunk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, OUT },
	}
	},
	{ "SHGetItemFromDataObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdtobj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "dwFlags", NKT_DBOBJCLASS_Enumeration, "DATAOBJ_GET_ITEM_FLAGS", 32, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHGetItemFromObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHGetKnownFolderIDList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rfid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHGetKnownFolderItem",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rfid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "flags", NKT_DBOBJCLASS_Enumeration, "KNOWN_FOLDER_FLAG", 32, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHGetKnownFolderPath",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rfid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "SHGetLocalizedName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszResModule", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{3, "pidsRes", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "SHGetMalloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMalloc", 32, IN },
	}
	},
	{ "SHGetNameFromIDList",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "sigdnName", NKT_DBOBJCLASS_Enumeration, "_SIGDN", 32, IN },
		{2, "ppszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "SHGetNewLinkInfoA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszLinkTo", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszDir", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pfMustCopy", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetNewLinkInfoW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszLinkTo", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pfMustCopy", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetPathFromIDListA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SHGetPathFromIDListEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cchPath", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uOpts", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetPathFromIDListW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHGetPropertyStoreForWindow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHGetPropertyStoreFromIDList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "flags", NKT_DBOBJCLASS_Enumeration, "GETPROPERTYSTOREFLAGS", 32, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHGetPropertyStoreFromParsingName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{2, "flags", NKT_DBOBJCLASS_Enumeration, "GETPROPERTYSTOREFLAGS", 32, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHGetRealIDL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidlSimple", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "ppidlReal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHGetSetFolderCustomSettings",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pfcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SHFOLDERCUSTOMSETTINGS", 480, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwReadWrite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetSetSettings",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpss", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SHELLSTATEW", 232, INOUT },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bSet", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetSettings",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "psfs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SHELLFLAGSTATE", 16, IN },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetSpecialFolderLocation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHGetSpecialFolderPathA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "fCreate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetSpecialFolderPathW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "fCreate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetStockIconInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "siid", NKT_DBOBJCLASS_Enumeration, "SHSTOCKICONID", 32, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHSTOCKICONINFO", 4288, IN },
	}
	},
	{ "SHGetTemporaryPropertyForItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
		{1, "propkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "SHGetUnreadMailCountW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKeyUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszMailAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pdwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{4, "pszShellExecuteCommand", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "cchShellExecuteCommand", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHHandleUpdateImage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlExtra", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "SHILCreateFromPath",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
		{2, "rgfInOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SHInvokePrinterCommandA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuf1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpBuf2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "fModal", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHInvokePrinterCommandW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuf1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpBuf2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "fModal", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHIsFileAvailableOffline",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pdwStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "SHLimitInputEdit",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndEdit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
	}
	},
	{ "SHLoadInProc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "SHLoadNonloadedIconOverlayIdentifiers",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "SHMapPIDLToSystemImageListIndex",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pshf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 32, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "piIndexSel", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SHMultiFileProperties",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdtobj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHObjectProperties",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "shopObjectType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszPropertyPage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHOpenFolderAndSelectItems",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "apidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHOpenPropSheetW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ahkeys", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "ckeys", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pclsidDefault", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "pdtobj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{5, "psb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellBrowser", 32, IN },
		{6, "pStartPage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHOpenWithDialog",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "poainfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_openasinfo", 96, IN },
	}
	},
	{ "SHParseDisplayName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{2, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
		{3, "sfgaoIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "psfgaoOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "SHPathPrepareForWriteA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "punkEnableModless", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHPathPrepareForWriteW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "punkEnableModless", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHPropStgCreate",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertySetStorage", 32, IN },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ppstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 32, IN },
		{7, "puCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SHPropStgReadMultiple",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStorage", 32, IN },
		{1, "uCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cpspec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgpspec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPSPEC", 64, IN },
		{4, "rgvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "SHPropStgWriteMultiple",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStorage", 32, IN },
		{1, "puCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "cpspec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgpspec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPSPEC", 64, IN },
		{4, "rgvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{5, "propidNameFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHQueryRecycleBinA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszRootPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pSHQueryRBInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHQUERYRBINFO", 160, IN },
	}
	},
	{ "SHQueryRecycleBinW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszRootPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pSHQueryRBInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHQUERYRBINFO", 160, IN },
	}
	},
	{ "SHQueryUserNotificationState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pquns", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "QUERY_USER_NOTIFICATION_STATE", 32, OUT },
	}
	},
	{ "SHRemoveLocalizedName",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHReplaceFromPropSheetExtArray",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hpsxa", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPageID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpfnReplaceWith", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHResolveLibrary",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psiLibrary", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
	}
	},
	{ "SHRestricted",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "rest", NKT_DBOBJCLASS_Enumeration, "RESTRICTIONS", 32, IN },
	}
	},
	{ "SHSetDefaultProperties",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
		{2, "dwFileOpFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfops", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IFileOperationProgressSink", 32, IN },
	}
	},
	{ "SHSetFolderPathA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SHSetFolderPathW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHSetInstanceExplorer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "SHSetKnownFolderPath",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rfid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHSetLocalizedName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszResModule", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "idsRes", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHSetTemporaryPropertyForItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
		{1, "propkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{2, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "SHSetUnreadMailCountW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszMailAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszShellExecuteCommand", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHShellFolderView_Message",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndMain", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHShowManageLibraryUI",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psiLibrary", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 32, IN },
		{1, "hwndOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszInstruction", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "lmdOptions", NKT_DBOBJCLASS_Enumeration, "LIBRARYMANAGEDIALOGOPTIONS", 32, IN },
	}
	},
	{ "SHSimpleIDListFromPath",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHStartNetConnectionDialogW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszRemoteName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHTestTokenMembership",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulRID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHUpdateImageA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pszHashItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "iIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "iImageIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHUpdateImageW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pszHashItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "iImageIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHValidateUNC",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "fConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SignalFileOpen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "StgMakeUniqueName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstgParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "pszFileSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "StrChrA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "StrChrIA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "StrChrIW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "StrChrW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "StrCmpNA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "psz2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StrCmpNIA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "psz2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StrCmpNIW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "psz2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StrCmpNW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "psz2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StrRChrA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszEnd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "StrRChrIA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszEnd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "StrRChrIW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszEnd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "StrRChrW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszEnd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "StrRStrIA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszSource", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszLast", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszSrch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "StrRStrIW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszSource", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszLast", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszSrch", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "StrStrA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszSrch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "StrStrIA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszSrch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "StrStrIW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszSrch", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "StrStrW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszSrch", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "Win32DeleteFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WriteCabinetState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CABINETSTATE", 80, IN },
	}
	},
};
unsigned shell32arraySize = (sizeof(shell32_info) / sizeof(shell32_info[0]));