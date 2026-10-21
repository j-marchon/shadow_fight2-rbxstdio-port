// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$AGOFLEMMFNJ @ RVA 0x356A3CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__AGOFLEMMFNJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,
               UnityEngine_UI_Button_o *PAOPMKEAGBI,TabView_o *EOACICBFBAM,int32_t ACMHJAJPANF,
               UnityEngine_UI_Button_o *BECCOGAMKJL,TabView_o *FNCBJFJMIPB,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o HHPABFGHALF;
  UnityEngine_Transform_o *pUVar3;
  
  if ((DAT_04568c22 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,PAOPMKEAGBI,EOACICBFBAM,ACMHJAJPANF,BECCOGAMKJL,
                 FNCBJFJMIPB,OGPGLGPMEPD);
    FUN_01bab630(&StringLiteral_18775);
    DAT_04568c22 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)FNCBJFJMIPB,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Transform_o *)(ulong)bVar1;
  if (bVar1) {
    DKIDCBPNMPD = (__this->fields)._hintPrefab;
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = HOKHHGFLMNA;
    if ((BECCOGAMKJL != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)BECCOGAMKJL,(MethodInfo *)0x0),
       pUVar3 = (UnityEngine_Transform_o *)0x0, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      HHPABFGHALF = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,10.0,-1.0,-1.0,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)0x0;
      if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                  (__this_01,StringLiteral_18775,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if ((__this->fields).OAFGKHIPFOF == false) {
      uVar2 = EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)(ulong)uVar2;
    }
    if (BECCOGAMKJL != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)BECCOGAMKJL,false,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)PAOPMKEAGBI,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)(ulong)bVar1;
      if (!bVar1) {
        return;
      }
      if (PAOPMKEAGBI != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)PAOPMKEAGBI,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pUVar3);
}

