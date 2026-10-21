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

