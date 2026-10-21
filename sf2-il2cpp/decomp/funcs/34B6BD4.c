// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$MNIKEBABNLM @ RVA 0x34B6BD4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__MNIKEBABNLM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  byte bVar1;
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o **ppNVar2;
  
  if ((DAT_04568592 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_MNIKEBABNLM__);
    DAT_04568592 = 1;
  }
  ppNVar2 = &(__this->fields).FGANCONLPGD;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) {
      if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo) {
        IMMNELPBGIF = (Il2CppObject *)0x0;
      }
      goto LAB_035b6c68;
    }
  }
  IMMNELPBGIF = (Il2CppObject *)0x0;
LAB_035b6c68:
                    /* try { // try from 035b6c68 to 036b6c6f has its CatchHandler @ 035b6d34 */
  if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)IMMNELPBGIF) {
                    /* try { // try from 035b6c7c to 036b6c87 has its CatchHandler @ 035b6d30 */
    return;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 == (GCIFMNHADDF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035b6ccc to 036b6cef has its CatchHandler @ 035b6d28 */
  GCIFMNHADDF__CPBKBNKHOPH(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).FGANCONLPGD = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
                    /* try { // try from 035b6cf0 to 036b6d17 has its CatchHandler @ 035b6b78 */
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

