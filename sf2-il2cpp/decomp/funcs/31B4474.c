// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$ACICKHKFILK @ RVA 0x31B4474

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,
               LabelButton_o *LGHOMHOPNEP,int32_t JFLAKNAGBEL,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *pLVar2;
  
  if ((DAT_04566b9e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b9e = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__ACICKHKFILK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,LGHOMHOPNEP,JFLAKNAGBEL,(MethodInfo *)0x0)
  ;
  pLVar2 = (__this->fields)._createButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)LGHOMHOPNEP,(UnityEngine_Object_o *)pLVar2,
                     (MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields)._createButton;
    if (pLVar2 != (LabelButton_o *)0x0) {
                    /* try { // try from 032b44fc to 033b4503 has its CatchHandler @ 032b453c */
                    /* try { // try from 032b450c to 033b4513 has its CatchHandler @ 032b4538 */
      LabelButton__set_ButtonColor(pLVar2,2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032b4514 to 033b4553 has its CatchHandler @ 032b4458 */
  return;
}

