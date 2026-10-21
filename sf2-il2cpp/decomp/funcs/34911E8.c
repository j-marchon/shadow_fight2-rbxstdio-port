// Nekki.SF2.GUI.UIModule$$add_OnModuleActivated @ RVA 0x34911E8

void Nekki_SF2_GUI_UIModule__add_OnModuleActivated
               (System_Action_UIModule__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_UIModule__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_UIModule__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_UIModule__o *a;
  
  if ((DAT_0456841c & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456841c = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<UIModule>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 0359126c to 03691273 has its CatchHandler @ 0359139c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<UIModule>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 03591288 to 0369128f has its CatchHandler @ 03591394 */
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0359129c to 036912a7 has its CatchHandler @ 03591384 */
    pSVar5 = (System_Action_UIModule__o *)
             FUN_01c07368(Nekki_SF2_GUI_UIModule_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 035912c0 to 036912c7 has its CatchHandler @ 035912f0 */
  return;
}

