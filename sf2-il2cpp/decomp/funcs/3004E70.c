// GNJBJKEJEGC$$GAKPLIDPEKM @ RVA 0x3004E70

bool GNJBJKEJEGC__GAKPLIDPEKM(GNJBJKEJEGC_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if ((DAT_04565b44 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    DAT_04565b44 = 1;
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

