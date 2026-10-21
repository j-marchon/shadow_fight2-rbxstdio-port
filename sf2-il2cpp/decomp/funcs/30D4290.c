// MKIBNAAANPO$$ALPHLMLJFJJ @ RVA 0x30D4290

bool MKIBNAAANPO__ALPHLMLJFJJ(MKIBNAAANPO_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  int index;
  
  if ((DAT_0456631c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    __this = (MKIBNAAANPO_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_0456631c = 1;
  }
  if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
    __this_00 = (BHHBEIACGPB->fields).BDCBJJGNPMC;
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      if ((__this_00->fields)._size < 1) {
        return false;
      }
      index = 0;
      while( true ) {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
        __this = (MKIBNAAANPO_o *)0x0;
        if (pIVar1 == (Il2CppObject *)0x0) break;
        if ((*(char *)&pIVar1[0xb].klass != '\0') ||
           (index = index + 1, (__this_00->fields)._size <= index)) {
          return *(char *)&pIVar1[0xb].klass != '\0';
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  return false;
}

