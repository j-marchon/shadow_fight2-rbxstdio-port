// GNJBJKEJEGC$$KNMENIBLFGF @ RVA 0x3004FB4

float GNJBJKEJEGC__KNMENIBLFGF
                (GNJBJKEJEGC_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  float *pfVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  float local_24;
  
  if ((DAT_04565b47 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__);
    DAT_04565b47 = 1;
  }
  local_24 = 0.0;
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_float>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)PMACBPAMPJA,&local_24,
                       Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__);
    pfVar1 = &local_24;
    if (!bVar2) {
      pfVar1 = &(__this->fields).DCBEAHGEHKL;
    }
    return *pfVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

