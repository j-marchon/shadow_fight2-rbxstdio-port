// TypeDefIndex 1496
// Namespace: Nekki.SF2.GUI.Map
// public class RaidToggleButton : MonoBehaviour
// Fields:
//   private Button _goToStoryBtn; // 0x20
//   private Button _goToRaidBtn; // 0x28
//   private Action ANGJCCIONDI; // 0x30
//   private Action EFPPPBOEJMI; // 0x38
//   private Action NONLFGDHNJB; // 0x40
//   private Action BKHIDCLCICL; // 0x48
//   private RaidToggleButton.MLIIEBMGMLI DFCJLLMHKLE; // 0x50
//   private bool DIGKFGIEOAJ; // 0x54

// ===== public void add_OnGoToRaidClick(Action CJNHFNHJHPE)  [RVA 0x3199D10]
// Nekki.SF2.GUI.Map.RaidToggleButton$$add_OnGoToRaidClick @ RVA 0x3199D10

void Nekki_SF2_GUI_Map_RaidToggleButton__add_OnGoToRaidClick
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566a99 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566a99 = 1;
  }
  ppSVar4 = &(__this->fields).EFPPPBOEJMI;
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


// ===== private void GPLIGCNNIED()  [RVA 0x3199DAC]
// Nekki.SF2.GUI.Map.RaidToggleButton$$GPLIGCNNIED @ RVA 0x3199DAC

void Nekki_SF2_GUI_Map_RaidToggleButton__GPLIGCNNIED
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  System_Action_o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Map_RaidToggleButton__OAFBFGNBJJF(__this,method);
  if (!bVar1) {
    return;
  }
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  if ((__this->fields).DIGKFGIEOAJ == false) {
    Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this,0,in_x2);
    pSVar2 = (__this->fields).NONLFGDHNJB;
  }
  else {
    pSVar2 = (__this->fields).BKHIDCLCICL;
  }
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    pSVar2 = (__this->fields).ANGJCCIONDI;
    if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03299e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetState(RaidToggleButton.MLIIEBMGMLI FBEGCBIAPPK)  [RVA 0x3199EF8]
// Nekki.SF2.GUI.Map.RaidToggleButton$$SetState @ RVA 0x3199EF8

void Nekki_SF2_GUI_Map_RaidToggleButton__SetState
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,int32_t FBEGCBIAPPK,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool value;
  
  pUVar1 = (__this->fields)._goToStoryBtn;
  (__this->fields).DFCJLLMHKLE = FBEGCBIAPPK;
  if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    if (FBEGCBIAPPK == 0) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._goToRaidBtn;
      if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03299f80;
      value = true;
    }
    else {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._goToRaidBtn;
      if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03299f80;
      value = false;
    }
    UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
LAB_03299f80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Button get_GoToRaidButton()  [RVA 0x3199F84]
// Nekki.SF2.GUI.Map.RaidToggleButton$$get_GoToRaidButton @ RVA 0x3199F84

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Map_RaidToggleButton__get_GoToRaidButton
          (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._goToRaidBtn;
}


// ===== public void add_OnScrollRaidMapUp(Action CJNHFNHJHPE)  [RVA 0x3199F8C]
// Nekki.SF2.GUI.Map.RaidToggleButton$$add_OnScrollRaidMapUp @ RVA 0x3199F8C

void Nekki_SF2_GUI_Map_RaidToggleButton__add_OnScrollRaidMapUp
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566a9a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566a9a = 1;
  }
  ppSVar4 = &(__this->fields).BKHIDCLCICL;
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


// ===== public void remove_OnGoToRaidClick(Action CJNHFNHJHPE)  [RVA 0x319A028]
// Nekki.SF2.GUI.Map.RaidToggleButton$$remove_OnGoToRaidClick @ RVA 0x319A028

void Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnGoToRaidClick
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566a9b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566a9b = 1;
  }
  ppSVar4 = &(__this->fields).EFPPPBOEJMI;
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


// ===== public void add_OnClick(Action CJNHFNHJHPE)  [RVA 0x319A0C4]
// Nekki.SF2.GUI.Map.RaidToggleButton$$add_OnClick @ RVA 0x319A0C4

void Nekki_SF2_GUI_Map_RaidToggleButton__add_OnClick
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566a9c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566a9c = 1;
  }
  ppSVar4 = &(__this->fields).ANGJCCIONDI;
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


// ===== public void set_interactable(bool CJNHFNHJHPE)  [RVA 0x319A160]
// Nekki.SF2.GUI.Map.RaidToggleButton$$set_interactable @ RVA 0x319A160

void Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  
  pUVar1 = (__this->fields)._goToRaidBtn;
  if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._goToStoryBtn;
    if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OAFBFGNBJJF()  [RVA 0x3199E28]
// Nekki.SF2.GUI.Map.RaidToggleButton$$OAFBFGNBJJF @ RVA 0x3199E28

bool Nekki_SF2_GUI_Map_RaidToggleButton__OAFBFGNBJJF
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04566a9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10971/*"RaidToggleButton::PermissionToClick: prevented clicking by myself!\nIt's no OK, fix MapScene logic"*/);
    DAT_04566a9d = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
  if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
      (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers
                      ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10971/*"RaidToggleButton::PermissionToClick: prevented clicking by myself!\nIt's no OK, fix MapScene logic"*/,(MethodInfo *)0x0);
    }
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnGoToStoryClick(Action CJNHFNHJHPE)  [RVA 0x319A1A4]
// Nekki.SF2.GUI.Map.RaidToggleButton$$remove_OnGoToStoryClick @ RVA 0x319A1A4

void Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnGoToStoryClick
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566a9e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566a9e = 1;
  }
  ppSVar4 = &(__this->fields).NONLFGDHNJB;
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


// ===== private void Awake()  [RVA 0x319A240]
// Nekki.SF2.GUI.Map.RaidToggleButton$$Awake @ RVA 0x319A240

void Nekki_SF2_GUI_Map_RaidToggleButton__Awake
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  CHDGOFBHAFI_o *pCVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04566a9f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_GPLIGCNNIED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_LHMJHADBPDI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566a9f = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields)._goToStoryBtn;
  (__this->fields).DIGKFGIEOAJ = false;
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
    pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar1,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._goToRaidBtn;
      if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
        pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar1,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
          if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
            Nekki_SF2_GUI_Map_RaidToggleButton__SetState
                      (__this,(uint)(pCVar2->fields).BLELLCNDBHN,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnGoToStoryClick(Action CJNHFNHJHPE)  [RVA 0x319A368]
// Nekki.SF2.GUI.Map.RaidToggleButton$$add_OnGoToStoryClick @ RVA 0x319A368

void Nekki_SF2_GUI_Map_RaidToggleButton__add_OnGoToStoryClick
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566aa0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566aa0 = 1;
  }
  ppSVar4 = &(__this->fields).NONLFGDHNJB;
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


// ===== public void SetScrollRaidMap(bool CJNHFNHJHPE)  [RVA 0x319A404]
// Nekki.SF2.GUI.Map.RaidToggleButton$$SetScrollRaidMap @ RVA 0x319A404

void Nekki_SF2_GUI_Map_RaidToggleButton__SetScrollRaidMap
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DIGKFGIEOAJ = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x319A410]
// Nekki.SF2.GUI.Map.RaidToggleButton$$.ctor @ RVA 0x319A410

void Nekki_SF2_GUI_Map_RaidToggleButton___ctor
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  
  if ((DAT_04566aa1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_<>c_AINPKFGKNOM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_<>c_FFFJEACJLAJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_<>c_IPCGKPOAKEA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_<>c_OKDAPCHBPJO__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo);
    DAT_04566aa1 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
    ppSVar1 = &(__this->fields).ANGJCCIONDI;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_1;
    if (pSVar2 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_1;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).EFPPPBOEJMI;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_2;
    if (pSVar2 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_2;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).NONLFGDHNJB;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_3;
    if (pSVar2 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_RaidToggleButton_<>c_TypeInfo->static_fields->__9__29_3;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).BKHIDCLCICL;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnClick(Action CJNHFNHJHPE)  [RVA 0x319A6C4]
// Nekki.SF2.GUI.Map.RaidToggleButton$$remove_OnClick @ RVA 0x319A6C4

void Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnClick
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* try { // try from 0329a6d8 to 0339a9ab has its CatchHandler @ 0329a6d8
                       catch() { ... } // from try @ 0329a6d8 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329aa94 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329aac8 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329aaf0 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329ab30 with catch @ 0329a6d8 */
  if ((DAT_04566aa2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566aa2 = 1;
  }
  ppSVar4 = &(__this->fields).ANGJCCIONDI;
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


// ===== public void remove_OnScrollRaidMapUp(Action CJNHFNHJHPE)  [RVA 0x319A760]
// Nekki.SF2.GUI.Map.RaidToggleButton$$remove_OnScrollRaidMapUp @ RVA 0x319A760

void Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnScrollRaidMapUp
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566aa3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566aa3 = 1;
  }
  ppSVar4 = &(__this->fields).BKHIDCLCICL;
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


// ===== private void LHMJHADBPDI()  [RVA 0x319A7FC]
// Nekki.SF2.GUI.Map.RaidToggleButton$$LHMJHADBPDI @ RVA 0x319A7FC

void Nekki_SF2_GUI_Map_RaidToggleButton__LHMJHADBPDI
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  System_Action_o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Map_RaidToggleButton__OAFBFGNBJJF(__this,method);
  if (!bVar1) {
    return;
  }
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this,1,in_x2);
  pSVar2 = (__this->fields).EFPPPBOEJMI;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    pSVar2 = (__this->fields).ANGJCCIONDI;
    if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0329a854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Button get_GoToStoryButton()  [RVA 0x319A864]
// Nekki.SF2.GUI.Map.RaidToggleButton$$get_GoToStoryButton @ RVA 0x319A864

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Map_RaidToggleButton__get_GoToStoryButton
          (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._goToStoryBtn;
}

