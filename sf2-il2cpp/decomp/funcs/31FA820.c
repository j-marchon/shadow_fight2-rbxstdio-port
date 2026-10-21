// NLPJLHOEAOE$$GKABILAEKDM @ RVA 0x31FA820

void NLPJLHOEAOE__GKABILAEKDM(NLPJLHOEAOE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  int64_t iVar2;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04566ddc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo);
    FUN_01bab630(&StringLiteral_8478);
    DAT_04566ddc = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8478,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo->_2).naturalAligment;
  if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP
              ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,(pAVar3->fields).CGLPKJKAOAI,
               (MethodInfo *)0x0);
    iVar2 = LBMOOFGGPEB_OPLNJMEEOLB__IMAKPJNJIJF
                      ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,(MethodInfo *)0x0);
    if (0 < iVar2) {
      return;
    }
    LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP
              ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

