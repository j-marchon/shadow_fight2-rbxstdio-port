// Nekki.SF2.GUI.Shop.InfoPanelContent$$NEKPFCFDNEJ @ RVA 0x300A6A4

void Nekki_SF2_GUI_Shop_InfoPanelContent__NEKPFCFDNEJ
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t CPECAEHDDDB,
               int64_t PGGOPJDLPDI,System_Action_object__o *BLMFLPJJMPF,int64_t OHLGEMOFODG,
               MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if ((DAT_04565b5d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b5d = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0);
    if (iVar3 < PGGOPJDLPDI) {
      IKKAMAMLIKA = (__this->fields).BBODGCMLKFP;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,2,(MethodInfo *)0x0);
      return;
    }
    if (CPECAEHDDDB != 1) {
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0310a858;
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (__this_00,0x41,(MethodInfo *)0x0);
      if (CPECAEHDDDB != 0) {
        return;
      }
      if (bVar1) {
        return;
      }
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
                (__this,CPECAEHDDDB,0,PGGOPJDLPDI,iVar3,BLMFLPJJMPF,2,OHLGEMOFODG,
                 in_stack_ffffffffffffffb0);
      return;
    }
  }
LAB_0310a858:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

