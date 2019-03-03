// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "json.h"
#pragma comment(lib,"json_vc71_libmtd.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	char t_strRecv[1024] = "{\"DeviceType\":\"Printer\",\"Func\":\"SetParameter\",\"Mode\":\"Debug\",\"Module\":\"Machine\",\"Param\":{\"Command\":1,\"OutputSignal\":\"1000000000000000\"}}";
	Json::Reader reader;  
	Json::Value  root; 
	if (!reader.parse(t_strRecv,root,false))  
	{  
		return 1;  
	}

	int aa=root["aaa"].asInt();
	return 0;
}

