
#include "CTrace.hpp"


void CFuncTrace::trace(const char *szFormat, ...){
	va_list vaArguments;
	va_start(vaArguments, szFormat);
	char szOutput[10000];
	vsnprintf(szOutput, sizeof(szOutput), szFormat, vaArguments);
	cout << m_szFunctionName + " "  + szOutput << endl;
	va_end(vaArguments);
}

