// KBFGKFAKGPP$$AAICFBHOPJK @ RVA 0x32EF980

void KBFGKFAKGPP__AAICFBHOPJK(KBFGKFAKGPP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  GLCAPECMBLM_o *AHCMAIOOIKM;
  MethodInfo *in_x3;
  
  if ((DAT_04567668 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    DAT_04567668 = 1;
  }
  __this_00 = (__this->fields).FIFCACFAFPH;
  while( true ) {
    if (__this_00 == (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((__this_00->fields)._size < 1) break;
    AHCMAIOOIKM = (GLCAPECMBLM_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,0,
                             Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    KBFGKFAKGPP__LLKFLBKKGAK(__this,AHCMAIOOIKM,0,in_x3);
    __this_00 = (__this->fields).FIFCACFAFPH;
  }
  return;
}

