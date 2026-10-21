// OLKKAIFGGAK$$ADFNGIGOBMD @ RVA 0x34F69FC

void OLKKAIFGGAK__ADFNGIGOBMD
               (OLKKAIFGGAK_o *__this,float LINBBAKAFCP,OLKKAIFGGAK_o *JALKELIHLPC,bool JECKCMKCNCH,
               bool CPKEPNCILEN,bool BCMCBPDGEAH,MethodInfo *method)

{
  int32_t iVar1;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  IDLLJHPDAHE_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar2 = DAT_045687e5;
  do {
    BCKBBGCOMJD = __this;
    if ((bVar2 & 1) == 0) {
      FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
      DAT_045687e5 = 1;
    }
    __this = (BCKBBGCOMJD->fields).NFMBPIPEKGF;
    bVar2 = 1;
  } while (__this != (OLKKAIFGGAK_o *)0x0);
                    /* try { // try from 035f6a64 to 036f6a6b has its CatchHandler @ 035f6c78 */
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (BCKBBGCOMJD->fields).ILPEKKGEAEK.fields,(MethodInfo *)0x0);
  if (iVar1 != 0) {
                    /* try { // try from 035f6a8c to 036f6a93 has its CatchHandler @ 035f6c74 */
    return;
  }
  if (JALKELIHLPC != (OLKKAIFGGAK_o *)0x0) {
    do {
      __this_01 = JALKELIHLPC;
      JALKELIHLPC = (__this_01->fields).NFMBPIPEKGF;
    } while (JALKELIHLPC != (OLKKAIFGGAK_o *)0x0);
                    /* try { // try from 035f6aa8 to 036f6aaf has its CatchHandler @ 035f6bd0 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035f6abc to 036f6ac7 has its CatchHandler @ 035f6bc4 */
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->BGPBFADNJKE;
    if (__this_00 != (IDLLJHPDAHE_o *)0x0) {
      method_02 = (MethodInfo *)0x0;
      if (BCMCBPDGEAH) {
        fVar3 = IDLLJHPDAHE__FBBIAEAJKIJ(__this_00,BCKBBGCOMJD,(MethodInfo *)0x0);
        fVar4 = OLKKAIFGGAK__DAEJHAGFLAA(__this_01,JECKCMKCNCH,method_02);
        __this_01 = BCKBBGCOMJD;
      }
      else {
        fVar3 = IDLLJHPDAHE__EGJBDDAOKIG(__this_00,BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 035f6b00 to 036f6b0b has its CatchHandler @ 035f6bbc */
        fVar4 = OLKKAIFGGAK__DAEJHAGFLAA(BCKBBGCOMJD,JECKCMKCNCH,method_02);
      }
      fVar5 = OLKKAIFGGAK__CLBDEFMEKLC(__this_01,CPKEPNCILEN,method_02);
      fVar3 = exp2f(fVar3);
                    /* try { // try from 035f6b28 to 036f6b37 has its CatchHandler @ 035f6bb8 */
      OLKKAIFGGAK__CGFIALBAEAE(BCKBBGCOMJD,fVar5 * fVar4 * fVar3 * LINBBAKAFCP,method_00);
                    /* try { // try from 035f6b54 to 036f6b63 has its CatchHandler @ 035f6bb4 */
      OLKKAIFGGAK__JPFGODGJKNP(BCKBBGCOMJD,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

