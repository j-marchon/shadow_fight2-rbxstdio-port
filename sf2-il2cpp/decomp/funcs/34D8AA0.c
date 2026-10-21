// DCHAJIMIFHP$$MJKJHFHHFNG @ RVA 0x34D8AA0

void DCHAJIMIFHP__MJKJHFHHFNG
               (DCHAJIMIFHP_o *__this,System_String_o *PMACBPAMPJA,KEFHDOHHHML_o *NONPLOOOOAG,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  
  if ((DAT_045686f1 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                );
    DAT_045686f1 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                      );
    if (bVar1) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).HOECLHGDCCJ;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_035d8b58;
      pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)PMACBPAMPJA,
                          Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                         );
      if (pIVar3 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035d8b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pIVar3[1].monitor)(pIVar3[4].klass,NONPLOOOOAG,pIVar3[2].monitor);
        return;
      }
    }
    return;
  }
LAB_035d8b58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

