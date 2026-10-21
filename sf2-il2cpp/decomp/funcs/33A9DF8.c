// NKDMOOEFPHJ$$GMHAHMILKBP @ RVA 0x33A9DF8

bool NKDMOOEFPHJ__GMHAHMILKBP(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  JMDPBFOCHHP_o *pJVar3;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DLMLPMIANHI_o *pJVar4;
  float fVar5;
  
  if ((DAT_04567d07 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567d07 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar4 = (pJVar3->fields)._OLABMBDNACG_k__BackingField,
     pJVar4 != (JMDPBFOCHHP_DLMLPMIANHI_o *)0x0)) {
    iVar2 = (pJVar4->fields).OCPHBEEPAEG;
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar4 = (pJVar3->fields)._OLABMBDNACG_k__BackingField,
       pJVar4 != (JMDPBFOCHHP_DLMLPMIANHI_o *)0x0)) {
      fVar5 = (pJVar4->fields).ODEJMJFJDAI * (float)(__this->fields).HMCEFKIBEJG;
      iVar1 = -0x80000000;
      if (fVar5 != INFINITY) {
        iVar1 = (int)fVar5;
      }
      return (__this->fields).JIHNEHGPFHK + 1 <= iVar1 + iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

