// Nekki.SF2.GUI.Scripts.CheckBox$$ClearEventsSubscription @ RVA 0x3520F9C

void Nekki_SF2_GUI_Scripts_CheckBox__ClearEventsSubscription
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  System_Action_CheckBox_EKFFAMKMBIH__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar2;
  
  if ((DAT_045689be & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
                    /* try { // try from 03620fd4 to 0372154b has its CatchHandler @ 03620fd4
                       catch() { ... } // from try @ 03620fd4 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621598 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621c88 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621cb4 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621cf4 with catch @ 03620fd4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_CheckBox_<>c_EMFONFKBKJH__);
    FUN_01bab630(&Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo);
    DAT_045689be = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__10_0;
  if (pSVar2 == (System_Action_CheckBox_EKFFAMKMBIH__o *)0x0) {
    if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
             thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__10_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
    (__this->fields).LCDOFOMLNLI = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).LCDOFOMLNLI,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

