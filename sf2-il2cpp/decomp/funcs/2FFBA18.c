// JMDPBFOCHHP.GIIEJKGFDPL$$IELLEFEFFJD @ RVA 0x2FFBA18

void JMDPBFOCHHP_GIIEJKGFDPL__IELLEFEFFJD(JMDPBFOCHHP_GIIEJKGFDPL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  Il2CppClass *pIVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  
  if ((DAT_04565ae0 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo);
    DAT_04565ae0 = 1;
  }
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar6 = pIVar2->klass;
    uVar1._0_1_ = (pIVar6->_2).rank;
    uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar3 = pIVar6->vtable + (*piVar9 + 3);
          goto LAB_030fbacc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,3);
LAB_030fbacc:
    plVar4 = (long *)(*pVVar3->methodPtr)(pIVar2,pVVar3->method);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_ICollection_GIDPGJAAOJA__c **)(piVar10 + -2) ==
              System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_030fbb38;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo,2);
LAB_030fbb38:
                    /* WARNING: Could not recover jumptable at 0x030fbb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar4,__this,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

