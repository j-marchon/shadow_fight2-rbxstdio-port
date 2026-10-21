// EEGDOGKBLNG$$JEOCNEDKJKE @ RVA 0x3071630

void EEGDOGKBLNG__JEOCNEDKJKE(EEGDOGKBLNG_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  int iVar3;
  System_String_o *CJNHFNHJHPE_00;
  KAMBBJFPLGM_o *pKVar4;
  System_String_o *DIHAKADKIKM;
  LPAPAMPGDFN_o *__this_00;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_04565f72 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<string,_string>__);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<StringValue>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_17504);
    DAT_04565f72 = 1;
  }
  if (((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
      (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), bVar1)) &&
     (CJNHFNHJHPE_00 = (System_String_o *)(IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
     CJNHFNHJHPE_00 != (System_String_o *)0x0)) {
    if (CJNHFNHJHPE_00->klass != string_TypeInfo) {
      CJNHFNHJHPE_00 = (System_String_o *)0x0;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<StringValue>__);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if ((!bVar1) && (pIVar2 != (Il2CppObject *)0x0)) {
      DIHAKADKIKM = pIVar2[1].monitor;
      CAOJHCDPDBH__GKONJMIPMEH<object,_object>
                ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).KPPDBKGGEGA,
                 (Il2CppObject *)CJNHFNHJHPE_00,(Il2CppObject *)DIHAKADKIKM,
                 Method_CAOJHCDPDBH_GKONJMIPMEH<string,_string>__);
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
      if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
         (bVar1 = System_String__op_Equality(CJNHFNHJHPE_00,StringLiteral_17504,(MethodInfo *)0x0),
         bVar1)) {
        pKVar4 = (__this->fields).MLAAJICBOAD;
        if ((pKVar4 == (KAMBBJFPLGM_o *)0x0) || ((pKVar4->fields).GNKNDHJHFOC != 0x32)) {
          iVar3 = 0;
        }
        else {
          bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(1,(MethodInfo *)0x0);
          iVar3 = 6;
          if (!bVar1) {
            iVar3 = 0;
          }
        }
        __this_00 = (pAVar5->fields).LMCDOMHENMC;
        CJNHFNHJHPE = PCOEHCPGBBG__JBGCINPPLAC(DIHAKADKIKM,0,(MethodInfo *)0x0);
        if (__this_00 == (LPAPAMPGDFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LPAPAMPGDFN__MKACHLMIINH(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        if (iVar3 == 0) {
          EEGDOGKBLNG__BBMCMFOPMFN(__this,method_00);
          return;
        }
      }
    }
  }
  return;
}

