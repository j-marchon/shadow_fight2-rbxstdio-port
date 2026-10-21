// ACHLOMELAJE$$IPJLBFKFOOD @ RVA 0x30681E4

AJDHCLBLGMI_o *
ACHLOMELAJE__IPJLBFKFOOD(ACHLOMELAJE_o *__this,System_String_o *CBIADCOKAIP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  AJDHCLBLGMI_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar3;
  System_String_o *key;
  AJDHCLBLGMI_Fields *pAVar4;
  AJDHCLBLGMI_o *local_28;
  
  if ((DAT_04565f07 & 1) == 0) {
    FUN_01bab630(&AJDHCLBLGMI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_TryGetValue__);
    DAT_04565f07 = 1;
  }
  local_28 = (AJDHCLBLGMI_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DINIOGDLEHP;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)CBIADCOKAIP,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_TryGetValue__
                      );
    if (bVar1) {
      return local_28;
    }
    __this_00 = (AJDHCLBLGMI_o *)thunk_FUN_01bda818(AJDHCLBLGMI_TypeInfo);
    AJDHCLBLGMI___ctor(__this_00,(MethodInfo *)0x0);
    pCVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       (CBIADCOKAIP,(MethodInfo *)0x0);
    if (__this_00 != (AJDHCLBLGMI_o *)0x0) {
      pAVar4 = &__this_00->fields;
      pAVar4->JIJLBFGKNJK = pCVar3;
      thunk_FUN_01c20e04(pAVar4,pCVar3);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).DINIOGDLEHP;
      local_28 = __this_00;
      key = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                      (pAVar4->JIJLBFGKNJK,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)key,(Il2CppObject *)local_28,
                   Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_Add__);
        return local_28;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

