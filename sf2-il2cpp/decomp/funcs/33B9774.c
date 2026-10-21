// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$GKPJMHOFIOO @ RVA 0x33B9774

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *__this_00;
  System_String_o *pSVar1;
  MPMBFKHOAKB_o *pMVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_UI_Text_o *pUVar3;
  
  if ((DAT_04567d93 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6179);
    DAT_04567d93 = 1;
  }
  (*(__this->klass->vtable)._34_KLPHOMAJAGO.methodPtr)
            (__this,(__this->klass->vtable)._34_KLPHOMAJAGO.method);
  pMVar2 = (__this->fields).DKMMBMBMJBO;
  if ((pMVar2 != (MPMBFKHOAKB_o *)0x0) &&
     (__this_00 = (pMVar2->fields).FAMILKPGDOC, __this_00 != (AFFHKININGD_o *)0x0)) {
    __this_01 = (__this->fields).FightRules;
    pSVar1 = AFFHKININGD__CJPIFPJMENP(__this_00,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_6179,pSVar1,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,pSVar1,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).PlayerCurrency;
      pSVar1 = System_Int32__ToString((int)__this + 0xfc,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034b9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,pSVar1,(pUVar3->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

