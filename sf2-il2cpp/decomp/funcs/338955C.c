// IDDIABHBDEE.JFFCLNDLAKP$$FPOJOGCLJJK @ RVA 0x338955C

void IDDIABHBDEE_JFFCLNDLAKP__FPOJOGCLJJK(IDDIABHBDEE_JFFCLNDLAKP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  intptr_t iVar3;
  undefined1 uVar4;
  MethodInfo *extraout_x1;
  intptr_t iVar5;
  code *UNRECOVERED_JUMPTABLE;
  System_Action_bool__o *pSVar6;
  IDDIABHBDEE_o *pIVar7;
  
  if ((DAT_04567bd3 & 1) == 0) {
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    DAT_04567bd3 = 1;
    method = extraout_x1;
  }
  pIVar7 = (__this->fields).__4__this;
  if (pIVar7 != (IDDIABHBDEE_o *)0x0) {
    (pIVar7->fields)._FLMGPIBLEFL_k__BackingField = false;
    (pIVar7->fields)._AMLNDKODCIA_k__BackingField = false;
    (pIVar7->fields)._BGJCMGHJCMD_k__BackingField = false;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IDDIABHBDEE_TypeInfo,method);
    }
    pSVar2 = IDDIABHBDEE__OGGAJEAKGDO((MethodInfo *)0x0);
    bVar1 = IDDIABHBDEE__EMMKMFDFOGC(pIVar7,pSVar2,2,(MethodInfo *)0x0);
    (pIVar7->fields)._GFAEPBKFKEA_k__BackingField = bVar1;
    pIVar7 = (__this->fields).__4__this;
    if (pIVar7 != (IDDIABHBDEE_o *)0x0) {
      if ((pIVar7->fields)._GFAEPBKFKEA_k__BackingField == false) {
        if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = IDDIABHBDEE__APHOFEPIAHM((MethodInfo *)0x0);
        bVar1 = IDDIABHBDEE__EMMKMFDFOGC(pIVar7,pSVar2,1,(MethodInfo *)0x0);
        (pIVar7->fields)._GFAEPBKFKEA_k__BackingField = bVar1;
        pSVar6 = (__this->fields).callback;
        if (pSVar6 == (System_Action_bool__o *)0x0) {
          return;
        }
        pIVar7 = (__this->fields).__4__this;
        if (pIVar7 == (IDDIABHBDEE_o *)0x0) goto LAB_0348966c;
        uVar4 = (pIVar7->fields)._GFAEPBKFKEA_k__BackingField;
        UNRECOVERED_JUMPTABLE = (code *)(pSVar6->fields).super.super.invoke_impl;
        iVar3 = (pSVar6->fields).super.super.method_code;
        iVar5 = (pSVar6->fields).super.super.method;
      }
      else {
        pSVar6 = (__this->fields).callback;
        if (pSVar6 == (System_Action_bool__o *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = (code *)(pSVar6->fields).super.super.invoke_impl;
        iVar3 = (pSVar6->fields).super.super.method_code;
        iVar5 = (pSVar6->fields).super.super.method;
        uVar4 = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0348965c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar3,uVar4,iVar5);
      return;
    }
  }
LAB_0348966c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

