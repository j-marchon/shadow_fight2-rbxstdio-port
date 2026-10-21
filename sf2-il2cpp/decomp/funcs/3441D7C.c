// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_TitleText @ RVA 0x3441D7C

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_TitleText
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04568228 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03541db0 to 03641db7 has its CatchHandler @ 03541e34 */
    DAT_04568228 = 1;
  }
  pNVar2 = (__this->fields)._text;
                    /* try { // try from 03541dc0 to 03641dcb has its CatchHandler @ 03541e30 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03541dcc to 03641e1b has its CatchHandler @ 03541a04 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03541e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,CJNHFNHJHPE,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03541d28 with catch @ 03541e0c */
  return;
}

