// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$NHJPFEPAEFN @ RVA 0x344DB18

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__NHJPFEPAEFN
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  CocosAnimation_o *__this_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  long lVar9;
  long lVar10;
  
  method_00 = (MethodInfo *)CJNHFNHJHPE;
  if ((DAT_0456828a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_ONFMIMKMBFG__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456828a = 1;
    method_00 = extraout_x1;
  }
                    /* try { // try from 0354db7c to 0364db87 has its CatchHandler @ 0354d590 */
  if ((__this->fields).BMNPKCFLINB == CJNHFNHJHPE) {
    return;
  }
                    /* try { // try from 0354db88 to 0364db8f has its CatchHandler @ 0354db90 */
  (__this->fields).BMNPKCFLINB = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 0354db14 with catch @ 0354db90
                       catch() { ... } // from try @ 0354db88 with catch @ 0354db90 */
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE(__this,method_00);
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method_01);
  lVar9 = (__this->fields).BMNPKCFLINB;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = (__this->fields)._picRubySale;
  if (__this_01 != (CocosAnimation_o *)0x0) {
    lVar10 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      lVar9 = lVar9 - lVar10;
      UnityEngine_GameObject__SetActive(__this_00,0 < lVar9,(MethodInfo *)0x0);
      if (lVar9 < 1) {
        return;
      }
      pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
        pPVar6 = pPVar2->klass;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar6->vtable + (*piVar8 + 2);
              goto LAB_0354dcd0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_0354dcd0:
        pSVar5 = (System_Collections_IEnumerator_o *)
                 (*pVVar4->methodPtr)((ulong)(uint)(float)lVar9,pPVar2,uVar3,pVVar4->method);
        (__this->fields).GLKKMFMGKMF = pSVar5;
        thunk_FUN_01c20e04();
        Nekki_SF2_GUI_Menu_MenuMoneyPanel__AHPALLMCHON(__this,method_02);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

