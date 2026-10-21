// PFOMHOLCODE$$PINMGKELLJI @ RVA 0x334CEA8

float PFOMHOLCODE__PINMGKELLJI(PFOMHOLCODE_o *__this,MethodInfo *method)

{
  bool bVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  DNELIPCHKLK_o *__this_02;
  AFFHKININGD_o *__this_03;
  PJKHAJKEHEL_o *BCKBBGCOMJD;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar2;
  float fVar3;
  
  if ((DAT_04567a10 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567a10 = 1;
  }
  bVar1 = System_String__op_Inequality
                    ((__this->fields).MFPCBDADFJL,StringLiteral_1,(MethodInfo *)0x0);
  if (!bVar1) {
    return -1.0;
  }
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    (__this_01->fields).AAJBIMFNMBB = (__this->fields).OLDEEJHLCEC;
    thunk_FUN_01c20e04();
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).MFPCBDADFJL,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    __this_02 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_02,(MethodInfo *)0x0);
    if ((__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) && (__this_02 != (DNELIPCHKLK_o *)0x0)) {
      DNELIPCHKLK__LGOFNFEIKFB(__this_02,(__this_00->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = NLPJLHOEAOE__OJDOCBFHNBN(__this_02,(MethodInfo *)0x0);
      if (__this_03 == (AFFHKININGD_o *)0x0) {
        return -1.0;
      }
      pSVar2 = (__this_03->fields).MECHOBPGHFJ;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = MGNPHCAAEIO__EKOMOGPCHCN(pSVar2,(MethodInfo *)0x0);
      BCKBBGCOMJD = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
      fVar3 = AFFHKININGD__PINMGKELLJI(__this_03,BCKBBGCOMJD,pSVar2,(MethodInfo *)0x0);
      return fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

