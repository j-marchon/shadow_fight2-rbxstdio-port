// IGJEEGBBNFC$$HADPFHMOPPI @ RVA 0x329EF24

void IGJEEGBBNFC__HADPFHMOPPI
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool MGHHNOBLBDI,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  HJNEOLCKEMD_c *str1;
  PHDCILJMEHO_o *pPVar5;
  HEFOANCOHDC_o *pHVar6;
  OLKKAIFGGAK_o *__this_00;
  HJNEOLCKEMD_o *pHVar7;
  
  if ((DAT_045673d0 & 1) == 0) {
    FUN_01bab630(&GDKLJOEKBNF_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_045673d0 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar7 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar7 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (GDKLJOEKBNF_TypeInfo->_2).naturalAligment;
    if (((pHVar7->klass->_2).naturalAligment < bVar1) ||
       ((pHVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)GDKLJOEKBNF_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar7);
    }
    if ((!MGHHNOBLBDI) && (*(char *)&pHVar7[1].monitor != '\0')) {
      IGJEEGBBNFC__KOCCDOBJOLI(__this,(MethodInfo *)GDKLJOEKBNF_TypeInfo);
    }
    bVar2 = System_String__op_Inequality
                      ((System_String_o *)pHVar7[1].klass,string_TypeInfo->static_fields->Empty,
                       (MethodInfo *)0x0);
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    pSVar4 = MGENAMAJALB__CDEFMBKAPPC((MethodInfo *)0x0);
    if (bVar2) {
      str1 = pHVar7[1].klass;
    }
    else {
      pPVar5 = (__this->fields).HAHNEPLFLFD;
      if ((pPVar5 == (PHDCILJMEHO_o *)0x0) ||
         (pHVar6 = (pPVar5->fields).MLPFFJNBKBN, pHVar6 == (HEFOANCOHDC_o *)0x0)) goto LAB_0339f094;
      str1 = (HJNEOLCKEMD_c *)(pHVar6->fields).KPDPJONADPJ;
    }
    pSVar4 = System_String__Concat(pSVar4,(System_String_o *)str1,(MethodInfo *)0x0);
    (CPECAEHDDDB->fields).KPDPJONADPJ = pSVar4;
    thunk_FUN_01c20e04();
    (CPECAEHDDDB->fields).FOFFKEAJPAF = *(bool_conflict *)((long)&pHVar7[1].monitor + 1);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                        ((long)&pHVar7[1].monitor + 4),(MethodInfo *)0x0);
    __this_00 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
    (CPECAEHDDDB->fields).HLPPJNKNCFM = iVar3;
    if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__LFFONLFKCEJ(__this_00,CPECAEHDDDB,MGHHNOBLBDI,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0339f094:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

