// Nekki.SF2.GUI.SimpleScroll$$UsePoolPrefab @ RVA 0x302EE84

void Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_String_o *PMACBPAMPJA,
               Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o **ppSVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *pSVar4;
  Nekki_SF2_GUI_SimpleScroll_c *pNVar5;
  Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this_00;
  MethodInfo *method_00;
  Il2CppObject *local_28;
  
  if ((DAT_04565ce0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TryGetValue__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_TypeInfo);
    DAT_04565ce0 = 1;
  }
  if ((__this->fields).HBNEMFAMCED ==
      (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)0x0) {
    ppSVar1 = &(__this->fields).HBNEMFAMCED;
    pSVar4 = (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)
             OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  pNVar5 = __this[1].klass;
  pNVar2 = __this + 1;
  if (pNVar5 == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
    pNVar5 = (Nekki_SF2_GUI_SimpleScroll_c *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<object,_object>___ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)pNVar5,
               Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>__ctor__
              );
    pNVar2->klass = pNVar5;
    thunk_FUN_01c20e04(pNVar2,pNVar5);
    pNVar5 = pNVar2->klass;
    local_28 = (Il2CppObject *)0x0;
    if (pNVar5 == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) goto LAB_0312efd4;
  }
  local_28 = (Il2CppObject *)0x0;
  method_00 = 
  Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TryGetValue__;
  bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)pNVar5,
                     (Il2CppObject *)PMACBPAMPJA,&local_28,
                     (MethodInfo_2334730 *)
                     Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TryGetValue__
                    );
  if (!bVar3) {
    pNVar5 = pNVar2->klass;
    __this_00 = (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_TypeInfo);
    Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD___ctor(__this_00,DKIDCBPNMPD,PMACBPAMPJA,method_00);
    if (pNVar5 == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
LAB_0312efd4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pNVar5,
               (Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_Add__)
    ;
  }
  return;
}

