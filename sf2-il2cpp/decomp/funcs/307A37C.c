// GBIOMONHPGJ.DEEJFELBABJ$$NENFHIHOKBA @ RVA 0x307A37C

void GBIOMONHPGJ_DEEJFELBABJ__NENFHIHOKBA
               (GBIOMONHPGJ_DEEJFELBABJ_o *__this,System_String_array *args,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Il2CppObject *message;
  IEJKLPPLHMO_c *pIVar3;
  ulong uVar4;
  int32_t *piVar5;
  IEJKLPPLHMO_o *pIVar6;
  
  if ((DAT_04565fd0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    DAT_04565fd0 = 1;
  }
  pIVar6 = (__this->fields).command;
  if (pIVar6 == (IEJKLPPLHMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar3 = pIVar6->klass;
  uVar1._0_1_ = (pIVar3->_2).rank;
  uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pIVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
        pVVar2 = pIVar3->vtable + *piVar5;
        goto LAB_0317a41c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pIVar6,IEJKLPPLHMO_TypeInfo,0);
LAB_0317a41c:
  message = (Il2CppObject *)(*pVVar2->methodPtr)(pIVar6,args,pVVar2->method);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}

