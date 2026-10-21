// TypeDefIndex 507
// Namespace: Nekki.SF2.GUI.Dialogs
// public class SettingsAdvancedDialog : SettingsDialog
// Fields:
//   private const int MAIEAHIHLNO = 650;
//   private const int JKKNKFPKALE = -680;
//   private const int KJNLFEPEOBB = 1078;
//   private const int AIAPIBNPOPI = 1000;
//   private const string FNODLMMMBEO = "SettingsButtons.sound";
//   private const string OAOPODLDHMK = "SettingsButtons.sound_off";
//   private const string JAMDEBBNADE = "SettingsButtons.music";
//   private const string KBFGLKNGCHB = "SettingsButtons.music_off";
//   private const string FBCNOBGPMHG = "SettingsButtons.graphics";
//   private const string NCEMHHDMEBC = "SettingsButtons.location";
//   private const string NFFDNDKIHBH = "SettingsButtons.controller";
//   private const string DKHECENBMEN = "SettingsButtons.withdraw_consent";
//   private const string KMLCKGBEICD = "SettingsButtons.privacy_settings";
//   protected MainSettings.CKFILIOCLJE GAKFEKMMFLB; // 0x1B0
//   private bool PINGKKPOOME; // 0x1B4
//   private ResolutionButton btnGraphics; // 0x1B8
//   private ResolutionButton btnLocationResolution; // 0x1C0
//   private ResolutionButton btnController; // 0x1C8
//   private ResolutionButton btnSoundAdv; // 0x1D0
//   private ResolutionButton btnMusicAdv; // 0x1D8
//   private ResolutionButton btnWithdrawGDPR; // 0x1E0
//   private ResolutionButton btnShowPrivacyOptions; // 0x1E8
//   private Slider soundTrackBar; // 0x1F0
//   private Slider musicTrackBar; // 0x1F8
//   private LabelAlias lblGraphics; // 0x200
//   private LabelAlias lblLocationResolution; // 0x208
//   private LabelAlias lblController; // 0x210
//   private LabelAlias lblSoundAdv; // 0x218
//   private LabelAlias lblMusicAdv; // 0x220
//   private LabelAlias lblWithdrawGDPR; // 0x228
//   private LabelAlias lblShowPrivacyOptions; // 0x230
//   private ScrollRect _scroll; // 0x238
//   private Slider _slider; // 0x240

// ===== protected void HGFBAHOOAFD(object IMMNELPBGIF)  [RVA 0x358C104]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$HGFBAHOOAFD @ RVA 0x358C104

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__HGFBAHOOAFD
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  undefined4 uVar1;
  Il2CppType *handle;
  undefined8 uVar2;
  bool bVar3;
  System_Type_o *enumType;
  System_String_o *value;
  Il2CppObject *pIVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  MethodInfo *method_00;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  System_Enum_o local_50;
  undefined4 local_40;
  undefined4 local_34;
  
  if ((DAT_04568d4a & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_11976/*"SetttingsAdvancedDialog::OnRestartDialogClose"*/);
    DAT_04568d4a = 1;
  }
  handle = Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_var;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Convert_TypeInfo);
    }
    value = System_Convert__ToString(IMMNELPBGIF,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pIVar4 = System_Enum__Parse(enumType,value,(MethodInfo *)0x0);
    if (pIVar4 == (Il2CppObject *)0x0) {
LAB_0368c354:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pIVar4->klass->_1).element_class !=
        (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    puVar5 = (undefined4 *)thunk_FUN_01bda96c();
    uVar1 = *puVar5;
    local_34 = 1;
    pIVar4 = (Il2CppObject *)
             thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_34);
    local_50.klass = (System_Enum_c *)Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo;
    local_50.monitor = (void *)0xffffffffffffffff;
    local_40 = uVar1;
    bVar3 = System_Enum__Equals(&local_50,pIVar4,(MethodInfo *)0x0);
    if (bVar3) {
      Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IHJKELCFHIE(__this,method_00);
      lVar6 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      uVar2 = StringLiteral_11976/*"SetttingsAdvancedDialog::OnRestartDialogClose"*/;
      plVar10 = (long *)**(undefined8 **)(lVar6 + 0xb8);
      if (plVar10 == (long *)0x0) goto LAB_0368c354;
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(HCOEEOMMEFL_c **)(piVar9 + -2) == HCOEEOMMEFL_TypeInfo) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0368c32c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar10,HCOEEOMMEFL_TypeInfo,1);
LAB_0368c32c:
      (*(code *)*puVar7)(plVar10,uVar2,0,puVar7[1]);
    }
  }
  return;
}


// ===== protected void IJCCOHCPGIM()  [RVA 0x358C3F0]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IJCCOHCPGIM @ RVA 0x358C3F0

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IJCCOHCPGIM
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  
  if ((DAT_04568d4b & 1) == 0) {
    FUN_01bab630(&StringLiteral_11946/*"SettingsButtons.music_off"*/);
    FUN_01bab630(&StringLiteral_11945/*"SettingsButtons.music"*/);
    DAT_04568d4b = 1;
  }
  bVar2 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
    puVar1 = &StringLiteral_11946/*"SettingsButtons.music_off"*/;
    if (!bVar2) {
      puVar1 = &StringLiteral_11945/*"SettingsButtons.music"*/;
    }
    Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
              ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnMusicAdv,
               (System_String_o *)*puVar1,0xe,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void AJCLHCLGKMM(Button LGHOMHOPNEP, LabelAlias BHLFJNNLJBF)  [RVA 0x358C470]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$AJCLHCLGKMM @ RVA 0x358C470

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__AJCLHCLGKMM
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,
               UnityEngine_UI_Button_o *LGHOMHOPNEP,Nekki_SF2_GUI_LabelAlias_o *BHLFJNNLJBF,
               MethodInfo *method)

{
  return;
}


// ===== private void EOMFJAAEFIJ(Vector2 CJNHFNHJHPE)  [RVA 0x358C474]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$EOMFJAAEFIJ @ RVA 0x358C474

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EOMFJAAEFIJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,
               UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *__this_00;
  
  __this_00 = (__this->fields)._slider;
  if (__this_00 != (UnityEngine_UI_Slider_o *)0x0) {
    UnityEngine_UI_Slider__set_normalizedValue
              (__this_00,1.0 - CJNHFNHJHPE.fields.y,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x);
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x358C498]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$LCGFJKFJKJK @ RVA 0x358C498

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568d4c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_CHJFOFKEHJB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568d4c = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,DNBBBGEENMM,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super.super._btnOK;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (__this_00 = (pLVar1->fields).super.super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super.super._btnOK;
    if (pLVar1 != (LabelButton_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected string GNEEGOFJEIN()  [RVA 0x358C554]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$GNEEGOFJEIN @ RVA 0x358C554

System_String_o *
Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__GNEEGOFJEIN
          (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MainSettings_o *pFVar2;
  undefined8 *puVar3;
  
  if ((DAT_04568d4d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11967/*"Settings_Graphics_Medium"*/);
    FUN_01bab630(&StringLiteral_11965/*"Settings_Graphics_High"*/);
    FUN_01bab630(&StringLiteral_11966/*"Settings_Graphics_Low"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d4d = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (MainSettings_o *)0x0) {
    uVar1 = (pFVar2->fields).FIIKIHJHLNJ;
    if (uVar1 < 3) {
      puVar3 = (undefined8 *)(&PTR_StringLiteral_11966/*"Settings_Graphics_Low"*/_03fc6a08)[(int)uVar1];
    }
    else {
      puVar3 = &StringLiteral_1/*""*/;
    }
    return (System_String_o *)*puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void IKJLLOJAIIO()  [RVA 0x358C63C]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IKJLLOJAIIO @ RVA 0x358C63C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IKJLLOJAIIO
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568d4e & 1) == 0) {
    FUN_01bab630(&StringLiteral_11962/*"Settings_GDPR"*/);
    DAT_04568d4e = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LAGIJBLHBDP(__this,method);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHFKMNBFHKB(__this,method_00);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LIHNMMLMLHD(__this,method_01);
  pNVar1 = (__this->fields).lblMusicAdv;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).lblSoundAdv;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
                ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).lblWithdrawGDPR,
                 StringLiteral_11962/*"Settings_GDPR"*/,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x358CE68]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$GLJGIJNALCA @ RVA 0x358CE68

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void CJNLHMPAHLJ()  [RVA 0x358CE6C]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CJNLHMPAHLJ @ RVA 0x358CE6C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CJNLHMPAHLJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *CJNHFNHJHPE;
  int32_t CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MainSettings_o *pFVar2;
  
  if ((DAT_04568d4f & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_18768/*"highQualityWarning"*/);
    DAT_04568d4f = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (MainSettings_o *)0x0) {
    iVar1 = (pFVar2->fields).FIIKIHJHLNJ;
    if (iVar1 == 2) {
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
      }
      LLKDCCJMFLE__GBFOJMJMAMF(0,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (pFVar2 != (MainSettings_o *)0x0) {
        MainSettings__HLAPEBKNMEK(pFVar2,0,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (pFVar2 != (MainSettings_o *)0x0) {
          CJNHFNHJHPE_00 = 0;
LAB_0368d0f8:
          MainSettings__KDKDLBDHKEK(pFVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (iVar1 == 1) {
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
      }
      LLKDCCJMFLE__GBFOJMJMAMF(2,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (pFVar2 != (MainSettings_o *)0x0) {
        MainSettings__HLAPEBKNMEK(pFVar2,1,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (pFVar2 != (MainSettings_o *)0x0) {
          MainSettings__KDKDLBDHKEK(pFVar2,2,(MethodInfo *)0x0);
          if ((__this->fields).PINGKKPOOME == false) {
            return;
          }
          DialogsOpener__JNDPLPKDPCP
                    (StringLiteral_17756/*"dlgAlertTitle"*/,StringLiteral_18768/*"highQualityWarning"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                     (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,
                     true,(MethodInfo *)0x0);
          (__this->fields).PINGKKPOOME = false;
          return;
        }
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
      }
      CJNHFNHJHPE = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo);
      }
      LLKDCCJMFLE__BJGGBNJEDLM(CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (pFVar2 != (MainSettings_o *)0x0) {
        MainSettings__GGJHFLDKMHA(pFVar2,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (pFVar2 != (MainSettings_o *)0x0) {
          CJNHFNHJHPE_00 = 1;
          goto LAB_0368d0f8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected string JHMNGFCLGGE()  [RVA 0x358D25C]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$JHMNGFCLGGE @ RVA 0x358D25C

System_String_o *
Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHMNGFCLGGE
          (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d50 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_11960/*"Settings_Controller_Small"*/);
    FUN_01bab630(&StringLiteral_11958/*"Settings_Controller_Large"*/);
    DAT_04568d50 = 1;
    method = extraout_x1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  bVar2 = LLKDCCJMFLE__JGNHBFFLBIB((MethodInfo *)0x0);
  puVar1 = &StringLiteral_11958/*"Settings_Controller_Large"*/;
  if (!bVar2) {
    puVar1 = &StringLiteral_11960/*"Settings_Controller_Small"*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public void .ctor()  [RVA 0x358D2E4]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$.ctor @ RVA 0x358D2E4

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog___ctor
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  (__this->fields).PINGKKPOOME = true;
  Nekki_SF2_GUI_Dialogs_SettingsDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void CHJFOFKEHJB()  [RVA 0x358D2F4]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CHJFOFKEHJB @ RVA 0x358D2F4

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CHJFOFKEHJB
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d51 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04568d51 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    CJNHFNHJHPE = Core_Configs_Models_BuildSettingsExtension__GetEULAUrl
                            (pIVar2[9].monitor,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Application__OpenURL(CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void CAOHKDDEHDD()  [RVA 0x358D3B8]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CAOHKDDEHDD @ RVA 0x358D3B8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CAOHKDDEHDD
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_UI_Slider_o *pUVar3;
  float CJNHFNHJHPE;
  
  bVar1 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  pUVar3 = (__this->fields).soundTrackBar;
  if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CJNHFNHJHPE = (float)(*(pUVar3->klass->vtable)._46_get_value.methodPtr)
                                 (pUVar3,(pUVar3->klass->vtable)._46_get_value.method);
  MFIKGMIDDIG__DEDBAGNCFLE(CJNHFNHJHPE,(MethodInfo *)0x0);
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
  bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  if (bVar1 != bVar2) {
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OIAIFGDLFHJ(__this,method_00);
    return;
  }
  return;
}


// ===== protected void KLOIFJHCFCL()  [RVA 0x358D4B4]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$KLOIFJHCFCL @ RVA 0x358D4B4

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__KLOIFJHCFCL
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void LIOAMIJBMGN(BaseEventData CLGPBCONGAD)  [RVA 0x358D4BC]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$LIOAMIJBMGN @ RVA 0x358D4BC

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LIOAMIJBMGN
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *CLGPBCONGAD,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OALAKEKPEEH(__this,false,method);
  return;
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x358D548]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$OnClose @ RVA 0x358D548

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MainSettings_o *pFVar2;
  
  method_00 = (MethodInfo *)IMMNELPBGIF;
  if ((DAT_04568d52 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d52 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = (__this->fields).GAKFEKMMFLB;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    method_00 = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_02;
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (MainSettings_o *)0x0) {
    if (iVar1 == (pFVar2->fields).FIIKIHJHLNJ) {
      Nekki_SF2_GUI_Dialogs_SettingsDialog__OnClose
                ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
      return;
    }
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OGPCODNAIIH(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void AJCLHCLGKMM(Button LGHOMHOPNEP, float NMFKJBOAOLK)  [RVA 0x358D4B8]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$AJCLHCLGKMM @ RVA 0x358D4B8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__AJCLHCLGKMM
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,
               UnityEngine_UI_Button_o *LGHOMHOPNEP,float NMFKJBOAOLK,MethodInfo *method)

{
  return;
}


// ===== private void IHJKELCFHIE()  [RVA 0x358C35C]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IHJKELCFHIE @ RVA 0x358C35C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IHJKELCFHIE
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *IMMNELPBGIF;
  undefined4 local_24;
  
  if ((DAT_04568d53 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
    DAT_04568d53 = 1;
  }
  Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,2,(Il2CppObject *)0x0,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
  local_24 = 2;
  IMMNELPBGIF = (Il2CppObject *)
                thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}


// ===== protected void OIAIFGDLFHJ()  [RVA 0x358D434]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$OIAIFGDLFHJ @ RVA 0x358D434

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OIAIFGDLFHJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  
  if ((DAT_04568d54 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11948/*"SettingsButtons.sound"*/);
    FUN_01bab630(&StringLiteral_11949/*"SettingsButtons.sound_off"*/);
    DAT_04568d54 = 1;
  }
  bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
    puVar1 = &StringLiteral_11949/*"SettingsButtons.sound_off"*/;
    if (!bVar2) {
      puVar1 = &StringLiteral_11948/*"SettingsButtons.sound"*/;
    }
    Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
              ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnSoundAdv,
               (System_String_o *)*puVar1,0xf,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void OALAKEKPEEH()  [RVA 0x358D750]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$OALAKEKPEEH @ RVA 0x358D750

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OALAKEKPEEH
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OALAKEKPEEH(__this,true,in_x2);
  return;
}


// ===== private void NFCDGCGEKCG()  [RVA 0x358D758]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$NFCDGCGEKCG @ RVA 0x358D758

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NFCDGCGEKCG
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Slider_SliderEvent_o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *pUVar3;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *__this_02;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  int32_t iVar5;
  UnityEngine_Events_UnityEvent_float__o *__this_03;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_04;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04568d55 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_EOMFJAAEFIJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_HFHPEPJPCHL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    DAT_04568d55 = 1;
  }
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  pUVar4 = (__this->fields)._scroll;
  if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar1 = (pUVar4->fields).m_Content, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._scroll;
    if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar1 = (pUVar4->fields).m_Viewport, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar7 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._scroll;
      if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        iVar5 = 2;
        if (UVar7.fields.m_Height < UVar6.fields.m_Height) {
          iVar5 = 1;
        }
        (pUVar4->fields).m_MovementType = iVar5;
        pUVar2 = (__this->fields)._slider;
        if ((pUVar2 != (UnityEngine_UI_Slider_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_00,UVar7.fields.m_Height < UVar6.fields.m_Height,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._slider;
          if ((pUVar2 != (UnityEngine_UI_Slider_o *)0x0) &&
             (__this_01 = (pUVar2->fields).m_OnValueChanged,
             __this_01 != (UnityEngine_UI_Slider_SliderEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._slider;
            if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
              __this_03 = (UnityEngine_Events_UnityEvent_float__o *)
                          (pUVar2->fields).m_OnValueChanged;
              pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
              UnityEngine_Events_UnityAction<float>___ctor();
              if (__this_03 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
                UnityEngine_Events_UnityEvent<float>__AddListener
                          (__this_03,pUVar3,
                           Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
                pUVar4 = (__this->fields)._scroll;
                if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                   (__this_02 = (pUVar4->fields).m_OnValueChanged,
                   __this_02 != (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)0x0)) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                            ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._scroll;
                  if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    __this_04 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                (pUVar4->fields).m_OnValueChanged;
                    pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                    UnityEngine_Events_UnityAction<Vector2>___ctor();
                    if (__this_04 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                      UnityEngine_Events_UnityEvent<Vector2>__AddListener
                                (__this_04,pUVar3,
                                 Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLANJNFACKI()  [RVA 0x358D928]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$GLANJNFACKI @ RVA 0x358D928

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GLANJNFACKI
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0368d94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._38_CHNHJAJGLLO.methodPtr)
            (__this,(__this->klass->vtable)._38_CHNHJAJGLLO.method);
  return;
}


// ===== protected void KFJOHIAICNM()  [RVA 0x358D950]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$KFJOHIAICNM @ RVA 0x358D950

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__KFJOHIAICNM
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Action_o *pSVar3;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_01;
  UnityEngine_EventSystems_EventTrigger_Entry_o *__this_02;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_EventSystems_EventTrigger_o *__this_03;
  System_Collections_Generic_List_EventTrigger_Entry__o *__this_04;
  MethodInfo *pMVar4;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *__this_05;
  float fVar7;
  
  if ((DAT_04568d56 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<EventTrigger>__);
    FUN_01bab630(&UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_CAOHKDDEHDD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_LIOAMIJBMGN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_OALAKEKPEEH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
    DAT_04568d56 = 1;
  }
  pUVar6 = (__this->fields).soundTrackBar;
  fVar7 = MFIKGMIDDIG__IBNHGIOPFNP((MethodInfo *)0x0);
  pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  pMVar4 = (MethodInfo *)0x0;
  System_Action___ctor();
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NOLAKHFHEBH(__this_00,pUVar6,fVar7,pSVar3,pMVar4);
  pUVar6 = (__this->fields).musicTrackBar;
  fVar7 = MFIKGMIDDIG__IEONOAEPPCN((MethodInfo *)0x0);
  pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  pMVar4 = (MethodInfo *)0x0;
  System_Action___ctor();
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NOLAKHFHEBH(__this_01,pUVar6,fVar7,pSVar3,pMVar4);
  __this_02 = (UnityEngine_EventSystems_EventTrigger_Entry_o *)
              thunk_FUN_01bda818(UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
  UnityEngine_EventSystems_EventTrigger_Entry___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
    (__this_02->fields).eventID = 5;
    __this_05 = (__this_02->fields).callback;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_05 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_05,call,
                 Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
      pUVar6 = (__this->fields).musicTrackBar;
      if (((pUVar6 != (UnityEngine_UI_Slider_o *)0x0) &&
          (__this_03 = (UnityEngine_EventSystems_EventTrigger_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar6,
                                  Method_UnityEngine_Component_GetComponent<EventTrigger>__),
          __this_03 != (UnityEngine_EventSystems_EventTrigger_o *)0x0)) &&
         (__this_04 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                (__this_03,(MethodInfo *)0x0),
         lVar2 = Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__,
         __this_04 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)) {
        pUVar5 = (__this_04->fields)._items;
        (__this_04->fields)._version = (__this_04->fields)._version + 1;
        if (pUVar5 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0) {
          uVar1 = (__this_04->fields)._size;
          if (uVar1 < (uint)pUVar5->max_length) {
            (__this_04->fields)._size = uVar1 + 1;
            pUVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pUVar5->m_Items + (int)uVar1,__this_02);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,
                     (Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected string EDOGILFHCPD()  [RVA 0x358DECC]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$EDOGILFHCPD @ RVA 0x358DECC

System_String_o *
Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EDOGILFHCPD
          (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d57 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_11965/*"Settings_Graphics_High"*/);
    FUN_01bab630(&StringLiteral_11966/*"Settings_Graphics_Low"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d57 = 1;
    method = extraout_x1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  iVar3 = LLKDCCJMFLE__HEHLBJLOCOO((MethodInfo *)0x0);
  puVar1 = &StringLiteral_11965/*"Settings_Graphics_High"*/;
  if (iVar3 != 1) {
    puVar1 = &StringLiteral_1/*""*/;
  }
  puVar2 = &StringLiteral_11966/*"Settings_Graphics_Low"*/;
  if (iVar3 != 0) {
    puVar2 = puVar1;
  }
  return (System_String_o *)*puVar2;
}


// ===== protected void OGPCODNAIIH()  [RVA 0x358D614]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$OGPCODNAIIH @ RVA 0x358D614

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OGPCODNAIIH
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d58 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_HGFBAHOOAFD__);
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_17832/*"dlgSettingsRestart"*/);
    FUN_01bab630(&StringLiteral_17828/*"dlgServiceBtnLater"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17831/*"dlgServiceRestart"*/);
    DAT_04568d58 = 1;
    method = extraout_x1;
  }
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  DialogsOpener__JNDPLPKDPCP
            (StringLiteral_17756/*"dlgAlertTitle"*/,StringLiteral_17832/*"dlgSettingsRestart"*/,StringLiteral_17831/*"dlgServiceRestart"*/,StringLiteral_17828/*"dlgServiceBtnLater"*/,
             IELDNEAAPBE,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
  return;
}


// ===== protected void LIHNMMLMLHD()  [RVA 0x358CBE8]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$LIHNMMLMLHD @ RVA 0x358CBE8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LIHNMMLMLHD
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_00;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  long lVar8;
  Il2CppClass *pIVar9;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_c *pNVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_04568d59 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11959/*"Settings_Controller_Scale"*/);
    DAT_04568d59 = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).lblController,
             StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar8 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar15 = StringLiteral_11959/*"Settings_Controller_Scale"*/;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar3->klass;
    uVar14 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar13 + 0xc);
          goto LAB_0368cd3c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368cd3c:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar15,uVar14,pVVar5->method);
    __this_00 = (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)
                EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHMNGFCLGGE(__this_00,method_00);
    lVar4 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar4 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
      pNVar10 = __this_00->klass;
      uVar15 = **(undefined8 **)(lVar4 + 0xb8);
      uVar2._0_1_ = (pNVar10->_2).rank;
      uVar2._1_1_ = (pNVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pNVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = &(pNVar10->vtable)._0_Equals + (*piVar13 + 0xc);
            goto LAB_0368ce10;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368ce10:
      pSVar7 = (System_String_o *)(*pVVar5->methodPtr)(__this_00,pSVar7,uVar15,pVVar5->method);
      pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
      pNVar11 = (__this->fields).lblController;
      if (pNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
                  (pNVar11,pSVar6,(pNVar11->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void OALAKEKPEEH(bool LODKPINFHCO)  [RVA 0x358D4C4]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$OALAKEKPEEH @ RVA 0x358D4C4

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OALAKEKPEEH
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,bool LODKPINFHCO,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_UI_Slider_o *pUVar3;
  float CJNHFNHJHPE;
  
  bVar1 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
  pUVar3 = (__this->fields).musicTrackBar;
  if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CJNHFNHJHPE = (float)(*(pUVar3->klass->vtable)._46_get_value.methodPtr)
                                 (pUVar3,(pUVar3->klass->vtable)._46_get_value.method);
  MFIKGMIDDIG__ICHPKMALDCH(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (LODKPINFHCO) {
    EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
  }
  bVar2 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
  if (bVar1 != bVar2) {
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IJCCOHCPGIM(__this,method_00);
    return;
  }
  return;
}


// ===== protected void EKCBICOGJMJ()  [RVA 0x358DF70]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$EKCBICOGJMJ @ RVA 0x358DF70

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EKCBICOGJMJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_00;
  
  if ((DAT_04568d5a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d5a = 1;
    method = extraout_x1;
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo,method);
    DAT_04565c84 = '\x01';
  }
  __this_00 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_GameController__UpdateTouchControlsScale
                (__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected override void HCNNHNAIJFB(object IMMNELPBGIF)  [RVA 0x358E020]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$HCNNHNAIJFB @ RVA 0x358E020

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__HCNNHNAIJFB
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_00;
  long lVar4;
  undefined8 *puVar5;
  KPKMEEIPCJA_o *pKVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UnityEngine_UI_Slider_c *pUVar8;
  KPKMEEIPCJA_c *pKVar9;
  ulong uVar10;
  int *piVar11;
  int32_t *piVar12;
  long *plVar13;
  UnityEngine_UI_Slider_o *pUVar14;
  float fVar15;
  
  if ((DAT_04568d5b & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HIAKLHMMHDG,_LAJPNJAAODE>_AIHNLLGNBLC__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368dd5c with catch @ 0368e068
                        */
    FUN_01bab630(&LAJPNJAAODE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368dd4c with catch @ 0368e06c
                        */
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SettingsDialog_NNONPKOFELD_TypeInfo);
                    /* try { // try from 0368e084 to 0378e087 has its CatchHandler @ 0368e0b0 */
                    /* try { // try from 0368e088 to 0378e0bf has its CatchHandler @ 0368dbdc */
    DAT_04568d5b = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0368e3c0;
                    /* catch() { ... } // from try @ 0368e084 with catch @ 0368e0b0 */
  if ((IMMNELPBGIF->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_SettingsDialog_NNONPKOFELD_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  puVar3 = (undefined4 *)thunk_FUN_01bda96c();
                    /* try { // try from 0368e0c0 to 0378e0c7 has its CatchHandler @ 0368e0dc */
                    /* try { // try from 0368e0c8 to 0378e0d3 has its CatchHandler @ 0368dbdc */
                    /* try { // try from 0368e0d4 to 0378e0db has its CatchHandler @ 0368e0dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368e0c0 with catch @ 0368e0dc
                       catch(type#2 @ 00000000) { ... } // from try @ 0368e0d4 with catch @ 0368e0dc
                        */
  switch(*puVar3) {
  case 0xb:
                    /* try { // try from 0368e0e0 to 0378e1f7 has its CatchHandler @ 0368e0e0
                       catch() { ... } // from try @ 0368e0e0 with catch @ 0368e0e0
                       catch() { ... } // from try @ 0368e280 with catch @ 0368e0e0
                       catch() { ... } // from try @ 0368e2a0 with catch @ 0368e0e0
                       catch() { ... } // from try @ 0368e310 with catch @ 0368e0e0
                       catch() { ... } // from try @ 0368e350 with catch @ 0368e0e0
                       catch() { ... } // from try @ 0368e384 with catch @ 0368e0e0 */
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CJNLHMPAHLJ(__this,method_00);
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LAGIJBLHBDP(__this,method_01);
    return;
  case 0xc:
                    /* try { // try from 0368e1f8 to 0378e1ff has its CatchHandler @ 0368e33c */
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
                    /* try { // try from 0368e20c to 0378e217 has its CatchHandler @ 0368e338 */
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LLKDCCJMFLE__KOCIBNGKCIG((MethodInfo *)0x0);
                    /* try { // try from 0368e228 to 0378e22f has its CatchHandler @ 0368e334 */
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHFKMNBFHKB(__this,method_05);
    return;
  case 0xd:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LLKDCCJMFLE__EJFBCLIKGJF((MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LIHNMMLMLHD(__this,method_02);
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EKCBICOGJMJ(__this_00,method_03);
    return;
  case 0xe:
    bVar2 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
    MFIKGMIDDIG__FDOGCCOEHPL((bool)(~bVar2 & 1),(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    pUVar14 = (__this->fields).musicTrackBar;
    bVar2 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
    fVar15 = 0.0;
    if (!bVar2) {
      fVar15 = MFIKGMIDDIG__IEONOAEPPCN((MethodInfo *)0x0);
    }
    if (pUVar14 != (UnityEngine_UI_Slider_o *)0x0) {
      (*(pUVar14->klass->vtable)._47_set_value.methodPtr)
                (fVar15,pUVar14,(pUVar14->klass->vtable)._47_set_value.method);
      Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IJCCOHCPGIM(__this,method_04);
      return;
    }
    goto LAB_0368e3c0;
  case 0xf:
    bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
    MFIKGMIDDIG__NEKJIEEEPFO((bool)(~bVar2 & 1),(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
    pUVar14 = (__this->fields).soundTrackBar;
    if (bVar2) {
      if (pUVar14 != (UnityEngine_UI_Slider_o *)0x0) {
        pUVar8 = pUVar14->klass;
        fVar15 = 0.0;
LAB_0368e354:
        (*(pUVar8->vtable)._47_set_value.methodPtr)
                  (fVar15,pUVar14,(pUVar8->vtable)._47_set_value.method);
        Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OIAIFGDLFHJ(__this,method_06);
        return;
      }
    }
    else {
      fVar15 = MFIKGMIDDIG__IBNHGIOPFNP((MethodInfo *)0x0);
                    /* try { // try from 0368e34c to 0378e34f has its CatchHandler @ 0368e374 */
      if (pUVar14 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* try { // try from 0368e350 to 0378e37b has its CatchHandler @ 0368e0e0 */
        pUVar8 = pUVar14->klass;
        goto LAB_0368e354;
      }
    }
LAB_0368e3c0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  case 0x10:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
                    /* try { // try from 0368e244 to 0378e24b has its CatchHandler @ 0368e28c */
    lVar4 = *(long *)(Method_GOCLIOIANDK<HIAKLHMMHDG,_LAJPNJAAODE>_AIHNLLGNBLC__ + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
                    /* try { // try from 0368e254 to 0378e26b has its CatchHandler @ 0368e288 */
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    plVar13 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    if (plVar13 != (long *)0x0) {
                    /* try { // try from 0368e278 to 0378e27f has its CatchHandler @ 0368e330 */
      lVar4 = *plVar13;
                    /* try { // try from 0368e280 to 0378e29b has its CatchHandler @ 0368e0e0 */
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 0368e254 with catch @ 0368e288 */
      if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 0368e244 with catch @ 0368e28c */
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 0368e29c to 0378e29f has its CatchHandler @ 0368e314 */
          if (*(LAJPNJAAODE_c **)(piVar11 + -2) == LAJPNJAAODE_TypeInfo) {
                    /* catch() { ... } // from try @ 0368e34c with catch @ 0368e374 */
                    /* try { // try from 0368e37c to 0378e383 has its CatchHandler @ 0368e398 */
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_0368e384;
          }
                    /* try { // try from 0368e2a0 to 0378e2df has its CatchHandler @ 0368e0e0 */
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar13,LAJPNJAAODE_TypeInfo,3);
LAB_0368e384:
                    /* try { // try from 0368e384 to 0378e38f has its CatchHandler @ 0368e0e0 */
                    /* try { // try from 0368e390 to 0378e397 has its CatchHandler @ 0368e398 */
                    /* WARNING: Could not recover jumptable at 0x0368e394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar13,puVar5[1]);
      return;
    }
    break;
  case 0x11:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0368e2e0 to 0378e2fb has its CatchHandler @ 0368e398 */
    pKVar6 = IFAMAAGNCBJ__GEGPHEPFMAO((MethodInfo *)0x0);
    if (pKVar6 != (KPKMEEIPCJA_o *)0x0) {
      pKVar9 = pKVar6->klass;
      uVar1._0_1_ = (pKVar9->_2).rank;
      uVar1._1_1_ = (pKVar9->_2).minimumAlignment;
                    /* try { // try from 0368e2fc to 0378e2ff has its CatchHandler @ 0368e32c */
      uVar10 = (ulong)uVar1;
                    /* try { // try from 0368e300 to 0378e307 has its CatchHandler @ 0368e328 */
      if (uVar10 != 0) {
                    /* try { // try from 0368e308 to 0378e30b has its CatchHandler @ 0368e324 */
                    /* try { // try from 0368e30c to 0378e30f has its CatchHandler @ 0368e320 */
        piVar12 = &((pKVar9->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 0368e310 to 0378e34b has its CatchHandler @ 0368e0e0 */
                    /* catch() { ... } // from try @ 0368e29c with catch @ 0368e314 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
                    /* catch() { ... } // from try @ 0368e2e0 with catch @ 0368e398
                       catch() { ... } // from try @ 0368e37c with catch @ 0368e398
                       catch() { ... } // from try @ 0368e390 with catch @ 0368e398 */
            pVVar7 = pKVar9->vtable + (*piVar12 + 4);
            goto LAB_0368e3a8;
          }
          uVar10 = uVar10 - 1;
                    /* catch() { ... } // from try @ 0368e30c with catch @ 0368e320 */
          piVar12 = piVar12 + 4;
                    /* catch() { ... } // from try @ 0368e308 with catch @ 0368e324 */
        } while (uVar10 != 0);
      }
                    /* catch() { ... } // from try @ 0368e300 with catch @ 0368e328 */
                    /* catch() { ... } // from try @ 0368e2fc with catch @ 0368e32c */
                    /* catch() { ... } // from try @ 0368e278 with catch @ 0368e330 */
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KPKMEEIPCJA_TypeInfo,4);
                    /* catch() { ... } // from try @ 0368e228 with catch @ 0368e334 */
LAB_0368e3a8:
                    /* WARNING: Could not recover jumptable at 0x0368e3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(pKVar6,0,pVVar7->method);
      return;
    }
  }
                    /* catch() { ... } // from try @ 0368e20c with catch @ 0368e338 */
                    /* catch() { ... } // from try @ 0368e1f8 with catch @ 0368e33c */
  return;
}


// ===== protected void LAGIJBLHBDP()  [RVA 0x358C6E8]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$LAGIJBLHBDP @ RVA 0x358C6E8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LAGIJBLHBDP
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_00;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  long lVar8;
  Il2CppClass *pIVar9;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_c *pNVar10;
  ulong uVar11;
  int32_t *piVar12;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_04568d5c & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_11968/*"Settings_Graphics_Quality"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d5c = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).lblGraphics,
             StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pNVar13 = (__this->fields).lblGraphics;
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar8 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar15 = StringLiteral_11968/*"Settings_Graphics_Quality"*/;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar3->klass;
    uVar14 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar12 + 0xc);
          goto LAB_0368c840;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368c840:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar15,uVar14,pVVar5->method);
    __this_00 = (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)
                EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__GNEEGOFJEIN(__this_00,method_00);
    lVar4 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar4 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
      pNVar10 = __this_00->klass;
      uVar15 = **(undefined8 **)(lVar4 + 0xb8);
      uVar2._0_1_ = (pNVar10->_2).rank;
      uVar2._1_1_ = (pNVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar12 = &((pNVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = &(pNVar10->vtable)._0_Equals + (*piVar12 + 0xc);
            goto LAB_0368c914;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368c914:
      pSVar7 = (System_String_o *)(*pVVar5->methodPtr)(__this_00,pSVar7,uVar15,pVVar5->method);
      pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
      if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368c960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                  (pNVar13,pSVar6,(pNVar13->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x358E3C8]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$Init @ RVA 0x358E3C8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__Init
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *extraout_x1;
  Il2CppObject *extraout_x1_00;
  Il2CppObject *extraout_x1_01;
  MainSettings_o *pFVar2;
  
  if ((DAT_04568d5d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0368e3f4 to 0378e5f3 has its CatchHandler @ 0368e3f4
                       catch() { ... } // from try @ 0368e3f4 with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e6dc with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e878 with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e880 with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e940 with catch @ 0368e3f4 */
    FUN_01bab630(&StringLiteral_20955/*"settingsEULA"*/);
    FUN_01bab630(&StringLiteral_11955/*"Settings_Advanced_Title"*/);
    FUN_01bab630(&StringLiteral_11956/*"Settings_Back"*/);
    DAT_04568d5d = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,IMMNELPBGIF);
    IMMNELPBGIF = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    IMMNELPBGIF = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,IMMNELPBGIF);
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (MainSettings_o *)0x0) {
    iVar1 = (pFVar2->fields).FIIKIHJHLNJ;
    (__this->fields).PINGKKPOOME = false;
    (__this->fields).super.super.IsPausing = false;
    (__this->fields).GAKFEKMMFLB = iVar1;
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_11955/*"Settings_Advanced_Title"*/,StringLiteral_20955/*"settingsEULA"*/,
               StringLiteral_11956/*"Settings_Back"*/,3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void JOHIFADKBLJ()  [RVA 0x358E4C0]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$JOHIFADKBLJ @ RVA 0x358E4C0

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JOHIFADKBLJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void CHNHJAJGLLO()  [RVA 0x358E4C4]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CHNHJAJGLLO @ RVA 0x358E4C4

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CHNHJAJGLLO
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  
  pNVar1 = (__this->fields).super.super._topStripe;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,650.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.super._topStripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).super.super._topStripe;
      if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = UVar5.fields.m_Height;
          value.fields.x = 1078.0;
          UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).super.super._bottomStripe;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,-680.0,(MethodInfo *)0x0);
            pNVar1 = (__this->fields).super.super._bottomStripe;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
              pNVar1 = (__this->fields).super.super._bottomStripe;
              if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                 (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                                     ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
                UVar5 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  value_00.fields.y = UVar5.fields.m_Height;
                  value_00.fields.x = 1000.0;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar3,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void IIHMBEPEFDJ()  [RVA 0x358E5BC]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IIHMBEPEFDJ @ RVA 0x358E5BC

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IIHMBEPEFDJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  KPKMEEIPCJA_o *pKVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  KPKMEEIPCJA_c *pKVar7;
  ulong uVar8;
  int32_t *piVar9;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar10;
  
                    /* try { // try from 0368e5f4 to 0378e61b has its CatchHandler @ 0368e8a4 */
  if ((DAT_04568d5e & 1) == 0) {
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_11936/*"SettingsButtons.controller"*/);
    FUN_01bab630(&StringLiteral_11951/*"SettingsButtons.withdraw_consent"*/);
    FUN_01bab630(&StringLiteral_11947/*"SettingsButtons.privacy_settings"*/);
                    /* try { // try from 0368e650 to 0378e69b has its CatchHandler @ 0368e8ac */
    FUN_01bab630(&StringLiteral_11941/*"SettingsButtons.graphics"*/);
    FUN_01bab630(&StringLiteral_11944/*"SettingsButtons.location"*/);
    DAT_04568d5e = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnGraphics,
             StringLiteral_11941/*"SettingsButtons.graphics"*/,0xb,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnLocationResolution
             ,StringLiteral_11944/*"SettingsButtons.location"*/,0xc,(MethodInfo *)0x0);
                    /* try { // try from 0368e6a0 to 0378e6a7 has its CatchHandler @ 0368e8a0 */
                    /* try { // try from 0368e6ac to 0378e6b7 has its CatchHandler @ 0368e894 */
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnController,
             StringLiteral_11936/*"SettingsButtons.controller"*/,0xd,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnWithdrawGDPR,
             StringLiteral_11951/*"SettingsButtons.withdraw_consent"*/,0x10,(MethodInfo *)0x0);
                    /* try { // try from 0368e6d0 to 0378e6db has its CatchHandler @ 0368e890 */
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368e6dc to 0378e863 has its CatchHandler @ 0368e3f4 */
  pKVar4 = IFAMAAGNCBJ__GEGPHEPFMAO((MethodInfo *)0x0);
  if (pKVar4 != (KPKMEEIPCJA_o *)0x0) {
    pKVar7 = pKVar4->klass;
    uVar1._0_1_ = (pKVar7->_2).rank;
    uVar1._1_1_ = (pKVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pKVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
          pVVar5 = pKVar7->vtable + (*piVar9 + 1);
          goto LAB_0368e744;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KPKMEEIPCJA_TypeInfo,1);
LAB_0368e744:
    iVar3 = (*pVVar5->methodPtr)(pKVar4,pVVar5->method);
    if (iVar3 != 1) {
      Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
                ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,
                 (__this->fields).btnShowPrivacyOptions,StringLiteral_11947/*"SettingsButtons.privacy_settings"*/,0x11,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
      goto LAB_0368e7e0;
    }
  }
  pNVar10 = (__this->fields).btnShowPrivacyOptions;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar10,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar2) {
    pNVar10 = (__this->fields).btnShowPrivacyOptions;
    if ((((pNVar10 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar6 = UnityEngine_Transform__get_parent(pUVar6,(MethodInfo *)0x0),
        pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
LAB_0368e7e0:
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IJCCOHCPGIM(__this,method_00);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OIAIFGDLFHJ(__this,method_01);
  return;
}


// ===== private void HFHPEPJPCHL(float CJNHFNHJHPE)  [RVA 0x358E804]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$HFHPEPJPCHL @ RVA 0x358E804

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__HFHPEPJPCHL
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UVar2 = UnityEngine_UI_ScrollRect__get_normalizedPosition(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      UVar2.fields.y = 1.0 - CJNHFNHJHPE;
      UnityEngine_UI_ScrollRect__set_normalizedPosition(pUVar1,UVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void JBFCMIMJLCF()  [RVA 0x358E848]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$JBFCMIMJLCF @ RVA 0x358E848

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JBFCMIMJLCF
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected void JHFKMNBFHKB()  [RVA 0x358C968]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$JHFKMNBFHKB @ RVA 0x358C968

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHFKMNBFHKB
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_00;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  long lVar8;
  Il2CppClass *pIVar9;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_c *pNVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_04568d5f & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_11969/*"Settings_Location_Resolution"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d5f = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).lblLocationResolution
             ,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar8 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar15 = StringLiteral_11969/*"Settings_Location_Resolution"*/;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar3->klass;
    uVar14 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar13 + 0xc);
          goto LAB_0368cabc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368cabc:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar15,uVar14,pVVar5->method);
    __this_00 = (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)
                EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EDOGILFHCPD(__this_00,method_00);
    lVar4 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar4 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
      pNVar10 = __this_00->klass;
      uVar15 = **(undefined8 **)(lVar4 + 0xb8);
      uVar2._0_1_ = (pNVar10->_2).rank;
      uVar2._1_1_ = (pNVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pNVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = &(pNVar10->vtable)._0_Equals + (*piVar13 + 0xc);
            goto LAB_0368cb90;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368cb90:
      pSVar7 = (System_String_o *)(*pVVar5->methodPtr)(__this_00,pSVar7,uVar15,pVVar5->method);
      pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
      pNVar11 = (__this->fields).lblLocationResolution;
      if (pNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368cbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
                  (pNVar11,pSVar6,(pNVar11->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FJCMEBJDHPB()  [RVA 0x358E84C]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$FJCMEBJDHPB @ RVA 0x358E84C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__FJCMEBJDHPB
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool value;
  int32_t GMGGINDHNPI;
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).btnLocationResolution;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0368e864 to 0378e867 has its CatchHandler @ 0368e8a8 */
                    /* try { // try from 0368e868 to 0378e86b has its CatchHandler @ 0368e89c */
    GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
                    /* try { // try from 0368e86c to 0378e86f has its CatchHandler @ 0368e8a8 */
                    /* try { // try from 0368e870 to 0378e873 has its CatchHandler @ 0368e898 */
    value = GNAFJMPJNKI__NCOIGMBGENK(GMGGINDHNPI,(MethodInfo *)0x0);
                    /* try { // try from 0368e874 to 0378e877 has its CatchHandler @ 0368e88c */
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0368e878 to 0378e87b has its CatchHandler @ 0368e3f4 */
                    /* try { // try from 0368e87c to 0378e87f has its CatchHandler @ 0368e888 */
                    /* try { // try from 0368e880 to 0378e8bb has its CatchHandler @ 0368e3f4 */
                    /* catch() { ... } // from try @ 0368e87c with catch @ 0368e888 */
      UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368e874 with catch @ 0368e88c */
  FUN_01bab8c8();
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x358E890]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$GKPJMHOFIOO @ RVA 0x358E890

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
                    /* catch() { ... } // from try @ 0368e6d0 with catch @ 0368e890 */
                    /* catch() { ... } // from try @ 0368e6ac with catch @ 0368e894 */
                    /* catch() { ... } // from try @ 0368e870 with catch @ 0368e898 */
                    /* catch() { ... } // from try @ 0368e868 with catch @ 0368e89c */
                    /* catch() { ... } // from try @ 0368e6a0 with catch @ 0368e8a0 */
                    /* catch() { ... } // from try @ 0368e5f4 with catch @ 0368e8a4 */
  (*(__this->klass->vtable)._37_IIHMBEPEFDJ.methodPtr)
            (__this,(__this->klass->vtable)._37_IIHMBEPEFDJ.method);
                    /* catch() { ... } // from try @ 0368e864 with catch @ 0368e8a8
                       catch() { ... } // from try @ 0368e86c with catch @ 0368e8a8 */
                    /* catch() { ... } // from try @ 0368e650 with catch @ 0368e8ac */
  (*(__this->klass->vtable)._34_IKJLLOJAIIO.methodPtr)
            (__this,(__this->klass->vtable)._34_IKJLLOJAIIO.method);
                    /* try { // try from 0368e8bc to 0378e8bf has its CatchHandler @ 0368e8d0 */
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__KFJOHIAICNM(__this,method_00);
                    /* catch() { ... } // from try @ 0368e8bc with catch @ 0368e8d0 */
  (*(__this->klass->vtable)._35_JBFCMIMJLCF.methodPtr)
            (__this,(__this->klass->vtable)._35_JBFCMIMJLCF.method);
                    /* try { // try from 0368e8d8 to 0378e93f has its CatchHandler @ 0368e954 */
  (*(__this->klass->vtable)._36_JOHIFADKBLJ.methodPtr)
            (__this,(__this->klass->vtable)._36_JOHIFADKBLJ.method);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__FJCMEBJDHPB(__this,method_01);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NFCDGCGEKCG(__this,method_02);
  pLVar1 = (__this->fields).super.super._btnCancel;
  if (pLVar1 != (LabelButton_o *)0x0) {
    LabelButton__set_ButtonColor(pLVar1,0,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super.super._btnOK;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_ButtonColor(pLVar1,5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void NOLAKHFHEBH(Slider BJAFLPFDLDB, float CJNHFNHJHPE, Action IELDNEAAPBE)  [RVA 0x358DBA0]
// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$NOLAKHFHEBH @ RVA 0x358DBA0

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NOLAKHFHEBH
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,
               UnityEngine_UI_Slider_o *BJAFLPFDLDB,float CJNHFNHJHPE,System_Action_o *IELDNEAAPBE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_EventSystems_EventTrigger_Entry_o *pUVar3;
  UnityEngine_Events_UnityAction_T0__o *pUVar4;
  UnityEngine_EventSystems_EventTrigger_o *pUVar5;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar6;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar7;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *pUVar8;
  undefined4 in_register_00005004;
  
  if ((DAT_04568d60 & 1) == 0) {
                    /* try { // try from 0368dbdc to 0378dd4b has its CatchHandler @ 0368dbdc
                       catch() { ... } // from try @ 0368dbdc with catch @ 0368dbdc
                       catch() { ... } // from try @ 0368dd74 with catch @ 0368dbdc
                       catch() { ... } // from try @ 0368e088 with catch @ 0368dbdc
                       catch() { ... } // from try @ 0368e0c8 with catch @ 0368dbdc */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<EventTrigger>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_BLOFGINLIFA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_NOOFOPIMFLO__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
    DAT_04568d60 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)IELDNEAAPBE;
    thunk_FUN_01c20e04(__this_00 + 1,IELDNEAAPBE);
    if ((BJAFLPFDLDB != (UnityEngine_UI_Slider_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)BJAFLPFDLDB,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      UnityEngine_UI_Slider__set_minValue(BJAFLPFDLDB,0.0,(MethodInfo *)0x0);
      UnityEngine_UI_Slider__set_maxValue(BJAFLPFDLDB,1.0,(MethodInfo *)0x0);
      (*(BJAFLPFDLDB->klass->vtable)._47_set_value.methodPtr)
                (CONCAT44(in_register_00005004,CJNHFNHJHPE),BJAFLPFDLDB,
                 (BJAFLPFDLDB->klass->vtable)._47_set_value.method);
      pUVar3 = (UnityEngine_EventSystems_EventTrigger_Entry_o *)
               thunk_FUN_01bda818(UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
      UnityEngine_EventSystems_EventTrigger_Entry___ctor(pUVar3,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
        (pUVar3->fields).eventID = 0xe;
        pUVar8 = (pUVar3->fields).callback;
        pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (pUVar8 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)pUVar8,pUVar4,
                     Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
          pUVar5 = (UnityEngine_EventSystems_EventTrigger_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)BJAFLPFDLDB,
                              Method_UnityEngine_Component_GetComponent<EventTrigger>__);
                    /* try { // try from 0368dd4c to 0378dd53 has its CatchHandler @ 0368e06c */
          if ((pUVar5 != (UnityEngine_EventSystems_EventTrigger_o *)0x0) &&
             (pSVar6 = UnityEngine_EventSystems_EventTrigger__get_triggers(pUVar5,(MethodInfo *)0x0)
             , lVar2 = Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__,
             pSVar6 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)) {
                    /* try { // try from 0368dd5c to 0378dd73 has its CatchHandler @ 0368e068 */
            pUVar7 = (pSVar6->fields)._items;
                    /* try { // try from 0368dd74 to 0378e083 has its CatchHandler @ 0368dbdc */
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pUVar7 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0) {
              uVar1 = (pSVar6->fields)._size;
              if (uVar1 < (uint)pUVar7->max_length) {
                (pSVar6->fields)._size = uVar1 + 1;
                pUVar7->m_Items[(int)uVar1] = pUVar3;
                thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1,pUVar3);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (Il2CppObject *)pUVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pUVar3 = (UnityEngine_EventSystems_EventTrigger_Entry_o *)
                       thunk_FUN_01bda818(UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
              UnityEngine_EventSystems_EventTrigger_Entry___ctor(pUVar3,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
                (pUVar3->fields).eventID = 4;
                pUVar8 = (pUVar3->fields).callback;
                pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
                UnityEngine_Events_UnityAction<object>___ctor();
                if (pUVar8 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent<object>__AddListener
                            ((UnityEngine_Events_UnityEvent_T0__o *)pUVar8,pUVar4,
                             Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
                  pUVar5 = (UnityEngine_EventSystems_EventTrigger_o *)
                           UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)BJAFLPFDLDB,
                                      Method_UnityEngine_Component_GetComponent<EventTrigger>__);
                  if ((pUVar5 != (UnityEngine_EventSystems_EventTrigger_o *)0x0) &&
                     (pSVar6 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                         (pUVar5,(MethodInfo *)0x0),
                     lVar2 = Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__,
                     pSVar6 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)) {
                    pUVar7 = (pSVar6->fields)._items;
                    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                    if (pUVar7 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0) {
                      uVar1 = (pSVar6->fields)._size;
                      if (uVar1 < (uint)pUVar7->max_length) {
                        (pSVar6->fields)._size = uVar1 + 1;
                        pUVar7->m_Items[(int)uVar1] = pUVar3;
                        thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1,pUVar3);
                        return;
                      }
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar6,
                                 (Il2CppObject *)pUVar3,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

