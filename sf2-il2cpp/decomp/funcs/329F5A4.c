// IGJEEGBBNFC$$DOOKMILACGC @ RVA 0x329F5A4

void IGJEEGBBNFC__DOOKMILACGC
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool MGHHNOBLBDI,
               MethodInfo *method)

{
  byte bVar1;
  HJNEOLCKEMD_o *pHVar2;
  OLKKAIFGGAK_o *__this_00;
  float CJNHFNHJHPE;
  HJNEOLCKEMD_c *local_40;
  void *pvStack_38;
  undefined4 local_30;
  
  if ((DAT_045673d8 & 1) == 0) {
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&NHHDMAKJECA_TypeInfo);
    DAT_045673d8 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar2 = (CPECAEHDDDB->fields).EDOEMIDBEGO, __this = (IGJEEGBBNFC_o *)0x0,
     pHVar2 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (NHHDMAKJECA_TypeInfo->_2).naturalAligment;
    if (((pHVar2->klass->_2).naturalAligment < bVar1) ||
       ((pHVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)NHHDMAKJECA_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    local_30._0_1_ = pHVar2[1].fields.super.GBBHFPBFOPI;
    local_30._1_1_ = (bool_conflict)pHVar2[1].fields.super.field_0x1;
    local_30._2_2_ = *(undefined2 *)&pHVar2[1].fields.super.field_0x2;
    pvStack_38 = pHVar2[1].monitor;
    local_40 = pHVar2[1].klass;
    CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                             (MethodInfo *)0x0);
    __this_00 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
    __this = (IGJEEGBBNFC_o *)0x0;
    if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
      if (MGHHNOBLBDI) {
        OLKKAIFGGAK__DFHBHFCCFPE(__this_00,(MethodInfo *)0x0);
      }
      else {
        OLKKAIFGGAK__JBPFOJALMPM(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

