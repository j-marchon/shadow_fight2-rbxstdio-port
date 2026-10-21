// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$Update @ RVA 0x314D228

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked__Update
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  AFFHKININGD_o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *arg2;
  OOMHDDBCBJP_o *pOVar5;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar6;
  PAMEPBLOLPB_o *pPVar7;
  System_Action_OOMHDDBCBJP__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  long lVar11;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  System_TimeSpan_Fields local_28;
  
  if ((DAT_045667d8 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_22269);
    FUN_01bab630(&StringLiteral_22268);
    DAT_045667d8 = 1;
    method = extraout_x1;
  }
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
  if (__this_00 == (AFFHKININGD_o *)0x0) {
    return;
  }
  bVar1 = AFFHKININGD__CAGKMGGOIOJ(__this_00,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar10 = (__this->fields)._lblTime;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) {
      pPVar7 = (__this_00->fields).JPBIBBBMCCD;
      if (pPVar7 == (PAMEPBLOLPB_o *)0x0) {
LAB_0324d4c8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar11 = (__this_00->fields).PIKNKFHOMLP - (pPVar7->fields).GKGHELAOIBG;
      if (lVar11 == (__this->fields).GKKNEFKGMKO) {
        return;
      }
      (__this->fields).GKKNEFKGMKO = lVar11;
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_28._ticks = (int64_t)System_TimeSpan__FromSeconds((double)lVar11,(MethodInfo *)0x0);
      iVar2 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
      }
      if (iVar2 < 1) {
        local_34 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        local_38 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        pOVar5 = (OOMHDDBCBJP_o *)
                 System_String__Format(StringLiteral_22268,pIVar3,pIVar4,(MethodInfo *)0x0);
      }
      else {
        local_34 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        local_38 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        local_3c = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
        pOVar5 = (OOMHDDBCBJP_o *)
                 System_String__Format(StringLiteral_22269,pIVar3,pIVar4,arg2,(MethodInfo *)0x0);
      }
      pNVar10 = (__this->fields)._lblTime;
      if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0324d4c8;
      pIVar9 = (pNVar10->klass->vtable)._75_set_text.methodPtr;
      pMVar6 = (pNVar10->klass->vtable)._75_set_text.method;
      goto LAB_0324d4b0;
    }
  }
  pSVar8 = (__this->fields).super.OnUpdateBattleInfo;
  if (pSVar8 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    return;
  }
  pOVar5 = (__this->fields).ACMHOIKOLBE;
  pIVar9 = (Il2CppMethodPointer)(pSVar8->fields).super.super.invoke_impl;
  pNVar10 = (Nekki_SF2_GUI_LabelAlias_o *)(pSVar8->fields).super.super.method_code;
  pMVar6 = (MethodInfo *)(pSVar8->fields).super.super.method;
LAB_0324d4b0:
  (*pIVar9)(pNVar10,pOVar5,pMVar6);
  return;
}

