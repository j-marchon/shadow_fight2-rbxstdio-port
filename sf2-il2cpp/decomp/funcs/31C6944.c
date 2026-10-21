// FPLCEOJCPOD$$NDNPGAKJLHM @ RVA 0x31C6944

void FPLCEOJCPOD__NDNPGAKJLHM(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c35 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Clear__);
    DAT_04566c35 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BJJAPALEEBD;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

