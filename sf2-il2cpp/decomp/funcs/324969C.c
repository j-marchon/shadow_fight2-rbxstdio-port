// Nekki.SF2.GUI.Scripts.EditBox$$add_OnShowKeyboard @ RVA 0x324969C

void Nekki_SF2_GUI_Scripts_EditBox__add_OnShowKeyboard
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,System_Action_EditBox__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_EditBox__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_EditBox__o *pSVar5;
  System_Action_EditBox__o *a;
  
                    /* try { // try from 033496b8 to 034496bf has its CatchHandler @ 03349990 */
  if ((DAT_045670e0 & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    DAT_045670e0 = 1;
  }
  a = (__this->fields).HHHKCKLPENH;
  do {
                    /* try { // try from 033496e4 to 034496e7 has its CatchHandler @ 033498c4 */
                    /* try { // try from 033496e8 to 034496ef has its CatchHandler @ 033498ec */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<EditBox>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 033496f8 to 034496ff has its CatchHandler @ 033498f0 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<EditBox>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 0334971c to 0344971f has its CatchHandler @ 033498dc */
    pSVar5 = (System_Action_EditBox__o *)FUN_01c07368(&(__this->fields).HHHKCKLPENH,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 0334972c to 03449737 has its CatchHandler @ 033498e4 */
  } while (bVar2);
                    /* try { // try from 03349740 to 03449767 has its CatchHandler @ 033498fc */
  return;
}

