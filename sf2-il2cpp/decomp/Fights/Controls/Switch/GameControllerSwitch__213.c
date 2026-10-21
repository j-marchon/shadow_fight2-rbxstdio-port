// TypeDefIndex 213
// Namespace: Nekki.SF2.Core.Fights.Controls.Switch
// public class GameControllerSwitch : UIModule
// Fields:
//   private ActionButtonsSwitch _LeftActionButtons; // 0x28
//   private ActionButtonsSwitch _RightActionButtons; // 0x30
//   private static GameControllerSwitch CNMHHKAMGPI; // 0x0

// ===== public void SetBossAbilityEnabled(KKCLOOGGILP GLDAADANHOL, bool LIKMELOEJBH)  [RVA 0x311FA84]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$SetBossAbilityEnabled @ RVA 0x311FA84

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__SetBossAbilityEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,bool LIKMELOEJBH,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  long lVar1;
  
  lVar1 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar1 = 0x30;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if ((lVar1 != 0) &&
     (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar1 + 0x30) !=
      (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
    Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_IsEnabled
              (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar1 + 0x30),
               LIKMELOEJBH,(MethodInfo *)0x0);
    if ((*(UnityEngine_Component_o **)(lVar1 + 0x38) != (UnityEngine_Component_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              (*(UnityEngine_Component_o **)(lVar1 + 0x38),(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,LIKMELOEJBH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ActionButtonsSwitch get_LeftActionButtons()  [RVA 0x311FAE8]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$get_LeftActionButtons @ RVA 0x311FAE8

Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *
Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__get_LeftActionButtons
          (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._LeftActionButtons;
}


// ===== public void SetNeededPercentageToActBtn(KKCLOOGGILP GLDAADANHOL, DMMJFKCBHEK CEJGCIAOOKI, float GCFNBDDDGIF)  [RVA 0x311FAF0]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$SetNeededPercentageToActBtn @ RVA 0x311FAF0

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__SetNeededPercentageToActBtn
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,int32_t CEJGCIAOOKI,float GCFNBDDDGIF,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  UnityEngine_Behaviour_o *__this_00;
  
  if (GLDAADANHOL == -1) {
    return;
  }
  lVar2 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar2 = 0x30;
  }
  lVar2 = *(long *)((long)&__this->klass + lVar2);
  if (CEJGCIAOOKI == 0xe) {
    if ((lVar2 != 0) &&
       (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x30) !=
        (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
      Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
                (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x30),
                 GCFNBDDDGIF,(MethodInfo *)0x0);
      if (*(UnityEngine_Behaviour_o **)(lVar2 + 0x30) != (UnityEngine_Behaviour_o *)0x0) {
        bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                          (*(UnityEngine_Behaviour_o **)(lVar2 + 0x30),(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((*(long *)(lVar2 + 0x38) != 0) &&
           (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x30) !=
            (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
          __this_00 = *(UnityEngine_Behaviour_o **)(*(long *)(lVar2 + 0x38) + 0x20);
          bVar1 = Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_IsFull
                            (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)
                              (lVar2 + 0x30),(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
            UnityEngine_Behaviour__set_enabled(__this_00,bVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    if (CEJGCIAOOKI != 0xc) {
      return;
    }
    if ((lVar2 != 0) &&
       (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x28) !=
        (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
      Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
                (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x28),
                 GCFNBDDDGIF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GetBossAbilityEnabled(KKCLOOGGILP GLDAADANHOL)  [RVA 0x311FBA0]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$GetBossAbilityEnabled @ RVA 0x311FBA0

bool Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__GetBossAbilityEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar1 = 0x30;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
    return (bool)*(undefined1 *)(lVar1 + 0x6c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x311FBD4]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$GIENGNEGHPJ @ RVA 0x311FBD4

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__GIENGNEGHPJ
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *pNVar1;
  
  if ((DAT_04566617 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo);
    DAT_04566617 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->static_fields->CNMHHKAMGPI =
       __this;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->
                     static_fields,__this);
  pNVar1 = (__this->fields)._LeftActionButtons;
  if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._RightActionButtons;
    if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Init(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static GameControllerSwitch get_Current()  [RVA 0x311FC5C]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$get_Current @ RVA 0x311FC5C

Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *
Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__get_Current(MethodInfo *method)

{
  if ((DAT_04566618 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo);
    DAT_04566618 = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->static_fields->
         CNMHHKAMGPI;
}


// ===== public ActionButtonsSwitch get_RightActionButtons()  [RVA 0x311FCA4]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$get_RightActionButtons @ RVA 0x311FCA4

Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *
Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__get_RightActionButtons
          (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._RightActionButtons;
}


// ===== public void Refresh(KKCLOOGGILP GLDAADANHOL, bool GKGCMGDFHAH, bool LLDEFPNPOPI, bool DINFMCNONGH)  [RVA 0x311FCAC]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$Refresh @ RVA 0x311FCAC

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__Refresh
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,bool GKGCMGDFHAH,bool LLDEFPNPOPI,bool DINFMCNONGH,
               MethodInfo *method)

{
  long lVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this_01;
  
  lVar1 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar1 = 0x30;
  }
  __this_01 = *(Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o **)
               ((long)&__this->klass + lVar1);
  if ((__this_01 != (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,GKGCMGDFHAH,(MethodInfo *)0x0);
    Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Refresh
              (__this_01,LLDEFPNPOPI,DINFMCNONGH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x311FD1C]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$.ctor @ RVA 0x311FD1C

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch___ctor
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566619 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04566619 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x311FD74]
// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$CLNAOMIIBLH @ RVA 0x311FD74

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__CLNAOMIIBLH
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               MethodInfo *method)

{
  if ((DAT_0456661a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo);
    DAT_0456661a = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->static_fields->CNMHHKAMGPI =
       (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->
                     static_fields,0);
  return;
}

