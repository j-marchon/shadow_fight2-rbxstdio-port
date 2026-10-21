// Nekki.SF2.GUI.Dialogs.LotteryDialog$$ADLCACJDNGN @ RVA 0x32886FC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__ADLCACJDNGN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MCCHIAKPFEL_o *COPNBALDNLF,
               MethodInfo *method)

{
  IGPDCHBJAPD_JMPAGIGEFME_o *GIIFANGGEHM;
  int64_t iVar1;
  NLPJLHOEAOE_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  System_Exception_o *__this_02;
  System_String_o *message;
  undefined8 uVar4;
  MethodInfo *method_00;
  
  if ((DAT_045672cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672cf = 1;
  }
  if (COPNBALDNLF != (MCCHIAKPFEL_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    GIIFANGGEHM = MGNPHCAAEIO__FGELLDGCHFD(COPNBALDNLF,(MethodInfo *)0x0);
    if (GIIFANGGEHM != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0) {
      iVar1 = MGNPHCAAEIO__ADEEECDDBPN((GIIFANGGEHM->fields).DCDLMCEEOCC,0,(MethodInfo *)0x0);
      (GIIFANGGEHM->fields).DCDLMCEEOCC = iVar1;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
        NLPJLHOEAOE__CLIDHAEENEC(__this_00,GIIFANGGEHM,(MethodInfo *)0x0);
        __this_01 = IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD(GIIFANGGEHM,false,(MethodInfo *)0x0);
        if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          if ((__this_01->fields)._size < 1) {
            return;
          }
          method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
          IKKAMAMLIKA = (HOOAAGABMBL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,0,
                                   (MethodInfo_26E4ADC *)
                                   Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          Nekki_SF2_GUI_Dialogs_LotteryDialog__HJHIFHPBJOB(__this,IKKAMAMLIKA,method_00);
          pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
              (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) &&
             (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
            (pPVar3->fields).GMOMPDAHJOL = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04();
            pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
              Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (pNVar2,0x20,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this_02 = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5955);
  System_Exception___ctor(__this_02,message,(MethodInfo *)0x0);
  uVar4 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_ADLCACJDNGN__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_02,uVar4);
}

