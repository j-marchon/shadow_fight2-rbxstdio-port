// NLPJLHOEAOE$$MKBDFHFJIPN @ RVA 0x32082B4

bool NLPJLHOEAOE__MKBDFHFJIPN(HOOAAGABMBL_o *ANMFBABEMFD,int32_t PCKDEOGMDHH,MethodInfo *method)

{
  int32_t iVar1;
  IGFGDDANEPE_o *__this;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar3;
  System_String_o *pSVar4;
  ACHLOMELAJE_o *__this_00;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)PCKDEOGMDHH;
  if ((DAT_04566e47 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_4181);
    DAT_04566e47 = 1;
    pMVar3 = extraout_x1;
  }
  if (ANMFBABEMFD == (HOOAAGABMBL_o *)0x0) {
LAB_0330843c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (ANMFBABEMFD->fields)._COIPKAKHDFP_k__BackingField;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_00;
  }
  __this = NLPJLHOEAOE__JNFIBDBHNOA(pSVar4,pMVar3);
  if (__this != (IGFGDDANEPE_o *)0x0) {
    iVar1 = IGFGDDANEPE__LDJLMEFOMLG(__this,(MethodInfo *)0x0);
    if (iVar1 < PCKDEOGMDHH) {
      PCKDEOGMDHH = IGFGDDANEPE__LDJLMEFOMLG(__this,(MethodInfo *)0x0);
    }
    if (0 < PCKDEOGMDHH) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      iVar2 = HOOAAGABMBL__LGFJPGMBDGL(ANMFBABEMFD,(MethodInfo *)0x0);
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        pMVar3 = (MethodInfo *)0x0;
        ACHLOMELAJE__KKDCNDLEGPP(__this_00,iVar2 * (ulong)(uint)PCKDEOGMDHH,false,(MethodInfo *)0x0)
        ;
        NLPJLHOEAOE__OMFGGNJKKAJ(__this,PCKDEOGMDHH,false,pMVar3);
        return true;
      }
      goto LAB_0330843c;
    }
  }
  pSVar4 = System_String__Concat
                     (StringLiteral_4181,(ANMFBABEMFD->fields)._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  return false;
}

