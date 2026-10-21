// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$NBMBGKIMBBE @ RVA 0x356A25C

TabView_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__NBMBGKIMBBE
          (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,int32_t PAPNCMCIJNN,
          MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *pNVar1;
  PJKHAJKEHEL_o *pPVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o **ppNVar5;
  
  if (PAPNCMCIJNN == 3) {
    ppNVar5 = &(__this->fields)._topMedalsInfoView;
    if (*ppNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *)0x0) goto LAB_0366a30c;
    Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__Init
              (*ppNVar5,(__this->fields).MLAAJICBOAD,(MethodInfo *)0x0);
  }
  else {
    if (PAPNCMCIJNN == 1) {
      ppNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o **)
                &(__this->fields)._playerEquipmentInfoView;
      pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)*ppNVar5;
      if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)0x0) {
LAB_0366a30c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pNVar1->klass->vtable)._20_Init.methodPtr)
                (pNVar1,(__this->fields).MLAAJICBOAD,(pNVar1->klass->vtable)._20_Init.method);
      pNVar1 = (__this->fields)._playerEquipmentInfoView;
      if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)0x0) goto LAB_0366a30c;
      pPVar2 = (__this->fields).HMNHABIBKIK;
      pIVar4 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _19_UpdateContent.methodPtr;
      pMVar3 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _19_UpdateContent.method;
    }
    else {
      if (PAPNCMCIJNN != 0) {
        return (TabView_o *)0x0;
      }
      ppNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o **)
                &(__this->fields)._generalPlayerInfoView;
      pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)*ppNVar5;
      if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)0x0) goto LAB_0366a30c;
      pPVar2 = (PJKHAJKEHEL_o *)(__this->fields).MLAAJICBOAD;
      pIVar4 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _20_Init.methodPtr;
      pMVar3 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _20_Init.method;
    }
    (*pIVar4)(pNVar1,pPVar2,pMVar3);
  }
  return (TabView_o *)*ppNVar5;
}

