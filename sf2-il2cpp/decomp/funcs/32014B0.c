// NLPJLHOEAOE$$JDHFCFGBAIO @ RVA 0x32014B0

void NLPJLHOEAOE__JDHFCFGBAIO(NLPJLHOEAOE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  LAMJOHEKJNJ_o *__this_00;
  LPEBBHNDFCG_o *pLVar2;
  ACHLOMELAJE_o *pAVar3;
  Il2CppClass *KGLJICLJHEL;
  int64_t iVar4;
  
  if ((DAT_04566e01 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_8492);
    DAT_04566e01 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8492,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo->_2).naturalAligment;
  if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  KGLJICLJHEL = IMMNELPBGIF[1].klass;
  if (KGLJICLJHEL != (Il2CppClass *)0x0) {
    if ((KGLJICLJHEL->_1).image != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(KGLJICLJHEL);
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
    if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar3->fields)._DDGPMHMNKNA_k__BackingField, __this_00 == (LAMJOHEKJNJ_o *)0x0
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar2 = LAMJOHEKJNJ__FENHANFAIND(__this_00,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
    if (pLVar2 != (LPEBBHNDFCG_o *)0x0) {
      iVar4 = (pLVar2->fields)._PGKPHJLHJCO_k__BackingField;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      iVar4 = MGNPHCAAEIO__HCDHCLBPBHN(iVar4,(MethodInfo *)0x0);
      LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP
                ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,iVar4,(MethodInfo *)0x0);
      iVar4 = LBMOOFGGPEB_OPLNJMEEOLB__IMAKPJNJIJF
                        ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,(MethodInfo *)0x0);
      if (-1 < iVar4) {
        return;
      }
    }
  }
  LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,0,(MethodInfo *)0x0)
  ;
  return;
}

