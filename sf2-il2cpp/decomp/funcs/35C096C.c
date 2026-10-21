// IKCANHIFLGJ$$KHONLKFPFLF @ RVA 0x35C096C

void IKCANHIFLGJ__KHONLKFPFLF(IKCANHIFLGJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__string__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f18 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_Clear__);
    DAT_04568f18 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).AIOEOHCLJIL;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
    System_Collections_Generic_Dictionary<long,_object>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<long,_string>_Clear__);
    (__this->fields).KOKABJPFGCA = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

