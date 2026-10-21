// IGJEEGBBNFC$$JOJEJLNJEKF @ RVA 0x32A2F80

void IGJEEGBBNFC__JOJEJLNJEKF
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  int32_t ABKNPBMGHKH;
  uint CLLGDGGKIPC;
  OLKKAIFGGAK_o *pOVar2;
  HJNEOLCKEMD_o *pHVar3;
  
  if ((DAT_045673d7 & 1) == 0) {
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&CJECMLGNCIC_TypeInfo);
    DAT_045673d7 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar3 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar3 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (CJECMLGNCIC_TypeInfo->_2).naturalAligment;
    if (((pHVar3->klass->_2).naturalAligment < bVar1) ||
       ((pHVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)CJECMLGNCIC_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar3);
    }
    ABKNPBMGHKH = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pHVar3 + 1),
                             (MethodInfo *)0x0);
    CLLGDGGKIPC = CMCJGLAABFO__ENNCOIHDFKP
                            (0,*(System_String_o **)&pHVar3[1].fields.super,(MethodInfo *)0x0);
    __this = (IGJEEGBBNFC_o *)(ulong)CLLGDGGKIPC;
    pOVar2 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
    if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__EIKAGLCDFLF(pOVar2,CLLGDGGKIPC,0,(MethodInfo *)0x0);
      pOVar2 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      __this = (IGJEEGBBNFC_o *)0x0;
      if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__OKNDBGGHBGI(pOVar2,CLLGDGGKIPC,ABKNPBMGHKH,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

