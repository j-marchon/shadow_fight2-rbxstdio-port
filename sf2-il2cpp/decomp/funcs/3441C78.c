// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_Progress @ RVA 0x3441C78

float Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_Progress
                (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  ProgressBar_o *pPVar2;
  float fVar3;
  
  if ((DAT_04568226 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568226 = 1;
    method = extraout_x1;
  }
  pPVar2 = (__this->fields)._progressBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar2 = (__this->fields)._progressBar;
    if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* catch() { ... } // from try @ 03541c1c with catch @ 03541ce8 */
                    /* WARNING: Could not recover jumptable at 0x03541cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(*(pPVar2->klass->vtable)._5_get_Value.methodPtr)
                               (pPVar2,(pPVar2->klass->vtable)._5_get_Value.method);
      return fVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03541cf8 to 03641d0b has its CatchHandler @ 03541ea4 */
  return 0.0;
}

