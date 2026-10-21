// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_Progress @ RVA 0x3441F50

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  ProgressBar_o *pPVar2;
  undefined4 in_register_00005004;
  
  if ((DAT_0456822a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456822a = 1;
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
                    /* WARNING: Could not recover jumptable at 0x03541fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar2->klass->vtable)._7_set_Value.methodPtr)
                (CONCAT44(in_register_00005004,CJNHFNHJHPE),pPVar2,
                 (pPVar2->klass->vtable)._7_set_Value.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03541fe8 to 03641fef has its CatchHandler @ 03542108 */
    FUN_01bab8c8();
  }
  return;
}

