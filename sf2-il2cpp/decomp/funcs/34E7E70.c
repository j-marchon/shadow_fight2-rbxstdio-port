// OLKKAIFGGAK$$FJEIOCILFLE @ RVA 0x34E7E70

void OLKKAIFGGAK__FJEIOCILFLE(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int32_t length;
  OLKKAIFGGAK_OJHIDJPICJN_o *pOVar1;
  FCJBEKHDLAF_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar2;
  PJKHAJKEHEL_o *pPVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar4;
  
  if ((DAT_04568770 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    DAT_04568770 = 1;
  }
  pSVar2 = (__this->fields).OOBBJEDHHKM;
  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDHBHPILNMA__JMOLDDKBHLC(__this,true,(MethodInfo *)0x0);
    pOVar1 = (__this->fields).MPJKOPNODDM;
    if (pOVar1 != (OLKKAIFGGAK_OJHIDJPICJN_o *)0x0) {
      OLKKAIFGGAK_OJHIDJPICJN__JEHIPPMCHKO(pOVar1,(MethodInfo *)0x0);
      pOVar1 = (__this->fields).MPJKOPNODDM;
      if (pOVar1 != (OLKKAIFGGAK_OJHIDJPICJN_o *)0x0) {
        OLKKAIFGGAK_OJHIDJPICJN__PNKPICCCNEM(pOVar1,(__this->fields).OOBBJEDHHKM,(MethodInfo *)0x0);
        OLKKAIFGGAK__MHEEHMKBFCL(__this,method_00);
        CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
        (__this->fields).FCKDFGMFHHF.fields = CVar4;
        pPVar3 = (__this->fields).FAPMJJBOFEF;
        if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
          (pPVar3->fields).HLCGIMPHEKO = true;
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
            return;
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
          if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
            FCJBEKHDLAF__PIMCANMJKID(__this_00,__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

