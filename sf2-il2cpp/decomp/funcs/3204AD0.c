// NLPJLHOEAOE$$GOHFDNFBBGG @ RVA 0x3204AD0

void NLPJLHOEAOE__GOHFDNFBBGG(NLPJLHOEAOE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *__this_00;
  int64_t iVar2;
  IGFGDDANEPE_c *pIVar3;
  
  if ((DAT_04566e12 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo);
    FUN_01bab630(&StringLiteral_8493);
    DAT_04566e12 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8493,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo->_2).naturalAligment;
  __this_00 = (Il2CppClass *)IMMNELPBGIF;
  if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo)) {
    __this_00 = IMMNELPBGIF[1].klass;
    if (__this_00 != (Il2CppClass *)0x0) {
      pIVar3 = (__this_00->_1).image;
      bVar1 = (IGFGDDANEPE_TypeInfo->_2).naturalAligment;
      if (((pIVar3->_2).naturalAligment < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)IGFGDDANEPE_TypeInfo))
      goto LAB_03304c50;
      iVar2 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)__this_00,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      iVar2 = MGNPHCAAEIO__HCDHCLBPBHN(iVar2,(MethodInfo *)0x0);
      LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP
                ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,iVar2,(MethodInfo *)0x0);
      iVar2 = LBMOOFGGPEB_OPLNJMEEOLB__IMAKPJNJIJF
                        ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,(MethodInfo *)0x0);
      if (-1 < iVar2) {
        return;
      }
    }
    LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP
              ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,0,(MethodInfo *)0x0);
    return;
  }
LAB_03304c50:
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(__this_00);
}

