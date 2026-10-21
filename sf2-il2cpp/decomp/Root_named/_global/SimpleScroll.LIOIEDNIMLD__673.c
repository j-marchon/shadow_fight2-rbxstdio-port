// TypeDefIndex 673
// Namespace: 
// private class SimpleScroll.LIOIEDNIMLD
// Fields:
//   private HashSet<BaseScrollItem> GNEMEBABBFF; // 0x10
//   private BaseScrollItem <CIGDAHHAALG>k__BackingField; // 0x18
//   private string <LDCCMOFCEAN>k__BackingField; // 0x20

// ===== public void KIANJPCPEGE(BaseScrollItem IKKAMAMLIKA, OGNCMFBMBMB FJALLCAJNJN)  [RVA 0x302EDEC]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$KIANJPCPEGE @ RVA 0x302EDEC

void Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__KIANJPCPEGE
               (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,OGNCMFBMBMB_o *FJALLCAJNJN,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565ce5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<BaseScrollItem>_Remove__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<BaseScrollItem>__);
    DAT_04565ce5 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).GNEMEBABBFF;
  bVar1 = false;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Remove
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_HashSet<BaseScrollItem>_Remove__);
    if (FJALLCAJNJN != (OGNCMFBMBMB_o *)0x0) {
      OGNCMFBMBMB__LEAPFADCELA<object>
                (FJALLCAJNJN,(Il2CppObject *)IKKAMAMLIKA,
                 (__this->fields)._LDCCMOFCEAN_k__BackingField,
                 Method_OGNCMFBMBMB_LEAPFADCELA<BaseScrollItem>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}


// ===== public string MIDGLAMEMPA()  [RVA 0x302F408]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$MIDGLAMEMPA @ RVA 0x302F408

System_String_o *
Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__MIDGLAMEMPA
          (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,MethodInfo *method)

{
  return (__this->fields)._LDCCMOFCEAN_k__BackingField;
}


// ===== public bool BBEGHHMIKAO(BaseScrollItem IKKAMAMLIKA)  [RVA 0x302A80C]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$BBEGHHMIKAO @ RVA 0x302A80C

bool Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__BBEGHHMIKAO
               (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565ce6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<BaseScrollItem>_Contains__);
    DAT_04565ce6 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).GNEMEBABBFF;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_HashSet<BaseScrollItem>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int BJEEIIJCKGC()  [RVA 0x302F410]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$BJEEIIJCKGC @ RVA 0x302F410

int32_t Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__BJEEIIJCKGC
                  (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_BaseScrollItem__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04565ce7 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_HashSet<BaseScrollItem>_get_Count__);
    DAT_04565ce7 = 1;
  }
  pSVar1 = (__this->fields).GNEMEBABBFF;
  if (pSVar1 != (System_Collections_Generic_HashSet_BaseScrollItem__o *)0x0) {
    return (pSVar1->fields)._count;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public BaseScrollItem DGADHCHFLKN(OGNCMFBMBMB FJALLCAJNJN)  [RVA 0x302F364]
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


// ===== private void CKMFFODCJFJ(BaseScrollItem CJNHFNHJHPE)  [RVA 0x302F458]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$CKMFFODCJFJ @ RVA 0x302F458

void Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__CKMFFODCJFJ
               (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CIGDAHHAALG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public BaseScrollItem JGHFOHHOKHK()  [RVA 0x302F460]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$JGHFOHHOKHK @ RVA 0x302F460

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__JGHFOHHOKHK
          (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,MethodInfo *method)

{
  return (__this->fields)._CIGDAHHAALG_k__BackingField;
}


// ===== public void .ctor(BaseScrollItem DKIDCBPNMPD, string PMACBPAMPJA)  [RVA 0x302EFD8]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$.ctor @ RVA 0x302EFD8

void Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD___ctor
               (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD,System_String_o *PMACBPAMPJA,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o **ppNVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565ce9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<BaseScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<BaseScrollItem>_TypeInfo);
    DAT_04565ce9 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<BaseScrollItem>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<BaseScrollItem>__ctor__);
  (__this->fields).GNEMEBABBFF = (System_Collections_Generic_HashSet_BaseScrollItem__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields)._CIGDAHHAALG_k__BackingField;
  *ppNVar1 = DKIDCBPNMPD;
  thunk_FUN_01c20e04(ppNVar1,DKIDCBPNMPD);
  ppSVar2 = &(__this->fields)._LDCCMOFCEAN_k__BackingField;
  *ppSVar2 = PMACBPAMPJA;
  thunk_FUN_01c20e04(ppSVar2,PMACBPAMPJA);
  return;
}


// ===== private void CNILLEFMALH(string CJNHFNHJHPE)  [RVA 0x302F468]
// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$CNILLEFMALH @ RVA 0x302F468

void Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__CNILLEFMALH
               (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._LDCCMOFCEAN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

