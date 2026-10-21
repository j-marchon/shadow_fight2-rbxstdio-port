// EGMONPGHHDP$$OAIHLHCKNOO @ RVA 0x304C61C

void EGMONPGHHDP__OAIHLHCKNOO
               (EGMONPGHHDP_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,
               System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  JMDPBFOCHHP_CKEMIAEPGKD_o *CLDEGLBDGGE;
  System_String_o *CJNHFNHJHPE;
  long lVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar4;
  System_Action_BKKPAKHJDKB__o *method_00;
  ACHLOMELAJE_o *pAVar5;
  int local_34;
  
                    /* try { // try from 0314c61c to 0324c633 has its CatchHandler @ 0314c668 */
                    /* try { // try from 0314c634 to 0324c657 has its CatchHandler @ 0314c4e4 */
  pMVar4 = (MethodInfo *)MEJOGHDACNG;
  method_00 = BLMFLPJJMPF;
  if ((DAT_04565e0d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0314c658 to 0324c667 has its CatchHandler @ 0314c668 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&StringLiteral_3322);
                    /* catch() { ... } // from try @ 0314c61c with catch @ 0314c668
                       catch() { ... } // from try @ 0314c658 with catch @ 0314c668 */
                    /* try { // try from 0314c66c to 0324c66f has its CatchHandler @ 0314c678 */
    DAT_04565e0d = 1;
    pMVar4 = extraout_x1;
  }
                    /* try { // try from 0314c670 to 0324c67b has its CatchHandler @ 0314c4e4 */
  local_34 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314c66c with catch @ 0314c678
                        */
  bVar1 = EGMONPGHHDP__PJKNOEOGFNM(__this,pMVar4);
  if (bVar1) {
    pMVar4 = extraout_x1_00;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar4 = extraout_x1_01;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      pMVar4 = extraout_x1_02;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar4 = extraout_x1_03;
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    CLDEGLBDGGE = EGMONPGHHDP__OKBKFJKEAAG(__this,pMVar4);
    iVar2 = EGMONPGHHDP__AKDNGOBCGHB(__this,CLDEGLBDGGE,(MethodInfo *)method_00);
    local_34 = iVar2 + 1;
    CJNHFNHJHPE = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314c7d8;
    ACHLOMELAJE__LMJFPPDAPBF(pAVar5,StringLiteral_3322,CJNHFNHJHPE,0,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314c7d8;
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar5,false,(MethodInfo *)0x0);
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
    Nekki_SF2_GUI_Profile_ProfileScene__UpdateBottomIndicators
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar3 + 0xb8),
               (MethodInfo *)0x0);
  }
  if (BLMFLPJJMPF != (System_Action_BKKPAKHJDKB__o *)0x0) {
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,MEJOGHDACNG,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
LAB_0314c7d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

