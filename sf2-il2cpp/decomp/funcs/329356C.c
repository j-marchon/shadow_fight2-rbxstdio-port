// Nekki.SF2.GUI.Fight.StylePanel$$IncreaseStyleStripByValue @ RVA 0x329356C

void Nekki_SF2_GUI_Fight_StylePanel__IncreaseStyleStripByValue
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  NDGHNMIHOMN_o *pNVar2;
  System_Collections_Generic_List_KKCEIILPLEC__o *pSVar3;
  int iVar4;
  float CJNHFNHJHPE_00;
  
                    /* catch() { ... } // from try @ 03393558 with catch @ 03393584 */
                    /* try { // try from 03393594 to 0349359b has its CatchHandler @ 033935b0 */
  if ((DAT_04567344 & 1) == 0) {
                    /* try { // try from 0339359c to 034935a7 has its CatchHandler @ 03393214 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Count__);
                    /* try { // try from 033935a8 to 034935af has its CatchHandler @ 033935b0 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03393594 with catch @ 033935b0
                       catch(type#2 @ 00000000) { ... } // from try @ 033935a8 with catch @ 033935b0
                        */
                    /* try { // try from 033935b4 to 03493683 has its CatchHandler @ 033935b4
                       catch() { ... } // from try @ 033935b4 with catch @ 033935b4
                       catch() { ... } // from try @ 033936e8 with catch @ 033935b4
                       catch() { ... } // from try @ 0339371c with catch @ 033935b4
                       catch() { ... } // from try @ 03393744 with catch @ 033935b4
                       catch() { ... } // from try @ 03393778 with catch @ 033935b4 */
    DAT_04567344 = 1;
  }
  iVar4 = (__this->fields).OOADLOIGCHI;
  iVar1 = -0x80000000;
  if (CJNHFNHJHPE != INFINITY) {
    iVar1 = (int)CJNHFNHJHPE;
  }
  CJNHFNHJHPE_00 = fmodf(CJNHFNHJHPE,1.0);
  method_00 = extraout_x1;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pNVar2 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
  if ((pNVar2 != (NDGHNMIHOMN_o *)0x0) &&
     (pSVar3 = (pNVar2->fields).PEMHPNLDPHD,
     pSVar3 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0)) {
    iVar4 = iVar4 + iVar1;
    if ((pSVar3->fields)._size <= iVar4) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pNVar2 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
        method_00 = extraout_x1_01;
        if (pNVar2 == (NDGHNMIHOMN_o *)0x0) goto LAB_033936b8;
      }
      pSVar3 = (pNVar2->fields).PEMHPNLDPHD;
      if (pSVar3 == (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) goto LAB_033936b8;
      CJNHFNHJHPE_00 = 1.0;
      iVar4 = (pSVar3->fields)._size + -1;
    }
    iVar1 = iVar4;
    if (iVar4 != (__this->fields).OOADLOIGCHI) {
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        __this_00 = (__this->fields)._styleBar;
        if (__this_00 == (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) goto LAB_033936b8;
        Nekki_SF2_GUI_Fight_StyleBar__SetValue(__this_00,1.0,0,iVar1,(MethodInfo *)0x0);
        method_00 = extraout_x1_02;
      }
                    /* try { // try from 03393684 to 0349368b has its CatchHandler @ 0339372c */
      iVar1 = (__this->fields).HOBABLEHLDI;
      if (iVar1 <= iVar4) {
        iVar1 = iVar4;
      }
      (__this->fields).HOBABLEHLDI = iVar1;
      (__this->fields).OOADLOIGCHI = iVar4;
                    /* try { // try from 03393698 to 034936a3 has its CatchHandler @ 03393728 */
      Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel(__this,method_00);
      method_00 = extraout_x1_03;
    }
    Nekki_SF2_GUI_Fight_StylePanel__SetStyleValue(__this,CJNHFNHJHPE_00,method_00);
    return;
  }
LAB_033936b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

