// JCHNBADDBGO$$DGCODECJJCC @ RVA 0x32FEA58

bool JCHNBADDBGO__DGCODECJJCC(JCHNBADDBGO_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  IGFGDDANEPE_o *pIVar5;
  HOOAAGABMBL_o *pHVar6;
  HOOAAGABMBL_o *pHVar7;
  
  if ((DAT_04567709 & 1) == 0) {
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567709 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    return true;
  }
  bVar2 = (IGFGDDANEPE_TypeInfo->_2).naturalAligment;
  if ((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) {
    return true;
  }
  if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)IGFGDDANEPE_TypeInfo) {
    return true;
  }
  pIVar5 = (__this->fields).DPCOEJPACKA;
  if (((pIVar5 != (IGFGDDANEPE_o *)0x0) && (IMMNELPBGIF != (Il2CppObject *)0x0)) &&
     (pHVar7 = (pIVar5->fields).PCBECBEFJOI, pHVar7 != (HOOAAGABMBL_o *)0x0)) {
    pHVar6 = IMMNELPBGIF[1].monitor;
    bVar3 = System_String__op_Inequality
                      ((pHVar7->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_1,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_033febe0;
      bVar3 = System_String__op_Equality
                        ((pHVar7->fields)._COIPKAKHDFP_k__BackingField,
                         (pHVar6->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    bVar3 = System_String__op_Inequality
                      ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_1,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_033febe0;
      bVar3 = System_String__op_Equality
                        ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,
                         (pHVar6->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    bVar3 = System_String__op_Inequality
                      ((pHVar7->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_1,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_033febe0;
      bVar3 = System_String__op_Equality
                        ((pHVar7->fields)._DKODBGOHKGH_k__BackingField,
                         (pHVar6->fields)._DKODBGOHKGH_k__BackingField,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    pHVar7 = IGFGDDANEPE__JGBDIHJDIHD((IGFGDDANEPE_o *)IMMNELPBGIF,(MethodInfo *)0x0);
    if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
      pHVar6 = IGFGDDANEPE__JGBDIHJDIHD((IGFGDDANEPE_o *)IMMNELPBGIF,(MethodInfo *)0x0);
    }
    if ((pHVar6 != (HOOAAGABMBL_o *)0x0) &&
       (pIVar5 = (__this->fields).DPCOEJPACKA, pIVar5 != (IGFGDDANEPE_o *)0x0)) {
      iVar1 = (pHVar6->fields)._JDEHPJEIOCI_k__BackingField;
      iVar4 = IGFGDDANEPE__LGIMDOAMCNG(pIVar5,(MethodInfo *)0x0);
      return iVar4 <= iVar1;
    }
  }
LAB_033febe0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

