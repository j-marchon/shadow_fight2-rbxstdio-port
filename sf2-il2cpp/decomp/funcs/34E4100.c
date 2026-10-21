// FIKENOMMMBH$$LFLNJMODHCP @ RVA 0x34E4100

bool FIKENOMMMBH__LFLNJMODHCP(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  long lVar3;
  JMDPBFOCHHP_o *pJVar4;
  JMDPBFOCHHP_EJICJNOEGGE_o *__this;
  System_String_o *KGLJICLJHEL;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar5;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar6;
  
  if ((DAT_0456874e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456874e = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pPVar2 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
    lVar3 = (*(pPVar2->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                      (pPVar2,ACCIHBHMFPN,0,(pPVar2->klass->vtable)._4_CJPIJKJDHGI.method);
    if (lVar3 != 0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar4 == (JMDPBFOCHHP_o *)0x0) ||
         (__this = (pJVar4->fields)._LEIIIBPIJGJ_k__BackingField,
         __this == (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0)) goto LAB_035e4278;
      bVar1 = JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA
                        (__this,*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KGLJICLJHEL = MGNPHCAAEIO__OKOJOGAHMFP(ACCIHBHMFPN,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
        (__this_00 = (pAVar6->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) &&
       (pIVar5 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,KGLJICLJHEL,(MethodInfo *)0x0),
       pIVar5 != (IGFGDDANEPE_o *)0x0)) {
      NLPJLHOEAOE__KENEIABLCEN((pIVar5->fields).PCBECBEFJOI,(MethodInfo *)0x0);
      return true;
    }
  }
LAB_035e4278:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

