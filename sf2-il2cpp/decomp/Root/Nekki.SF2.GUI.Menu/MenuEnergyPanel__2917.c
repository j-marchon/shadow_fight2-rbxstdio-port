// TypeDefIndex 2917
// Namespace: Nekki.SF2.GUI.Menu
// public class MenuEnergyPanel : UIInitializable
// Fields:
//   private Action BLDIJJGFONK; // 0x28
//   private Image _icon; // 0x30
//   private Image _iconMax; // 0x38
//   private StepBar _bar; // 0x40
//   private Button _dialogButton; // 0x48

// ===== public void .ctor()  [RVA 0x344E804]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$.ctor @ RVA 0x344E804

void Nekki_SF2_GUI_Menu_MenuEnergyPanel___ctor
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIInitializable___ctor((Nekki_SF2_GUI_UIInitializable_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void JOGNKBJCLPL()  [RVA 0x344E80C]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$JOGNKBJCLPL @ RVA 0x344E80C

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__JOGNKBJCLPL
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).BLDIJJGFONK;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 0354e818 to 0364e823 has its CatchHandler @ 0354e8a0 */
                    /* WARNING: Could not recover jumptable at 0x0354e820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== public void add_OnBarClicked(Action CJNHFNHJHPE)  [RVA 0x344E828]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$add_OnBarClicked @ RVA 0x344E828

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__add_OnBarClicked
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 0354e828 to 0364e833 has its CatchHandler @ 0354e8ac */
                    /* try { // try from 0354e834 to 0364e88b has its CatchHandler @ 0354e5f0 */
  if ((DAT_0456828f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456828f = 1;
  }
  ppSVar4 = &(__this->fields).BLDIJJGFONK;
  a = *ppSVar4;
                    /* try { // try from 0354e88c to 0364e88f has its CatchHandler @ 0354e8b8 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 0354e890 to 0364e893 has its CatchHandler @ 0354e8a8 */
                    /* try { // try from 0354e894 to 0364e897 has its CatchHandler @ 0354e8a4 */
                    /* try { // try from 0354e898 to 0364e8d7 has its CatchHandler @ 0354e5f0 */
                    /* catch() { ... } // from try @ 0354e750 with catch @ 0354e89c */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
                    /* catch() { ... } // from try @ 0354e818 with catch @ 0354e8a0 */
    bVar1 = a == pSVar3;
    a = pSVar3;
                    /* catch() { ... } // from try @ 0354e894 with catch @ 0354e8a4 */
                    /* catch() { ... } // from try @ 0354e890 with catch @ 0354e8a8 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 0354e828 with catch @ 0354e8ac */
                    /* catch() { ... } // from try @ 0354e7e0 with catch @ 0354e8b0 */
                    /* catch() { ... } // from try @ 0354e768 with catch @ 0354e8b4 */
                    /* catch() { ... } // from try @ 0354e88c with catch @ 0354e8b8 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 0354e740 with catch @ 0354e8bc */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0354e728 with catch @ 0354e8c0 */
  FUN_01babc64(pSVar2);
}


// ===== public void UpdateBar()  [RVA 0x344E8C4]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$UpdateBar @ RVA 0x344E8C4

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateBar
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  StepBar_o *pSVar2;
  float fVar3;
  
                    /* try { // try from 0354e8d8 to 0364e8db has its CatchHandler @ 0354e8fc */
                    /* try { // try from 0354e8dc to 0364e903 has its CatchHandler @ 0354e5f0 */
  if ((DAT_04568290 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568290 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0354e8d8 with catch @ 0354e8fc */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0354e904 to 0364e90b has its CatchHandler @ 0354e920 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 0354e90c to 0364e917 has its CatchHandler @ 0354e5f0 */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0354e918 to 0364e91f has its CatchHandler @ 0354e920 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0354e904 with catch @ 0354e920
                       catch() { ... } // from try @ 0354e918 with catch @ 0354e920 */
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__FMNEFEMHCGG(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._bar;
    if (pSVar2 != (StepBar_o *)0x0) {
      fVar3 = (float)(*(pSVar2->klass->vtable)._5_get_Value.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._5_get_Value.method);
      if (fVar3 == (float)iVar1) {
        return;
      }
      pSVar2 = (__this->fields)._bar;
      if (pSVar2 != (StepBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354e9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._7_set_Value.methodPtr)
                  (pSVar2,(pSVar2->klass->vtable)._7_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HMOFDGEDBCL()  [RVA 0x344E9F0]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$HMOFDGEDBCL @ RVA 0x344E9F0

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__HMOFDGEDBCL
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04568291 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuEnergyPanel_JOGNKBJCLPL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568291 = 1;
    method = extraout_x1;
  }
  pUVar1 = (__this->fields)._dialogButton;
  if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_00,call,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetDialogBtnPressType(PressType ACCIHBHMFPN, bool IHKMBHOELIL)  [RVA 0x344EA80]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$SetDialogBtnPressType @ RVA 0x344EA80

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__SetDialogBtnPressType
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,int32_t ACCIHBHMFPN,bool IHKMBHOELIL,
               MethodInfo *method)

{
  LJLLAKHOFFF__JAEOMHIAHJB((__this->fields)._dialogButton,ACCIHBHMFPN,IHKMBHOELIL,(MethodInfo *)0x0)
  ;
  return;
}


// ===== public void remove_OnBarClicked(Action CJNHFNHJHPE)  [RVA 0x344EA90]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$remove_OnBarClicked @ RVA 0x344EA90

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__remove_OnBarClicked
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568292 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568292 = 1;
  }
  ppSVar4 = &(__this->fields).BLDIJJGFONK;
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


// ===== protected override void DKLDHKNAEBO()  [RVA 0x344EB2C]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$DKLDHKNAEBO @ RVA 0x344EB2C

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Collections_Generic_List_int__o *__this_00;
  StepBar_o *pSVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Int32_array *pSVar5;
  ACHLOMELAJE_o *pAVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityEvent_o *__this_02;
  int iVar8;
  float fVar9;
  
  if ((DAT_04568293 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuEnergyPanel_JOGNKBJCLPL__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568293 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar3 = MGNPHCAAEIO__OGPGFHNOCPN((MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  if (-1 < iVar3) {
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0354edf0;
    iVar8 = 0;
    do {
      lVar2 = Method_System_Collections_Generic_List<int>_Add__;
      pSVar5 = (__this_00->fields)._items;
      fVar9 = (100.0 / (float)iVar3) * (float)iVar8;
      item = -0x80000000;
      if (fVar9 != INFINITY) {
        item = (int)fVar9;
      }
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0354edf0;
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = item;
      }
      else {
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar3);
  }
  pSVar4 = (__this->fields)._bar;
  if (pSVar4 != (StepBar_o *)0x0) {
    (*(pSVar4->klass->vtable)._6_Init.methodPtr)(pSVar4,(pSVar4->klass->vtable)._6_Init.method);
    pSVar4 = (__this->fields)._bar;
    if (pSVar4 != (StepBar_o *)0x0) {
      StepBar__SetPercent(pSVar4,__this_00,(MethodInfo *)0x0);
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0)
      {
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
        pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar6 == (ACHLOMELAJE_o *)0x0) goto LAB_0354edf0;
        if ((pAVar6->fields).MMOJIJHAJJL != false) {
          pSVar4 = (__this->fields)._bar;
          if ((pSVar4 == (StepBar_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0354edf0;
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        }
      }
      pUVar7 = (__this->fields)._dialogButton;
      if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
        __this_02 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateView(__this,method_00);
          return;
        }
      }
    }
  }
LAB_0354edf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetTouchEnabled(bool CJNHFNHJHPE)  [RVA 0x344EF9C]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$SetTouchEnabled @ RVA 0x344EF9C

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__SetTouchEnabled
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._dialogButton;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateView()  [RVA 0x344EDF4]
// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$UpdateView @ RVA 0x344EDF4

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateView
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  StepBar_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_04568294 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568294 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
       (pUVar2 = (__this->fields)._icon, pUVar2 != (UnityEngine_UI_Image_o *)0x0)) {
      bVar1 = (pAVar5->fields).MMOJIJHAJJL;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        if (bVar1 == false) {
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
          pSVar4 = (__this->fields)._bar;
          if ((pSVar4 != (StepBar_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._iconMax;
            if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateBar(__this,method_00);
              return;
            }
          }
        }
        else {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          pSVar4 = (__this->fields)._bar;
          if ((pSVar4 != (StepBar_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._iconMax;
            if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

