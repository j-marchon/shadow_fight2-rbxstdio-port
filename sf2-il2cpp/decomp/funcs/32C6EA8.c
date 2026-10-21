// OCHEHJACAPI$$EPBENPDCBFE @ RVA 0x32C6EA8

bool OCHEHJACAPI__EPBENPDCBFE
               (OCHEHJACAPI_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OLKKAIFGGAK_o *__this_00;
  ECENNHNBAME_o *__this_01;
  PICIKPNGDBE_o *__this_02;
  
  __this_00 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    __this_01 = OLKKAIFGGAK__FMEOPPFIHCB(__this_00,(MethodInfo *)0x0);
    if (__this_01 == (ECENNHNBAME_o *)0x0) {
      return false;
    }
    bVar1 = ECENNHNBAME__CBJGGDFAACP(__this_01,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    __this_02 = (__this->fields).super.DKGMKMJDMPC;
                    /* try { // try from 033c6ef0 to 034c6ef7 has its CatchHandler @ 033c6fa8 */
    if (__this_02 != (PICIKPNGDBE_o *)0x0) {
      PICIKPNGDBE__CHKGAHCDFJF(__this_02,(MethodInfo *)0x0);
      iVar2 = OLKKAIFGGAK__MKIHMHHJLHE(__this_00,(MethodInfo *)0x0);
      bVar1 = IALJKCECCLB__KPIJNMIFOGC((IALJKCECCLB_o *)__this,(float)iVar2,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

