// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$DNANDMDABDA @ RVA 0x344D12C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__DNANDMDABDA
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  CocosAnimation_o *pCVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  
  if ((DAT_0456827c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_AHPALLMCHON__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456827c = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar7 = pPVar2->klass;
    uVar1._0_1_ = (pPVar7->_2).rank;
    uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar4 = pPVar7->vtable + (*piVar9 + 2);
          goto LAB_0354d20c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_0354d20c:
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*pVVar4->methodPtr)(0x40a00000,pPVar2,uVar3,pVVar4->method);
    ppSVar10 = &(__this->fields).LNNAAJMEJGJ;
    *ppSVar10 = pSVar5;
    thunk_FUN_01c20e04(ppSVar10,pSVar5);
    pCVar6 = (__this->fields)._picRubySale;
    if (pCVar6 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetLastFrame(pCVar6,(MethodInfo *)0x0);
      pCVar6 = (__this->fields)._picRubySale;
      if (pCVar6 != (CocosAnimation_o *)0x0) {
                    /* try { // try from 0354d258 to 0364d323 has its CatchHandler @ 0354d258
                       catch() { ... } // from try @ 0354d258 with catch @ 0354d258
                       catch() { ... } // from try @ 0354d418 with catch @ 0354d258
                       catch() { ... } // from try @ 0354d4b4 with catch @ 0354d258
                       catch() { ... } // from try @ 0354d4bc with catch @ 0354d258
                       catch() { ... } // from try @ 0354d578 with catch @ 0354d258 */
        (pCVar6->fields)._FEBBHCOAEMI_k__BackingField = 1;
        (pCVar6->fields)._NOAJIBNJKPE_k__BackingField = false;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

