// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$DGADHCHFLKN @ RVA 0x302F364

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__DGADHCHFLKN
          (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,OGNCMFBMBMB_o *FJALLCAJNJN,
          MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565ce8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<BaseScrollItem>_Add__);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<BaseScrollItem>__);
    DAT_04565ce8 = 1;
  }
  pNVar1 = (__this->fields)._CIGDAHHAALG_k__BackingField;
  if ((pNVar1 != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
     (DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     FJALLCAJNJN != (OGNCMFBMBMB_o *)0x0)) {
    pNVar1 = (Nekki_SF2_GUI_BaseScrollItem_o *)
             OGNCMFBMBMB__KNMENIBLFGF<object>
                       (FJALLCAJNJN,DKIDCBPNMPD,(__this->fields)._LDCCMOFCEAN_k__BackingField,
                        Method_OGNCMFBMBMB_KNMENIBLFGF<BaseScrollItem>__);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).GNEMEBABBFF;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Add
                (__this_00,(Il2CppObject *)pNVar1,
                 Method_System_Collections_Generic_HashSet<BaseScrollItem>_Add__);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

