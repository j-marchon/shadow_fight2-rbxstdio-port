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

