// TypeDefIndex 2246
// Namespace: Nekki.SF2.GUI.Menu
// public class MenuExpPanel : UIInitializable
// Fields:
//   private Action GHBNJMEEEJL; // 0x28
//   private Image _iconLevel; // 0x30
//   private Text _labelLevel; // 0x38
//   private ProgressBar _barExp; // 0x40
//   private Image _iconMaxLevel; // 0x48
//   private Button _levelHintButton; // 0x50
//   private LabelAlias _hintText; // 0x58
//   private GameObject _hintRootGO; // 0x60
//   private int HNMHPGBJCPN; // 0x68
//   private ACHLOMELAJE OKNKKHGBECG; // 0x70

// ===== public void remove_OnLevelHintBtnClicked(Action CJNHFNHJHPE)  [RVA 0x32FBEF4]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$remove_OnLevelHintBtnClicked @ RVA 0x32FBEF4

void Nekki_SF2_GUI_Menu_MenuExpPanel__remove_OnLevelHintBtnClicked
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045676e5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045676e5 = 1;
  }
  ppSVar4 = &(__this->fields).GHBNJMEEEJL;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void .ctor()  [RVA 0x32FBF90]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$.ctor @ RVA 0x32FBF90

void Nekki_SF2_GUI_Menu_MenuExpPanel___ctor
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIInitializable___ctor((Nekki_SF2_GUI_UIInitializable_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EPPLHMKADOJ()  [RVA 0x32FBF98]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$EPPLHMKADOJ @ RVA 0x32FBF98

void Nekki_SF2_GUI_Menu_MenuExpPanel__EPPLHMKADOJ
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  uint32_t uVar2;
  ACHLOMELAJE_o *pAVar3;
  MethodInfo *method_00;
  
  pAVar3 = (__this->fields).OKNKKHGBECG;
  if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  uVar1 = ACHLOMELAJE__LFOIBFFCBCL(pAVar3,(MethodInfo *)0x0);
  pAVar3 = (__this->fields).OKNKKHGBECG;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    uVar2 = ACHLOMELAJE__KKAOKMLLBGL(pAVar3,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MenuExpPanel__BKDODKNEHIM(__this,(float)uVar1,(float)uVar2,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HideHint()  [RVA 0x32FC1B8]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$HideHint @ RVA 0x32FC1B8

void Nekki_SF2_GUI_Menu_MenuExpPanel__HideHint
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
                    /* try { // try from 033fc1c0 to 034fc1cb has its CatchHandler @ 033fc2d0 */
  __this_00 = (__this->fields)._hintRootGO;
  (__this->fields).HNMHPGBJCPN = 0;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 033fc1cc to 034fc2a3 has its CatchHandler @ 033fbeec */
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnLevelHintBtnClicked(Action CJNHFNHJHPE)  [RVA 0x32FC1E0]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$add_OnLevelHintBtnClicked @ RVA 0x32FC1E0

void Nekki_SF2_GUI_Menu_MenuExpPanel__add_OnLevelHintBtnClicked
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045676e6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045676e6 = 1;
  }
  ppSVar4 = &(__this->fields).GHBNJMEEEJL;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void ShowHint(string EHNFGMGKCHO)  [RVA 0x32FC27C]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$ShowHint @ RVA 0x32FC27C

void Nekki_SF2_GUI_Menu_MenuExpPanel__ShowHint
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  __this_00 = (__this->fields)._hintRootGO;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                    /* try { // try from 033fc2a4 to 034fc2a7 has its CatchHandler @ 033fc2f8 */
    pNVar1 = (__this->fields)._hintText;
                    /* try { // try from 033fc2a8 to 034fc2ab has its CatchHandler @ 033fc2e4 */
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033fc2ac to 034fc2af has its CatchHandler @ 033fbeec */
                    /* try { // try from 033fc2b0 to 034fc2b3 has its CatchHandler @ 033fc2c8 */
                    /* try { // try from 033fc2b4 to 034fc2b7 has its CatchHandler @ 033fc2c4 */
                    /* catch() { ... } // from try @ 033fc150 with catch @ 033fc2b8
                       try { // try from 033fc2b8 to 034fc317 has its CatchHandler @ 033fbeec */
                    /* catch() { ... } // from try @ 033fc128 with catch @ 033fc2bc */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,EHNFGMGKCHO,(pNVar1->klass->vtable)._75_set_text.method);
                    /* catch() { ... } // from try @ 033fc188 with catch @ 033fc2c0 */
      (__this->fields).HNMHPGBJCPN = 1;
                    /* catch() { ... } // from try @ 033fc2b4 with catch @ 033fc2c4 */
                    /* catch() { ... } // from try @ 033fc2b0 with catch @ 033fc2c8 */
                    /* catch() { ... } // from try @ 033fc130 with catch @ 033fc2cc */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033fc1c0 with catch @ 033fc2d0 */
  FUN_01bab8c8();
}


// ===== protected override void DKLDHKNAEBO()  [RVA 0x32FC2D4]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$DKLDHKNAEBO @ RVA 0x32FC2D4

void Nekki_SF2_GUI_Menu_MenuExpPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  ProgressBar_o *pPVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  ACHLOMELAJE_o **ppAVar4;
  ACHLOMELAJE_o *pAVar5;
  
                    /* catch() { ... } // from try @ 033fc154 with catch @ 033fc2d4 */
                    /* catch() { ... } // from try @ 033fc110 with catch @ 033fc2d8 */
                    /* catch() { ... } // from try @ 033fc0b8 with catch @ 033fc2dc */
                    /* catch() { ... } // from try @ 033fc0c4 with catch @ 033fc2e0 */
                    /* catch() { ... } // from try @ 033fc2a8 with catch @ 033fc2e4 */
                    /* catch() { ... } // from try @ 033fc0f4 with catch @ 033fc2e8 */
                    /* catch() { ... } // from try @ 033fc09c with catch @ 033fc2ec */
  if ((DAT_045676e7 & 1) == 0) {
                    /* catch() { ... } // from try @ 033fc088 with catch @ 033fc2f0 */
                    /* catch() { ... } // from try @ 033fc074 with catch @ 033fc2f4 */
                    /* catch() { ... } // from try @ 033fc2a4 with catch @ 033fc2f8 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 033fc060 with catch @ 033fc2fc */
                    /* catch() { ... } // from try @ 033fc04c with catch @ 033fc300 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_EBKOKBBGNFM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_EPPLHMKADOJ__);
                    /* try { // try from 033fc318 to 034fc31b has its CatchHandler @ 033fc33c */
                    /* try { // try from 033fc31c to 034fc343 has its CatchHandler @ 033fbeec */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_LFLEJNHDICA__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 033fc318 with catch @ 033fc33c */
    DAT_045676e7 = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields)._levelHintButton;
                    /* try { // try from 033fc344 to 034fc34b has its CatchHandler @ 033fc360 */
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
                    /* try { // try from 033fc34c to 034fc357 has its CatchHandler @ 033fbeec */
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
                    /* try { // try from 033fc358 to 034fc35f has its CatchHandler @ 033fc360 */
                    /* catch() { ... } // from try @ 033fc344 with catch @ 033fc360
                       catch() { ... } // from try @ 033fc358 with catch @ 033fc360 */
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
                    /* try { // try from 033fc364 to 034fc477 has its CatchHandler @ 033fc364
                       catch() { ... } // from try @ 033fc364 with catch @ 033fc364
                       catch() { ... } // from try @ 033fc56c with catch @ 033fc364
                       catch() { ... } // from try @ 033fc5c0 with catch @ 033fc364
                       catch() { ... } // from try @ 033fc60c with catch @ 033fc364
                       catch() { ... } // from try @ 033fc648 with catch @ 033fc364 */
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pPVar1 = (__this->fields)._barExp;
      if (pPVar1 != (ProgressBar_o *)0x0) {
        (*(pPVar1->klass->vtable)._6_Init.methodPtr)(pPVar1,(pPVar1->klass->vtable)._6_Init.method);
        pPVar1 = (__this->fields)._barExp;
        if (pPVar1 != (ProgressBar_o *)0x0) {
          (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
                    (0,0x3f800000,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
          pPVar1 = (__this->fields)._barExp;
          if (pPVar1 != (ProgressBar_o *)0x0) {
            (*(pPVar1->klass->vtable)._7_set_Value.methodPtr)
                      (0,pPVar1,(pPVar1->klass->vtable)._7_set_Value.method);
            Nekki_SF2_GUI_Menu_MenuExpPanel__HideHint(__this,method_00);
            Nekki_SF2_GUI_Menu_MenuExpPanel__EBKOKBBGNFM(__this,method_01);
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
            ppAVar4 = &(__this->fields).OKNKKHGBECG;
            *ppAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            thunk_FUN_01c20e04(ppAVar4);
            pAVar5 = *ppAVar4;
            pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
                    /* try { // try from 033fc478 to 034fc47f has its CatchHandler @ 033fc5f0 */
            if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
              ACHLOMELAJE__DDKBPJIHMDN(pAVar5,pSVar2,(MethodInfo *)0x0);
              pAVar5 = (__this->fields).OKNKKHGBECG;
                    /* try { // try from 033fc49c to 034fc4a7 has its CatchHandler @ 033fc5e8 */
              pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 033fc4ac to 034fc4b7 has its CatchHandler @ 033fc5e4 */
              System_Action___ctor();
              if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
                ACHLOMELAJE__ACGOPMHICJF(pAVar5,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 033fc4cc to 034fc4cf has its CatchHandler @ 033fc5d4 */
                Nekki_SF2_GUI_Menu_MenuExpPanel__EBKOKBBGNFM(__this,method_02);
                    /* try { // try from 033fc4d8 to 034fc4f3 has its CatchHandler @ 033fc5d8 */
                Nekki_SF2_GUI_Menu_MenuExpPanel__EPPLHMKADOJ(__this,method_03);
                return;
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


// ===== private void EBKOKBBGNFM()  [RVA 0x32FC4E8]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$EBKOKBBGNFM @ RVA 0x32FC4E8

void Nekki_SF2_GUI_Menu_MenuExpPanel__EBKOKBBGNFM
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  int32_t local_14;
  
  __this_00 = (__this->fields).OKNKKHGBECG;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    local_14 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033fc508 to 034fc50f has its CatchHandler @ 033fc5dc */
    pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._labelLevel;
    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033fc520 to 034fc523 has its CatchHandler @ 033fc5d4 */
                    /* try { // try from 033fc52c to 034fc547 has its CatchHandler @ 033fc5c4 */
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar1,(pUVar2->klass->vtable)._75_set_text.method);
  }
  return;
}


// ===== private void Update()  [RVA 0x32FC544]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$Update @ RVA 0x32FC544

void Nekki_SF2_GUI_Menu_MenuExpPanel__Update
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  int iVar2;
  
  iVar2 = (__this->fields).HNMHPGBJCPN;
  if (iVar2 < 1) {
    bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
                    /* try { // try from 033fc560 to 034fc56b has its CatchHandler @ 033fc5d0 */
    if (bVar1) {
                    /* try { // try from 033fc56c to 034fc5af has its CatchHandler @ 033fc364 */
      Nekki_SF2_GUI_Menu_MenuExpPanel__HideHint(__this,method_00);
      return;
    }
    iVar2 = (__this->fields).HNMHPGBJCPN;
  }
  (__this->fields).HNMHPGBJCPN = iVar2 + -1;
  return;
}


// ===== protected override void HMOFDGEDBCL()  [RVA 0x32FC584]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$HMOFDGEDBCL @ RVA 0x32FC584

void Nekki_SF2_GUI_Menu_MenuExpPanel__HMOFDGEDBCL
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o **ppAVar2;
  ACHLOMELAJE_o *pAVar3;
  
                    /* try { // try from 033fc5b0 to 034fc5b3 has its CatchHandler @ 033fc5ec */
  if ((DAT_045676e8 & 1) == 0) {
                    /* try { // try from 033fc5b4 to 034fc5b7 has its CatchHandler @ 033fc5e0 */
                    /* try { // try from 033fc5b8 to 034fc5bb has its CatchHandler @ 033fc5cc */
                    /* try { // try from 033fc5bc to 034fc5bf has its CatchHandler @ 033fc5c8 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 033fc5c0 to 034fc607 has its CatchHandler @ 033fc364 */
                    /* catch() { ... } // from try @ 033fc52c with catch @ 033fc5c4 */
                    /* catch() { ... } // from try @ 033fc5bc with catch @ 033fc5c8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_EBKOKBBGNFM__);
                    /* catch() { ... } // from try @ 033fc5b8 with catch @ 033fc5cc */
                    /* catch() { ... } // from try @ 033fc560 with catch @ 033fc5d0 */
                    /* catch() { ... } // from try @ 033fc4cc with catch @ 033fc5d4
                       catch() { ... } // from try @ 033fc520 with catch @ 033fc5d4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_EPPLHMKADOJ__);
                    /* catch() { ... } // from try @ 033fc4d8 with catch @ 033fc5d8 */
                    /* catch() { ... } // from try @ 033fc508 with catch @ 033fc5dc */
    DAT_045676e8 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033fc5b4 with catch @ 033fc5e0 */
  ppAVar2 = &(__this->fields).OKNKKHGBECG;
                    /* catch() { ... } // from try @ 033fc4ac with catch @ 033fc5e4 */
  pAVar3 = *ppAVar2;
                    /* catch() { ... } // from try @ 033fc49c with catch @ 033fc5e8 */
                    /* catch() { ... } // from try @ 033fc5b0 with catch @ 033fc5ec */
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
                    /* catch() { ... } // from try @ 033fc478 with catch @ 033fc5f0 */
  System_Action___ctor();
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 033fc608 to 034fc60b has its CatchHandler @ 033fc638 */
                    /* try { // try from 033fc60c to 034fc63f has its CatchHandler @ 033fc364 */
    ACHLOMELAJE__FPKPJODDINL(pAVar3,pSVar1,(MethodInfo *)0x0);
    pAVar3 = (__this->fields).OKNKKHGBECG;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 033fc608 with catch @ 033fc638 */
    System_Action___ctor();
                    /* try { // try from 033fc640 to 034fc647 has its CatchHandler @ 033fc65c */
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 033fc648 to 034fc653 has its CatchHandler @ 033fc364 */
      ACHLOMELAJE__BDLKLNPJMNI(pAVar3,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 033fc654 to 034fc65b has its CatchHandler @ 033fc65c */
      *ppAVar2 = (ACHLOMELAJE_o *)0x0;
                    /* catch() { ... } // from try @ 033fc640 with catch @ 033fc65c
                       catch() { ... } // from try @ 033fc654 with catch @ 033fc65c */
      thunk_FUN_01c20e04(ppAVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFLEJNHDICA()  [RVA 0x32FC678]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$LFLEJNHDICA @ RVA 0x32FC678

void Nekki_SF2_GUI_Menu_MenuExpPanel__LFLEJNHDICA
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).GHBNJMEEEJL;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033fc68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== private void BKDODKNEHIM(float FJJJGOHDLBH, float GKBCJOEFFCP)  [RVA 0x32FBFF4]
// Nekki.SF2.GUI.Menu.MenuExpPanel$$BKDODKNEHIM @ RVA 0x32FBFF4

void Nekki_SF2_GUI_Menu_MenuExpPanel__BKDODKNEHIM
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,float FJJJGOHDLBH,float GKBCJOEFFCP,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  ProgressBar_o *pPVar3;
  ACHLOMELAJE_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Button_o *__this_01;
  bool value;
  CNKPEGNHNGO_o *pCVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *pSVar6;
  UnityEngine_UI_Image_o *__this_02;
  float fVar7;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  if ((DAT_045676e9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045676e9 = 1;
  }
  if (FJJJGOHDLBH != 0.0) {
    pPVar3 = (__this->fields)._barExp;
    if (pPVar3 == (ProgressBar_o *)0x0) goto LAB_033fc1b4;
    fVar7 = (float)(*(pPVar3->klass->vtable)._5_get_Value.methodPtr)
                             (pPVar3,(pPVar3->klass->vtable)._5_get_Value.method);
                    /* try { // try from 033fc150 to 034fc153 has its CatchHandler @ 033fc2b8 */
                    /* try { // try from 033fc154 to 034fc17f has its CatchHandler @ 033fc2d4 */
    if (fVar7 == FJJJGOHDLBH) {
      return;
    }
  }
  pPVar3 = (__this->fields)._barExp;
  if (pPVar3 != (ProgressBar_o *)0x0) {
                    /* try { // try from 033fc04c to 034fc053 has its CatchHandler @ 033fc300 */
    (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,CONCAT44(in_register_00005024,GKBCJOEFFCP),pPVar3,
               (pPVar3->klass->vtable)._11_SetValueBorders.method);
    pPVar3 = (__this->fields)._barExp;
                    /* try { // try from 033fc060 to 034fc06b has its CatchHandler @ 033fc2fc */
    if (pPVar3 != (ProgressBar_o *)0x0) {
                    /* try { // try from 033fc074 to 034fc07f has its CatchHandler @ 033fc2f4 */
      (*(pPVar3->klass->vtable)._7_set_Value.methodPtr)
                (CONCAT44(in_register_00005004,FJJJGOHDLBH),pPVar3,
                 (pPVar3->klass->vtable)._7_set_Value.method);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033fc088 to 034fc093 has its CatchHandler @ 033fc2f0 */
        thunk_FUN_01ba7564();
      }
      pCVar5 = MGNPHCAAEIO_TypeInfo->static_fields->DLPAONNJNMA;
                    /* try { // try from 033fc09c to 034fc0a7 has its CatchHandler @ 033fc2ec */
      if ((pCVar5 != (CNKPEGNHNGO_o *)0x0) &&
         (pSVar6 = (pCVar5->fields).HLIELGNFGLF,
         pSVar6 != (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)0x0)) {
        if ((pSVar6->fields)._size == 0) {
          return;
        }
        __this_00 = (__this->fields).OKNKKHGBECG;
        if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 033fc0b8 to 034fc0bb has its CatchHandler @ 033fc2dc */
          iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033fc0c4 to 034fc0df has its CatchHandler @ 033fc2e0 */
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
          }
          iVar2 = MGNPHCAAEIO__DGJACOJNPBB((MethodInfo *)0x0);
          __this_02 = (__this->fields)._iconMaxLevel;
                    /* try { // try from 033fc0f4 to 034fc0ff has its CatchHandler @ 033fc2e8 */
          if ((__this_02 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            if (iVar1 < iVar2) {
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              pPVar3 = (__this->fields)._barExp;
                    /* try { // try from 033fc110 to 034fc117 has its CatchHandler @ 033fc2d8 */
              if ((pPVar3 != (ProgressBar_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pPVar3,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 033fc128 to 034fc12b has its CatchHandler @ 033fc2bc */
                UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                __this_01 = (__this->fields)._levelHintButton;
                    /* try { // try from 033fc130 to 034fc137 has its CatchHandler @ 033fc2cc */
                if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
                  value = true;
LAB_033fc1a0:
                  UnityEngine_Behaviour__set_enabled
                            ((UnityEngine_Behaviour_o *)__this_01,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
              pPVar3 = (__this->fields)._barExp;
              if ((pPVar3 != (ProgressBar_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pPVar3,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 033fc188 to 034fc1a3 has its CatchHandler @ 033fc2c0 */
                UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                __this_01 = (__this->fields)._levelHintButton;
                if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
                  value = false;
                  goto LAB_033fc1a0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033fc1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

