// OGNCMFBMBMB$$CEKCKIDJLCL @ RVA 0x33C475C

OGNCMFBMBMB_AFGELJDFHIF_o *
OGNCMFBMBMB__CEKCKIDJLCL(OGNCMFBMBMB_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  OGNCMFBMBMB_AFGELJDFHIF_o *__this_00;
  undefined1 auVar3 [16];
  OGNCMFBMBMB_AFGELJDFHIF_o *local_28;
  
  if ((DAT_04567de6 & 1) == 0) {
    FUN_01bab630(&OGNCMFBMBMB_AFGELJDFHIF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TryGetValue__
                );
    DAT_04567de6 = 1;
  }
  local_28 = (OGNCMFBMBMB_AFGELJDFHIF_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EMOGELNBIOO;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TryGetValue__
                      );
    if (!bVar1) {
      auVar3 = thunk_FUN_01bda818(OGNCMFBMBMB_AFGELJDFHIF_TypeInfo);
      __this_00 = auVar3._0_8_;
      OGNCMFBMBMB_AFGELJDFHIF___ctor(__this_00,auVar3._8_8_);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EMOGELNBIOO;
      local_28 = __this_00;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_034c4820;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)__this_00,
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Add__
                );
    }
    return local_28;
  }
LAB_034c4820:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

