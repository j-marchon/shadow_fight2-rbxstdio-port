// NDPMLPGANCI$$FNNPPGPMCFE @ RVA 0x344A968

void NDPMLPGANCI__FNNPPGPMCFE
               (NDPMLPGANCI_o *__this,bool KKOIPECGGLL,bool GBCNCHFKMCD,int32_t IFDBGDGOLPK,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  System_Collections_IEnumerator_o *pSVar10;
  
  if ((DAT_04568268 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_NDPMLPGANCI_OPHFJEIJHJI_DAHOCAIKMID__);
    FUN_01bab630(&NDPMLPGANCI_OPHFJEIJHJI_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568268 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NDPMLPGANCI_OPHFJEIJHJI_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(bool *)&__this_00[1].monitor = KKOIPECGGLL;
    *(bool *)((long)&__this_00[1].monitor + 1) = GBCNCHFKMCD;
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar9 = &(__this->fields).BNKPMKJJJAK;
    pSVar10 = *ppSVar9;
    if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
      pPVar6 = pPVar3->klass;
      uVar1._0_1_ = (pPVar6->_2).rank;
      uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar6->vtable + (*piVar8 + 1);
            goto LAB_0354aa84;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_0354aa84:
      method_00 = pVVar4->method;
      (*pVVar4->methodPtr)(pPVar3,pSVar10);
      *ppSVar9 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar9,0);
      if ((*(bool_conflict *)&__this_00[1].monitor & 0 < IFDBGDGOLPK) == 0) {
        (__this->fields).BNHCMDDLIPB = *(bool_conflict *)&__this_00[1].monitor;
        NDPMLPGANCI__LLKODNOJFPJ(__this,*(bool *)((long)&__this_00[1].monitor + 1),method_00);
        return;
      }
      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
        pPVar6 = pPVar3->klass;
        uVar2._0_1_ = (pPVar6->_2).rank;
        uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar2;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar6->vtable + (*piVar8 + 2);
              goto LAB_0354ab7c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_0354ab7c:
        pSVar10 = (System_Collections_IEnumerator_o *)
                  (*pVVar4->methodPtr)
                            ((ulong)(uint)((float)IFDBGDGOLPK / 1000.0),pPVar3,uVar5,pVVar4->method)
        ;
        *ppSVar9 = pSVar10;
        thunk_FUN_01c20e04(ppSVar9,pSVar10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

