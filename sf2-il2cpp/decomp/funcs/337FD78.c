// IDDIABHBDEE$$COPJJLMNNOK @ RVA 0x337FD78

bool IDDIABHBDEE__COPJJLMNNOK
               (System_String_o *NHBDCPODDKB,System_String_o *EFHKBAEFDCO,MethodInfo *method)

{
  bool bVar1;
  System_String_array *source;
  System_Collections_Generic_List_TSource__o *__this;
  
  if ((DAT_04567bb8 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    DAT_04567bb8 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(NHBDCPODDKB,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(EFHKBAEFDCO,(MethodInfo *)0x0);
    if (!bVar1) {
      if (NHBDCPODDKB != (System_String_o *)0x0) {
        source = System_String__Split(NHBDCPODDKB,0x7c,1,(MethodInfo *)0x0);
        __this = System_Linq_Enumerable__ToList<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            Method_System_Linq_Enumerable_ToList<string>__);
        if (__this != (System_Collections_Generic_List_TSource__o *)0x0) {
          bVar1 = System_Collections_Generic_List<object>__Contains
                            ((System_Collections_Generic_List_object__o *)__this,
                             (Il2CppObject *)EFHKBAEFDCO,
                             Method_System_Collections_Generic_List<string>_Contains__);
          return bVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return true;
}

