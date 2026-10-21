// MIKDEPBOGDN$$EPBENPDCBFE @ RVA 0x3096818

bool MIKDEPBOGDN__EPBENPDCBFE
               (MIKDEPBOGDN_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  OLKKAIFGGAK_o *__this_00;
  System_String_o *pSVar3;
  PICIKPNGDBE_o *__this_01;
  
  if ((DAT_045660dc & 1) == 0) {
    FUN_01bab630(&StringLiteral_8775);
    FUN_01bab630(&StringLiteral_10807);
    DAT_045660dc = 1;
  }
  __this_00 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  pSVar3 = (__this->fields).JBNGADJBDHB;
  if (pSVar3 == (System_String_o *)0x0) goto LAB_0319690c;
  bVar1 = System_String__Equals(pSVar3,StringLiteral_8775,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (OLKKAIFGGAK_o *)0x0) goto LAB_0319690c;
    iVar2 = OLKKAIFGGAK__BAJGPELJMFG(__this_00,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (__this->fields).JBNGADJBDHB;
    if (pSVar3 == (System_String_o *)0x0) goto LAB_0319690c;
    bVar1 = System_String__Equals(pSVar3,StringLiteral_10807,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    if (__this_00 == (OLKKAIFGGAK_o *)0x0) goto LAB_0319690c;
    iVar2 = OLKKAIFGGAK__POIDJCKLINH(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).super.DKGMKMJDMPC;
  if (__this_01 != (PICIKPNGDBE_o *)0x0) {
    PICIKPNGDBE__CHKGAHCDFJF(__this_01,(MethodInfo *)0x0);
    bVar1 = IALJKCECCLB__KPIJNMIFOGC((IALJKCECCLB_o *)__this,(float)iVar2,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0319690c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

