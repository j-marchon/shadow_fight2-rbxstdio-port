// GELGBIEICHA$$LOMHLGCANLK @ RVA 0x31D3CD8

void GELGBIEICHA__LOMHLGCANLK(GELGBIEICHA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_String_o *url;
  
  if ((DAT_04566cc8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566cc8 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 4);
        goto LAB_032d3d78;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,4);
LAB_032d3d78:
  uVar5 = (*pVVar3->methodPtr)(pPVar2,pVVar3->method);
  if ((uVar5 & 1) != 0) {
    return;
  }
  url = (__this->fields).DLBBBHCEOGH;
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  return;
}

