// NLPJLHOEAOE$$CCPLLOAKNIL @ RVA 0x31F37F8

bool NLPJLHOEAOE__CCPLLOAKNIL
               (IGFGDDANEPE_o *ENHJPOHLMCL,bool IOGIPCKJBNP,bool LECNADPGFOM,MethodInfo *method)

{
  undefined8 *puVar1;
  bool_conflict bVar2;
  bool bVar3;
  int32_t iVar4;
  ACHLOMELAJE_o *pAVar5;
  System_String_o *message;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar6;
  
  if ((DAT_04566e45 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5836);
    FUN_01bab630(&StringLiteral_14276);
    FUN_01bab630(&StringLiteral_183);
    DAT_04566e45 = 1;
  }
  if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
    return false;
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
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    IGFGDDANEPE__GIIJHCLHFDK(ENHJPOHLMCL,iVar4,(MethodInfo *)0x0);
    pHVar6 = (ENHJPOHLMCL->fields).PCBECBEFJOI;
    if (pHVar6 != (HOOAAGABMBL_o *)0x0) {
      bVar2 = (pHVar6->fields)._OOKGBNMOHOA_k__BackingField;
      if (bVar2 != false) {
        iVar4 = IGFGDDANEPE__LDJLMEFOMLG(ENHJPOHLMCL,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        NLPJLHOEAOE__KFNAHLEHHMJ(ENHJPOHLMCL,iVar4,method_00);
      }
      bVar3 = bVar2 == false && IOGIPCKJBNP;
      puVar1 = &StringLiteral_5836;
      if (bVar2 != false || !IOGIPCKJBNP) {
        puVar1 = &StringLiteral_14276;
      }
      message = System_String__Concat
                          (StringLiteral_183,(System_String_o *)*puVar1,
                           (ENHJPOHLMCL->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
      IGFGDDANEPE__OEMBIADDDEE(ENHJPOHLMCL,bVar3,(MethodInfo *)0x0);
      if (!LECNADPGFOM) {
        return true;
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
        bVar3 = ACHLOMELAJE__JJOKIGNAPNH(pAVar5,ENHJPOHLMCL,bVar3,(MethodInfo *)0x0);
        return bVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

