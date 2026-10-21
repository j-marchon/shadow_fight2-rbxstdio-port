// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34EE7AC

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,BDJGLFNEODH_o *CPECAEHDDDB,MethodInfo *method)

{
  int ACCIHBHMFPN;
  bool bVar1;
  uint uVar2;
  OLKKAIFGGAK_HFOFANOEBKD_o *__this_00;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  System_Predicate_T__o *match;
  ECENNHNBAME_o *__this_01;
  ulong uVar3;
  OLKKAIFGGAK_IOJDLINDBDK_o *__this_02;
  System_String_o *KGLJICLJHEL;
  BDJGLFNEODH_o *pBVar4;
  OPNFCOGALLI_o *pOVar5;
  OLKKAIFGGAK_HFOFANOEBKD_Fields *pOVar6;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_03;
  
  if ((DAT_045687a5 & 1) == 0) {
    FUN_01bab630(&Method_OLKKAIFGGAK_HFOFANOEBKD_ONPCHOBFLAH__);
    FUN_01bab630(&OLKKAIFGGAK_HFOFANOEBKD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Find__);
    FUN_01bab630(&System_Predicate<ECENNHNBAME>_TypeInfo);
    DAT_045687a5 = 1;
  }
  __this_00 = (OLKKAIFGGAK_HFOFANOEBKD_o *)thunk_FUN_01bda818(OLKKAIFGGAK_HFOFANOEBKD_TypeInfo);
  OLKKAIFGGAK_HFOFANOEBKD___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (OLKKAIFGGAK_HFOFANOEBKD_o *)0x0) goto LAB_035ee998;
  pOVar6 = &__this_00->fields;
  pOVar6->action = CPECAEHDDDB;
  thunk_FUN_01c20e04(pOVar6,CPECAEHDDDB);
  if (pOVar6->action == (BDJGLFNEODH_o *)0x0) goto LAB_035ee998;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pOVar6->action->fields).PMECMPHLIAC,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pBVar4 = pOVar6->action;
  if (pBVar4 == (BDJGLFNEODH_o *)0x0) goto LAB_035ee998;
  ACCIHBHMFPN = (pBVar4->fields).super.LOAFPIOGJAF;
  if (ACCIHBHMFPN == 6) {
    __this = (__this->fields).BPJMMBGIMNC;
    if (__this == (OLKKAIFGGAK_o *)0x0) {
      return;
    }
    KGLJICLJHEL = (pBVar4->fields).CCGKGNODMPF;
LAB_035ee884:
    BCKBBGCOMJD = OLKKAIFGGAK__CFOOIMNHJPI(__this,KGLJICLJHEL,method);
  }
  else {
    if (ACCIHBHMFPN == 4) {
      KGLJICLJHEL = (pBVar4->fields).CCGKGNODMPF;
      goto LAB_035ee884;
    }
    BCKBBGCOMJD = OLKKAIFGGAK__GMBBOANEBJJ(__this,ACCIHBHMFPN,method);
  }
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  __this_03 = (BCKBBGCOMJD->fields).OOBBJEDHHKM;
  match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<ECENNHNBAME>_TypeInfo);
  System_Predicate<object>___ctor();
  if (__this_03 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    __this_01 = (ECENNHNBAME_o *)
                System_Collections_Generic_List<object>__Find
                          ((System_Collections_Generic_List_object__o *)__this_03,match,
                           Method_System_Collections_Generic_List<ECENNHNBAME>_Find__);
    if (__this_01 == (ECENNHNBAME_o *)0x0) {
      return;
    }
    IPPEHAJADOO__CEACPADMPKJ((BCKBBGCOMJD->fields).FNEAAHOOHAA,BCKBBGCOMJD,(MethodInfo *)0x0);
    if (pOVar6->action != (BDJGLFNEODH_o *)0x0) {
      if (((pOVar6->action->fields).JGFKKJBKDIC == false) &&
         (bVar1 = ECENNHNBAME__PCPBHJGAOOH
                            (__this_01,BCKBBGCOMJD,
                             (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0,
                             (KJFPGDFNFCL_o *)0x0,(MethodInfo *)0x0), !bVar1)) {
        return;
      }
      pOVar5 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
      if (pOVar5 != (OPNFCOGALLI_o *)0x0) {
        uVar2 = ECENNHNBAME__BAHFNIPBBHD
                          (__this_01,(BCKBBGCOMJD->fields).FNEAAHOOHAA,(pOVar5->fields).DMJAJGGGHPF,
                           (MethodInfo *)0x0);
        uVar3 = (*(BCKBBGCOMJD->klass->vtable)._8_CBGCMJCJJKP.methodPtr)
                          (BCKBBGCOMJD,__this_01,(ulong)uVar2,0,0xffffffff,
                           (BCKBBGCOMJD->klass->vtable)._8_CBGCMJCJJKP.method);
        if ((uVar3 & 1) == 0) {
          return;
        }
        __this_02 = (BCKBBGCOMJD->fields).CGJACALFIKM;
        if (__this_02 != (OLKKAIFGGAK_IOJDLINDBDK_o *)0x0) {
          OLKKAIFGGAK_IOJDLINDBDK__NDNPGAKJLHM(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_035ee998:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

