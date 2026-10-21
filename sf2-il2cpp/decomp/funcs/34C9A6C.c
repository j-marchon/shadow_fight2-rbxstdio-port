// PEMLCAHDJBA$$EPBENPDCBFE @ RVA 0x34C9A6C

bool PEMLCAHDJBA__EPBENPDCBFE
               (PEMLCAHDJBA_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  OLKKAIFGGAK_o *pOVar4;
  
  pOVar4 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    bVar2 = false;
  }
  else {
    if (pOVar4 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar4->fields).LGKFKNGIPDM.fields,(MethodInfo *)0x0);
    iVar1 = (__this->fields).LGKFKNGIPDM;
    bVar2 = iVar1 == 0 || iVar1 == iVar3;
  }
  return bVar2;
}

