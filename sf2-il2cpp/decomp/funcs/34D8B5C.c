// DCHAJIMIFHP$$MPFFOIIBAKO @ RVA 0x34D8B5C

void DCHAJIMIFHP__MPFFOIIBAKO
               (DCHAJIMIFHP_o *__this,System_String_o *PMACBPAMPJA,
               System_Action_KEFHDOHHHML__o *EKDIECDFOIO,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__c *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *value;
  
  if ((DAT_045686f2 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                );
    DAT_045686f2 = 1;
  }
  FDAHDCHADGJ__FFPEGNCKDLO((System_Delegate_o *)EKDIECDFOIO,(MethodInfo *)0x0);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                      );
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if (!bVar2) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar3,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)EKDIECDFOIO,
                   Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_Add__);
        return;
      }
      pSVar4 = (System_Delegate_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                          Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                         );
      pSVar4 = System_Delegate__Combine(pSVar4,(System_Delegate_o *)EKDIECDFOIO,(MethodInfo *)0x0);
      pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
      if (pSVar4 == (System_Delegate_o *)0x0) {
        value = (Il2CppObject *)0x0;
      }
      else {
        value = (Il2CppObject *)thunk_FUN_01bda71c(pSVar4,System_Action<KEFHDOHHHML>_TypeInfo);
        if (value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar4,pSVar1);
        }
      }
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar3,(Il2CppObject *)PMACBPAMPJA,value,
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

