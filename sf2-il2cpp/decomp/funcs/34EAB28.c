// OLKKAIFGGAK$$KDGMEMONODJ @ RVA 0x34EAB28

OIGAJAKPPEO_o *
OLKKAIFGGAK__KDGMEMONODJ
          (OLKKAIFGGAK_o *GMIANEFANEC,System_Collections_Generic_List_NJPIKDFEOCN__o *GHAAKPDHIJJ,
          System_String_o *GAKKFJBNLFK,System_String_o *IHLDOCENBCK,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_IEMCMOPNPEA_o *__this;
  OIGAJAKPPEO_o *__this_00;
  NJPBHDMCLIN_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar2;
  PJKHAJKEHEL_o *pPVar3;
  OIGAJAKPPEO_c *pOVar4;
  PJKHAJKEHEL_o *pPVar5;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  pMVar2 = (MethodInfo *)GAKKFJBNLFK;
  if ((DAT_045687a4 & 1) == 0) {
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    FUN_01bab630(&OIGAJAKPPEO_TypeInfo);
    DAT_045687a4 = 1;
  }
  if (GMIANEFANEC == (OLKKAIFGGAK_o *)0x0) {
    return (OIGAJAKPPEO_o *)0x0;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IHLDOCENBCK,(MethodInfo *)0x0);
  if (bVar1) {
LAB_035eabd4:
    pPVar3 = OLKKAIFGGAK__MNDAJFLNOBL(GMIANEFANEC,GHAAKPDHIJJ,pMVar2);
    bVar1 = OLKKAIFGGAK__HODPOCMNNIN(GMIANEFANEC,method_00);
    CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(bVar1,(MethodInfo *)0x0);
    if (pPVar3 == (PJKHAJKEHEL_o *)0x0) goto LAB_035ead10;
    (pPVar3->fields).HJPOJOPKEKI.fields = CVar6;
    __this_00 = (OIGAJAKPPEO_o *)thunk_FUN_01bda818(OIGAJAKPPEO_TypeInfo);
    pMVar2 = (MethodInfo *)0x0;
    OIGAJAKPPEO___ctor(__this_00,pPVar3,(MethodInfo *)0x0);
    if (__this_00 == (OIGAJAKPPEO_o *)0x0) goto LAB_035ead10;
  }
  else {
    __this = (GMIANEFANEC->fields).AGEDJIJMACH;
    if (__this == (OLKKAIFGGAK_IEMCMOPNPEA_o *)0x0) goto LAB_035ead10;
    pMVar2 = (MethodInfo *)0x0;
    __this_00 = OLKKAIFGGAK_IEMCMOPNPEA__MFMDEIBOOEG(__this,IHLDOCENBCK,(MethodInfo *)0x0);
    if (__this_00 == (OIGAJAKPPEO_o *)0x0) goto LAB_035eabd4;
    __this_01 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
    NJPBHDMCLIN___ctor(__this_01,(MethodInfo *)0x0);
    (__this_00->fields).super.FNEAAHOOHAA = __this_01;
    thunk_FUN_01c20e04(&(__this_00->fields).super.FNEAAHOOHAA,__this_01);
  }
  (__this_00->fields).super.GGJCDBAMNOC = IHLDOCENBCK;
  thunk_FUN_01c20e04(&(__this_00->fields).super.GGJCDBAMNOC,IHLDOCENBCK);
  OLKKAIFGGAK__HCOCAAIGNNL((OLKKAIFGGAK_o *)__this_00,GAKKFJBNLFK,pMVar2);
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (GMIANEFANEC->fields).LDJLHMHDJLC.fields,(MethodInfo *)0x0);
  OLKKAIFGGAK__GGAOJKDEHIN((OLKKAIFGGAK_o *)__this_00,bVar1,pMVar2);
  pPVar3 = (GMIANEFANEC->fields).FAPMJJBOFEF;
  if ((pPVar3 != (PJKHAJKEHEL_o *)0x0) &&
     (pPVar5 = (__this_00->fields).super.FAPMJJBOFEF, pPVar5 != (PJKHAJKEHEL_o *)0x0)) {
    (pPVar5->fields).HLPLAKCBINK = (pPVar3->fields).HLPLAKCBINK;
    pOVar4 = __this_00->klass;
    if ((__this_00->fields).super.HMIAFJALFCJ == (GBJGJEGPHKD_o *)0x0) {
      pMVar2 = (pOVar4->vtable)._5_ILGAFEJCKBD.method;
      (*(pOVar4->vtable)._5_ILGAFEJCKBD.methodPtr)(__this_00,GMIANEFANEC);
    }
    else {
      (*(pOVar4->vtable)._7_JHHEDGPKDIA.methodPtr)(__this_00,(pOVar4->vtable)._7_JHHEDGPKDIA.method)
      ;
    }
    OLKKAIFGGAK__OPLIANBGNML((OLKKAIFGGAK_o *)__this_00,(GMIANEFANEC->fields).BPJMMBGIMNC,pMVar2);
    OLKKAIFGGAK__KHBABBEFPJE((OLKKAIFGGAK_o *)__this_00,(GMIANEFANEC->fields).PFCAKNOOBKB,pMVar2);
    local_50.fakeValueActive = (GMIANEFANEC->fields).DMMGOFAPLNK.fields.fakeValueActive;
    local_50.inited = (GMIANEFANEC->fields).DMMGOFAPLNK.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(GMIANEFANEC->fields).DMMGOFAPLNK.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (GMIANEFANEC->fields).DMMGOFAPLNK.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (GMIANEFANEC->fields).DMMGOFAPLNK.fields.fakeValue;
    local_50.currentCryptoKey = (GMIANEFANEC->fields).DMMGOFAPLNK.fields.currentCryptoKey;
    local_50.hiddenValue = (GMIANEFANEC->fields).DMMGOFAPLNK.fields.hiddenValue;
    CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                             (MethodInfo *)0x0);
    OLKKAIFGGAK__BBJEPEHDFCN((OLKKAIFGGAK_o *)__this_00,CJNHFNHJHPE,method_01);
    OLKKAIFGGAK__IDIPCCIPCGC(GMIANEFANEC,__this_00,pMVar2);
    return __this_00;
  }
LAB_035ead10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

