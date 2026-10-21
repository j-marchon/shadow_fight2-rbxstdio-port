// PEEIMHCMDND$$LHIJEFDKJPC @ RVA 0x34251B0

void PEEIMHCMDND__LHIJEFDKJPC(PEEIMHCMDND_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__c *pSVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  Il2CppObject *pIVar6;
  
  if ((DAT_045680ff & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EOLFEKNCPLM>__);
    FUN_01bab630(&StringLiteral_10949);
    FUN_01bab630(&StringLiteral_10947);
    FUN_01bab630(&StringLiteral_10948);
    DAT_045680ff = 1;
  }
  (__this->fields).CKBPCAHHDEN = false;
  pSVar1 = System_Action<EOLFEKNCPLM>_TypeInfo;
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar6 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
  if (pIVar6 == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10948,(MethodInfo *)0x0);
    return;
  }
  lVar3 = thunk_FUN_01bda71c(pIVar6,System_Action<EOLFEKNCPLM>_TypeInfo);
  if (lVar3 != 0) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
      pIVar6 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EOLFEKNCPLM>__);
      if (pIVar6 == (Il2CppObject *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_10949,(MethodInfo *)0x0);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      uVar5 = *(undefined8 *)(lVar3 + 0x28);
    }
    else {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10947,(MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      uVar5 = *(undefined8 *)(lVar3 + 0x28);
      pIVar6 = (Il2CppObject *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0352533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4,pIVar6,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pIVar6,pSVar1);
}

