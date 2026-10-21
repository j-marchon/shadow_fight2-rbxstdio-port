// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$KGHBEACKHIB @ RVA 0x32D4E9C

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__KGHBEACKHIB
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,int64_t ECLENFDGNKL,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_0456757c & 1) == 0) {
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456757c = 1;
  }
  pNVar2 = (__this->fields)._beforeNextTaskLbl;
  if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = NGFEKJBMGEB__BCGDPKJNJCH
                     (ECLENFDGNKL,true,true,0xe0f < ECLENFDGNKL,0x1517f < ECLENFDGNKL,
                      StringLiteral_2086,true,true,true,true,StringLiteral_1,StringLiteral_1,
                      StringLiteral_1,StringLiteral_1,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d4f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

