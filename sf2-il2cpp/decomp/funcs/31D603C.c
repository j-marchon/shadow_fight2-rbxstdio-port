// WideController$$Awake @ RVA 0x31D603C

void WideController__Awake(WideController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  int32_t iVar3;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  bool value;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar7;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_IEnumerator_o **ppSVar11;
  
  if ((DAT_04566ce5 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566ce5 = 1;
  }
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar7 = (__this->fields)._NotWide;
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    if (1.7753906 <= (float)iVar2 / (float)iVar3) {
      UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._Wide;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_032d6180;
      value = true;
    }
    else {
      UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._Wide;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_032d6180;
      value = false;
    }
    UnityEngine_GameObject__SetActive(pUVar7,value,(MethodInfo *)0x0);
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar5 = WideController__MDEBIDCIMAN(__this,method_00);
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar8 = pPVar4->klass;
      uVar1._0_1_ = (pPVar8->_2).rank;
      uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar8->vtable + *piVar10;
            goto LAB_032d6154;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_032d6154:
      pSVar5 = (System_Collections_IEnumerator_o *)
               (*pVVar6->methodPtr)(pPVar4,pSVar5,1,pVVar6->method);
      ppSVar11 = &(__this->fields).OMBLNNEAHLD;
      *ppSVar11 = pSVar5;
      thunk_FUN_01c20e04(ppSVar11,pSVar5);
      return;
    }
  }
LAB_032d6180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

