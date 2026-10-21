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

