// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$RunRibbonAnimation @ RVA 0x330AE6C

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__RunRibbonAnimation
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  PBAKFOBIHEG_o *pPVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_IEnumerator_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  CBLABOPKBKD_o *pCVar7;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_IEnumerator_o **ppSVar11;
  float fVar12;
  
  if ((DAT_0456777c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_ShowPergament__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456777c = 1;
  }
  pCVar7 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar7 != (CBLABOPKBKD_o *)0x0) {
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((pCVar7->fields).BLBMGMJLEEL,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD(__this,method_00);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BNFALOJINFI(__this,method_01);
    (__this->fields)._NNCECFJGBFF_k__BackingField = false;
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar4 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
      pPVar8 = pPVar3->klass;
      fVar12 = (__this->fields)._waitStartShowPergament;
      uVar1._0_1_ = (pPVar8->_2).rank;
      uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar8->vtable + (*piVar10 + 2);
            goto LAB_0340af8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_0340af8c:
      pSVar6 = (System_Collections_IEnumerator_o *)
               (*pVVar5->methodPtr)((ulong)(uint)fVar12,pPVar3,uVar4,pVVar5->method);
      ppSVar11 = &(__this->fields).OJLNBGBHEBK;
      *ppSVar11 = pSVar6;
      thunk_FUN_01c20e04(ppSVar11,pSVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

