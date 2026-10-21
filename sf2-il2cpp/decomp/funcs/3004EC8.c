// GNJBJKEJEGC$$NDNPGAKJLHM @ RVA 0x3004EC8

void GNJBJKEJEGC__NDNPGAKJLHM(GNJBJKEJEGC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Clear__);
    DAT_04565b45 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_float>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_float>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

