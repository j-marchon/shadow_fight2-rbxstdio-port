// TypeDefIndex 707
// Namespace: Nekki.SF2.GUI.Fight
// public class PauseScreen : MonoBehaviour
// Fields:
//   private Image _Background; // 0x20
//   private PressButton home; // 0x28
//   private PressButton musicOn; // 0x30
//   private PressButton musicOff; // 0x38
//   private PressButton soundOn; // 0x40
//   private PressButton soundOff; // 0x48
//   private PressButton play; // 0x50
//   private HorizontalLayoutGroup buttonsLayout; // 0x58
//   private RectTransform selectorPrefab; // 0x60
//   public LabelAlias RulesLabel; // 0x68
//   public PauseScreen.PNEMIENEDLI OnPlay; // 0x70
//   public PauseScreen.PNEMIENEDLI OnSurrender; // 0x78

// ===== public void OnSoundOffClick()  [RVA 0x3037044]
// Nekki.SF2.GUI.Fight.PauseScreen$$OnSoundOffClick @ RVA 0x3037044

void Nekki_SF2_GUI_Fight_PauseScreen__OnSoundOffClick
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_PressButton_o *pNVar3;
  
  if ((DAT_04565d52 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d52 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).soundOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOn;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03137128;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).soundOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOff;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_03137128:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  MFIKGMIDDIG__NEKJIEEEPFO(false,(MethodInfo *)0x0);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x303712C]
// Nekki.SF2.GUI.Fight.PauseScreen$$OnDestroy @ RVA 0x303712C

void Nekki_SF2_GUI_Fight_PauseScreen__OnDestroy
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void OnPlayClick()  [RVA 0x3037130]
// Nekki.SF2.GUI.Fight.PauseScreen$$OnPlayClick @ RVA 0x3037130

void Nekki_SF2_GUI_Fight_PauseScreen__OnPlayClick
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d53 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565d53 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI__KNKFGKIPPBM((MethodInfo *)0x0);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).OnPlay;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CIDHNFNLHOG()  [RVA 0x3037198]
// Nekki.SF2.GUI.Fight.PauseScreen$$CIDHNFNLHOG @ RVA 0x3037198

void Nekki_SF2_GUI_Fight_PauseScreen__CIDHNFNLHOG
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  FightList_o *__this_00;
  System_String_o *value;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Fight_o *pFVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04565d54 & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565d54 = 1;
    method = extraout_x1;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,method);
  }
  pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if ((pFVar2 != (Fight_o *)0x0) &&
     (__this_00 = (pFVar2->fields).FBFPLEFCDOK, __this_00 != (FightList_o *)0x0)) {
    value = FightList__CJPIFPJMENP(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).RulesLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,!bVar1,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar3 = (__this->fields).RulesLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnHomeClick()  [RVA 0x3037294]
// Nekki.SF2.GUI.Fight.PauseScreen$$OnHomeClick @ RVA 0x3037294

void Nekki_SF2_GUI_Fight_PauseScreen__OnHomeClick
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d55 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565d55 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI__KNKFGKIPPBM((MethodInfo *)0x0);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).OnSurrender;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PressButton get_PlayButton()  [RVA 0x3037308]
// Nekki.SF2.GUI.Fight.PauseScreen$$get_PlayButton @ RVA 0x3037308

Nekki_SF2_GUI_PressButton_o *
Nekki_SF2_GUI_Fight_PauseScreen__get_PlayButton
          (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  return (__this->fields).play;
}


// ===== private IEnumerator Start()  [RVA 0x3037310]
// Nekki.SF2.GUI.Fight.PauseScreen$$Start @ RVA 0x3037310

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Fight_PauseScreen__Start(Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d56 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_TypeInfo);
    DAT_04565d56 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void .ctor()  [RVA 0x3037390]
// Nekki.SF2.GUI.Fight.PauseScreen$$.ctor @ RVA 0x3037390

void Nekki_SF2_GUI_Fight_PauseScreen___ctor
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_o **ppNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d57 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_TypeInfo);
    DAT_04565d57 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).OnPlay;
  *ppNVar2 = (Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_o *)pUVar1;
  thunk_FUN_01c20e04(ppNVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).OnSurrender;
  *ppNVar2 = (Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_o *)pUVar1;
  thunk_FUN_01c20e04(ppNVar2,pUVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init()  [RVA 0x3037428]
// Nekki.SF2.GUI.Fight.PauseScreen$$Init @ RVA 0x3037428

void Nekki_SF2_GUI_Fight_PauseScreen__Init
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_PressButton_o *pNVar3;
  
  if ((DAT_04565d58 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565d58 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).musicOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOn;
    if (pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) goto LAB_03137600;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    bVar1 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03137600;
    UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).musicOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOff;
    if (pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) goto LAB_03137600;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    bVar1 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03137600;
    UnityEngine_GameObject__SetActive(pUVar2,bVar1,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).soundOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOn;
    if (pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) goto LAB_03137600;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    bVar1 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03137600;
    UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).soundOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOff;
    if (pNVar3 != (Nekki_SF2_GUI_PressButton_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      bVar1 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,bVar1,(MethodInfo *)0x0);
        goto LAB_031375d0;
      }
    }
LAB_03137600:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031375d0:
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__NLKIBPNJDJL((MethodInfo *)0x0);
  Nekki_SF2_GUI_Fight_PauseScreen__CIDHNFNLHOG(__this,method_00);
  return;
}


// ===== public void OnMusicOffClick()  [RVA 0x3037604]
// Nekki.SF2.GUI.Fight.PauseScreen$$OnMusicOffClick @ RVA 0x3037604

void Nekki_SF2_GUI_Fight_PauseScreen__OnMusicOffClick
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_PressButton_o *pNVar3;
  
  if ((DAT_04565d59 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d59 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).musicOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOn;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031376e8;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).musicOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOff;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_031376e8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  MFIKGMIDDIG__FDOGCCOEHPL(false,(MethodInfo *)0x0);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public void OnMusicOnClick()  [RVA 0x30376EC]
// Nekki.SF2.GUI.Fight.PauseScreen$$OnMusicOnClick @ RVA 0x30376EC

void Nekki_SF2_GUI_Fight_PauseScreen__OnMusicOnClick
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_PressButton_o *pNVar3;
  
  if ((DAT_04565d5a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d5a = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).musicOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOn;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031377d0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).musicOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOff;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_031377d0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  }
  MFIKGMIDDIG__FDOGCCOEHPL(true,(MethodInfo *)0x0);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public void OnSoundOnClick()  [RVA 0x30377D4]
// Nekki.SF2.GUI.Fight.PauseScreen$$OnSoundOnClick @ RVA 0x30377D4

void Nekki_SF2_GUI_Fight_PauseScreen__OnSoundOnClick
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_PressButton_o *pNVar3;
  
  if ((DAT_04565d5b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d5b = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).soundOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOn;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031378b8;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).soundOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOff;
    if ((pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_031378b8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  }
  MFIKGMIDDIG__NEKJIEEEPFO(true,(MethodInfo *)0x0);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}

