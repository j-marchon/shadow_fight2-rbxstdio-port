// OLKKAIFGGAK$$PCBMLFDNAOC @ RVA 0x34F540C

void OLKKAIFGGAK__PCBMLFDNAOC(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  NJPBHDMCLIN_o **ppNVar1;
  bool bVar2;
  OLKKAIFGGAK_IEMCMOPNPEA_o *__this_00;
  System_Action_int__o *CJNHFNHJHPE;
  GBJGJEGPHKD_o *__this_01;
  NJPBHDMCLIN_o *__this_02;
  System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  CINMFAEJJOF_o *__this_03;
  UnityEngine_Object_o *x;
  
  if ((DAT_045687d3 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&System_Action<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_OLKKAIFGGAK_BDBDOFAIAEN__);
    FUN_01bab630(&Method_OLKKAIFGGAK_OOCCDDNDPPG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045687d3 = 1;
  }
  __this_00 = (__this->fields).AGEDJIJMACH;
  if (__this_00 != (OLKKAIFGGAK_IEMCMOPNPEA_o *)0x0) {
    OLKKAIFGGAK_IEMCMOPNPEA__GHCALGCCKKP(__this_00,(MethodInfo *)0x0);
    __this_03 = (__this->fields).BOFPHAFGLOO;
    if (__this_03 != (CINMFAEJJOF_o *)0x0) {
      CJNHFNHJHPE = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
      System_Action<int>___ctor();
      CINMFAEJJOF__PLKJEICMFDC(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    x = (UnityEngine_Object_o *)(__this->fields).LDAKOINICNJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      method_00 = (MethodInfo *)0x0;
      Util__JODGPLBHHIA((__this->fields).LDAKOINICNJ,false,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).HMIAFJALFCJ;
    if (__this_01 != (GBJGJEGPHKD_o *)0x0) {
      GBJGJEGPHKD__NDNPGAKJLHM(__this_01,(MethodInfo *)0x0);
      OLKKAIFGGAK__NDNPGAKJLHM(__this,true,method_00);
      __this_02 = (__this->fields).FNEAAHOOHAA;
      if (__this_02 != (NJPBHDMCLIN_o *)0x0) {
        ppNVar1 = &(__this->fields).FNEAAHOOHAA;
        NJPBHDMCLIN__DGLJCGNHLIG(__this_02,(MethodInfo *)0x0);
        *ppNVar1 = (NJPBHDMCLIN_o *)0x0;
        thunk_FUN_01c20e04(ppNVar1,0);
      }
      CJNHFNHJHPE_00 =
           (System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *)
           thunk_FUN_01bda818(System_Action<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_TypeInfo);
      System_Action<ByteEnum,_ObscuredInt>___ctor();
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__CJMHLHLIFGI(CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

