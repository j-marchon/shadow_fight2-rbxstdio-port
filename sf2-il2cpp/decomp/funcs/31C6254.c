// FPLCEOJCPOD$$LDJLMEFOMLG @ RVA 0x31C6254

int32_t FPLCEOJCPOD__LDJLMEFOMLG(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Count__);
    DAT_04566c30 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BJJAPALEEBD;
                    /* try { // try from 032c6284 to 033c62ab has its CatchHandler @ 032c67f4 */
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Count__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

