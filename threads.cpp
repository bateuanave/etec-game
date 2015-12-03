#include "globals.h"
bool done = false;
DWORD WINAPI ThreadProc(void* lpv)
{
      while(1){
      load_sound();
      Sleep(56);
      }
  return 0;
}
int threads(){
     DWORD dwThreadID;
     CreateThread(NULL, NULL, &ThreadProc, NULL, NULL, &dwThreadID);
}
