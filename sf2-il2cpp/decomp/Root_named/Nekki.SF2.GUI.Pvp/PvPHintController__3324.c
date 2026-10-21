// TypeDefIndex 3324
// Namespace: Nekki.SF2.GUI.Pvp
// public class PvPHintController : UIModule
// Fields:
//   private bool IJAPOOKEGNE; // 0x26
//   private HintList LAPCPDGHEIH; // 0x28
//   private HintList MBEDNBHNLOH; // 0x30

// ===== protected override void CLNAOMIIBLH()  [RVA 0x352A414]
// Nekki.SF2.GUI.Pvp.PvPHintController$$CLNAOMIIBLH @ RVA 0x352A414

void Nekki_SF2_GUI_Pvp_PvPHintController__CLNAOMIIBLH
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetRightHintListAnimationAvailable(bool EOAIBJMEPND)  [RVA 0x352A41C]
// Nekki.SF2.GUI.Pvp.PvPHintController$$SetRightHintListAnimationAvailable @ RVA 0x352A41C

void Nekki_SF2_GUI_Pvp_PvPHintController__SetRightHintListAnimationAvailable
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,bool EOAIBJMEPND,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  MethodInfo *in_x3;
  
  pNVar1 = (__this->fields).LAPCPDGHEIH;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
              (pNVar1,0x25a,EOAIBJMEPND,in_x3);
    pNVar1 = (__this->fields).LAPCPDGHEIH;
    if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
                (pNVar1,0x259,EOAIBJMEPND,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HintList get_LeftHintList()  [RVA 0x352A460]
// Nekki.SF2.GUI.Pvp.PvPHintController$$get_LeftHintList @ RVA 0x352A460

Nekki_SF2_GUI_Common_Hints_HintList_o *
Nekki_SF2_GUI_Pvp_PvPHintController__get_LeftHintList
          (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  return *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
}


// ===== public void .ctor()  [RVA 0x352A468]
// Nekki.SF2.GUI.Pvp.PvPHintController$$.ctor @ RVA 0x352A468

void Nekki_SF2_GUI_Pvp_PvPHintController___ctor
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a1b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568a1b = 1;
    method = extraout_x1;
  }
  (__this->fields).super.field_0x16 = 1;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void set_IsSinglePlayer(bool CJNHFNHJHPE)  [RVA 0x352A4C8]
// Nekki.SF2.GUI.Pvp.PvPHintController$$set_IsSinglePlayer @ RVA 0x352A4C8

void Nekki_SF2_GUI_Pvp_PvPHintController__set_IsSinglePlayer
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((bool)(__this->fields).super.field_0x16 == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).super.field_0x16 = CJNHFNHJHPE;
  Nekki_SF2_GUI_Pvp_PvPHintController__CEPJIALMEOO(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== public HintList get_RightHintList()  [RVA 0x352A560]
// Nekki.SF2.GUI.Pvp.PvPHintController$$get_RightHintList @ RVA 0x352A560

Nekki_SF2_GUI_Common_Hints_HintList_o *
Nekki_SF2_GUI_Pvp_PvPHintController__get_RightHintList
          (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  return (__this->fields).LAPCPDGHEIH;
}


// ===== public void RefreshHintsTrackingDevices()  [RVA 0x352A568]
// Nekki.SF2.GUI.Pvp.PvPHintController$$RefreshHintsTrackingDevices @ RVA 0x352A568

void Nekki_SF2_GUI_Pvp_PvPHintController__RefreshHintsTrackingDevices
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *extraout_x1_11;
  MethodInfo *extraout_x1_12;
  int32_t iVar1;
  NLIDHEAMLMC_o *pNVar2;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar3;
  
  if ((DAT_04568a1c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04568a1c = 1;
    method = extraout_x1;
  }
  pNVar3 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565e5c == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5c = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar2 != (NLIDHEAMLMC_o *)0x0) {
    if ((pNVar2->fields).ELHIGHABJBJ == 2) {
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_03;
      }
      if (DAT_04565e5c == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
        DAT_04565e5c = '\x01';
        method = extraout_x1_04;
      }
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_05;
      }
      pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
      if (pNVar2 == (NLIDHEAMLMC_o *)0x0) goto LAB_0362a75c;
      iVar1 = (pNVar2->fields).OFFPEKODFPE;
    }
    else {
      iVar1 = -1;
    }
    if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      if ((pNVar3->fields)._TrackingDeviceID != iVar1) {
        (pNVar3->fields)._TrackingDeviceID = iVar1;
        Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK(pNVar3,method);
        method = extraout_x1_06;
      }
      pNVar3 = (__this->fields).LAPCPDGHEIH;
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_07;
      }
      if (DAT_04565e5b == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
        DAT_04565e5b = '\x01';
        method = extraout_x1_08;
      }
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_09;
      }
      pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
      if (pNVar2 != (NLIDHEAMLMC_o *)0x0) {
        if ((pNVar2->fields).ELHIGHABJBJ == 2) {
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method = extraout_x1_10;
          }
          if (DAT_04565e5b == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5b = '\x01';
            method = extraout_x1_11;
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method = extraout_x1_12;
          }
          pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
          if (pNVar2 == (NLIDHEAMLMC_o *)0x0) goto LAB_0362a75c;
          iVar1 = (pNVar2->fields).OFFPEKODFPE;
        }
        else {
          iVar1 = -1;
        }
        if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          if ((pNVar3->fields)._TrackingDeviceID == iVar1) {
            return;
          }
          (pNVar3->fields)._TrackingDeviceID = iVar1;
          Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK(pNVar3,method);
          return;
        }
      }
    }
  }
LAB_0362a75c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x352A760]
// Nekki.SF2.GUI.Pvp.PvPHintController$$GIENGNEGHPJ @ RVA 0x352A760

void Nekki_SF2_GUI_Pvp_PvPHintController__GIENGNEGHPJ
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568a1d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_10595/*"PvPLeftHintList"*/);
    FUN_01bab630(&StringLiteral_10596/*"PvPRightHintList"*/);
    DAT_04568a1d = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                     (StringLiteral_10595/*"PvPLeftHintList"*/,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__)
  ;
  *(Il2CppObject **)&(__this->fields).IJAPOOKEGNE = pIVar1;
  thunk_FUN_01c20e04();
  pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
           Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                     (StringLiteral_10596/*"PvPRightHintList"*/,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__)
  ;
  (__this->fields).LAPCPDGHEIH = pNVar2;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Pvp_PvPHintController__RefreshHintsTrackingDevices(__this,method_00);
  Nekki_SF2_GUI_Pvp_PvPHintController__CEPJIALMEOO(__this,method_01);
  return;
}


// ===== public void SetLeftHintListAnimationAvailable(bool EOAIBJMEPND)  [RVA 0x352A844]
// Nekki.SF2.GUI.Pvp.PvPHintController$$SetLeftHintListAnimationAvailable @ RVA 0x352A844

void Nekki_SF2_GUI_Pvp_PvPHintController__SetLeftHintListAnimationAvailable
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,bool EOAIBJMEPND,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  MethodInfo *in_x3;
  
  pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
              (pNVar1,0x25a,EOAIBJMEPND,in_x3);
    pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
    if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
                (pNVar1,0x259,EOAIBJMEPND,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CEPJIALMEOO()  [RVA 0x352A4E4]
// Nekki.SF2.GUI.Pvp.PvPHintController$$CEPJIALMEOO @ RVA 0x352A4E4

void Nekki_SF2_GUI_Pvp_PvPHintController__CEPJIALMEOO
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  MethodInfo *pMVar2;
  MethodInfo *in_x3;
  
  pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    if ((__this->fields).super.field_0x16 == '\0') {
      pMVar2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive(pNVar1,0x25a,false,in_x3);
      pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
      if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintList__set_DescriptionActive(pNVar1,false,pMVar2);
        pNVar1 = (__this->fields).LAPCPDGHEIH;
        if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pMVar2 = (MethodInfo *)0x1;
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive(pNVar1,0x25a,true,in_x3);
      pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
      if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintList__set_DescriptionActive(pNVar1,true,pMVar2);
        pNVar1 = (__this->fields).LAPCPDGHEIH;
        if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsSinglePlayer()  [RVA 0x352A888]
// Nekki.SF2.GUI.Pvp.PvPHintController$$get_IsSinglePlayer @ RVA 0x352A888

bool Nekki_SF2_GUI_Pvp_PvPHintController__get_IsSinglePlayer
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x16;
}

