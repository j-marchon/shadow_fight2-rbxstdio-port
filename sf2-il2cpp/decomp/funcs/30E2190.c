// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$OKGJAJMILMD @ RVA 0x30E2190

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__OKGJAJMILMD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_RaidViewContainer__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = IMMNELPBGIF;
  auVar2._0_8_ = __this;
  if ((DAT_045663bd & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    auVar2 = FUN_01bab630(&StringLiteral_19657);
    DAT_045663bd = 1;
  }
  pSVar1 = (__this->fields).HNHLJHHKELD;
  if (pSVar1 != (System_Action_RaidViewContainer__o *)0x0) {
                    /* try { // try from 031e21ec to 032e2483 has its CatchHandler @ 031e21ec
                       catch() { ... } // from try @ 031e21ec with catch @ 031e21ec
                       catch() { ... } // from try @ 031e271c with catch @ 031e21ec
                       catch() { ... } // from try @ 031e275c with catch @ 031e21ec
                       catch() { ... } // from try @ 031e27ac with catch @ 031e21ec
                       catch() { ... } // from try @ 031e27c4 with catch @ 031e21ec
                       catch() { ... } // from try @ 031e280c with catch @ 031e21ec
                       catch() { ... } // from try @ 031e283c with catch @ 031e21ec */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_19657,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

