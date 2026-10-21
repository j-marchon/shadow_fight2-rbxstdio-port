// Nekki.SF2.GUI.Scripts.EditBox$$remove_OnShowKeyboard @ RVA 0x3249750

void Nekki_SF2_GUI_Scripts_EditBox__remove_OnShowKeyboard
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,System_Action_EditBox__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_EditBox__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_EditBox__o *pSVar5;
  System_Action_EditBox__o *source;
  
                    /* try { // try from 03349768 to 034497bf has its CatchHandler @ 03349364 */
  if ((DAT_045670e1 & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    DAT_045670e1 = 1;
  }
  source = (__this->fields).HHHKCKLPENH;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<EditBox>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<EditBox>_TypeInfo);
                    /* try { // try from 033497c0 to 034497c7 has its CatchHandler @ 0334998c */
      if (lVar4 == 0) {
                    /* try { // try from 033497fc to 03449803 has its CatchHandler @ 0334991c */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 033497d4 to 034497e3 has its CatchHandler @ 03349a00 */
    pSVar5 = (System_Action_EditBox__o *)FUN_01c07368(&(__this->fields).HHHKCKLPENH,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

