// CACJDBIGNIO$$NCKNNHCEADO @ RVA 0x332B5A0

void CACJDBIGNIO__NCKNNHCEADO
               (CACJDBIGNIO_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool LOPENELMPML,
               MethodInfo *method)

{
  int CJNHFNHJHPE;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  uint8_t uVar1;
  OLKKAIFGGAK_o *__this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE_00;
  
  if ((DAT_045678c7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_12192);
    DAT_045678c7 = 1;
  }
  if (LOPENELMPML) {
    if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      __this_02 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      uVar1 = (__this->fields)._IMMACMPCAKK_k__BackingField;
      CJNHFNHJHPE_00 =
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
      if (__this_02 != (OLKKAIFGGAK_o *)0x0) goto LAB_0342b704;
    }
  }
  else {
    __this_00 = (__this->fields)._GLNFECDJNJJ_k__BackingField;
    if (__this_00 == (NILLKLHKLHG_o *)0x0) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
    }
    else {
      __this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
      if (__this_01 == (MMFIDKMDADC_o *)0x0) goto LAB_0342b728;
      CJNHFNHJHPE = MMFIDKMDADC__JBGCINPPLAC(__this_01,(MethodInfo *)0x0);
    }
    if (CJNHFNHJHPE < 1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_12192,(MethodInfo *)0x0);
      return;
    }
    uVar1 = (__this->fields)._IMMACMPCAKK_k__BackingField;
    if (uVar1 == 2) {
      if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
        __this_02 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        CJNHFNHJHPE_00 =
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       (CJNHFNHJHPE,(MethodInfo *)0x0);
        if (__this_02 != (OLKKAIFGGAK_o *)0x0) {
          uVar1 = 2;
          goto LAB_0342b704;
        }
      }
    }
    else {
      if (uVar1 != 1) {
        return;
      }
      if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
        __this_02 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        CJNHFNHJHPE_00 =
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       (CJNHFNHJHPE,(MethodInfo *)0x0);
        if (__this_02 != (OLKKAIFGGAK_o *)0x0) {
          uVar1 = 1;
LAB_0342b704:
          OLKKAIFGGAK__OOCCDDNDPPG
                    (__this_02,uVar1,(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE_00
                     ,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0342b728:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

