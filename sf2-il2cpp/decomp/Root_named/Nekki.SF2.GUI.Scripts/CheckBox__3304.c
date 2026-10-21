// TypeDefIndex 3304
// Namespace: Nekki.SF2.GUI.Scripts
// public class CheckBox : SFButton
// Fields:
//   private ResolutionImage _backgndImage; // 0x168
//   private ResolutionImage _checkedSprite; // 0x170
//   private ResolutionImage _uncheckedSprite; // 0x178
//   private Color _disabledColor; // 0x180
//   private Color _enabledColor; // 0x190
//   private CheckBox.EKFFAMKMBIH OIKLOAGFFGO; // 0x1A0
//   private Action<CheckBox.EKFFAMKMBIH> LCDOFOMLNLI; // 0x1A8

// ===== public void remove_OnChangedState(Action<CheckBox.EKFFAMKMBIH> CJNHFNHJHPE)  [RVA 0x3520BC0]
// Nekki.SF2.GUI.Scripts.CheckBox$$remove_OnChangedState @ RVA 0x3520BC0

void Nekki_SF2_GUI_Scripts_CheckBox__remove_OnChangedState
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,
               System_Action_CheckBox_EKFFAMKMBIH__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_CheckBox_EKFFAMKMBIH__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar5;
  System_Action_CheckBox_EKFFAMKMBIH__o *source;
  
  if ((DAT_045689bb & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    DAT_045689bb = 1;
  }
  source = (__this->fields).LCDOFOMLNLI;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
             FUN_01c07368(&(__this->fields).LCDOFOMLNLI,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void set_interactable(bool CJNHFNHJHPE)  [RVA 0x3520C74]
// Nekki.SF2.GUI.Scripts.CheckBox$$set_interactable @ RVA 0x3520C74

void Nekki_SF2_GUI_Scripts_CheckBox__set_interactable
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  bool bVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_Color_o *pUVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((DAT_045689bc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045689bc = 1;
  }
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((__this->fields).super.super.super.m_Interactable == false) {
    pUVar6 = &(__this->fields)._disabledColor;
    pUVar1 = &(__this->fields)._disabledColor;
    pUVar2 = &(__this->fields)._disabledColor;
    pUVar3 = &(__this->fields)._disabledColor;
  }
  else {
    pUVar6 = &(__this->fields)._enabledColor;
    pUVar1 = &(__this->fields)._enabledColor;
    pUVar2 = &(__this->fields)._enabledColor;
    pUVar3 = &(__this->fields)._enabledColor;
  }
  pNVar5 = (__this->fields)._backgndImage;
  if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar7 = (ulong)(uint)(pUVar3->fields).a;
    uVar8 = (ulong)(uint)(pUVar2->fields).b;
    uVar9 = (ulong)(uint)(pUVar1->fields).g;
    uVar10 = (ulong)(uint)(pUVar6->fields).r;
    (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
              (uVar10,uVar9,uVar8,uVar7,pNVar5,(pNVar5->klass->vtable)._23_set_color.method);
    pNVar5 = (__this->fields)._checkedSprite;
    if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                (uVar10,uVar9,uVar8,uVar7,pNVar5,(pNVar5->klass->vtable)._23_set_color.method);
      pNVar5 = (__this->fields)._uncheckedSprite;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pNVar5 = (__this->fields)._uncheckedSprite;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03620dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                  (uVar10,uVar9,uVar8,uVar7,pNVar5,(pNVar5->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_interactable()  [RVA 0x3520DC8]
// Nekki.SF2.GUI.Scripts.CheckBox$$get_interactable @ RVA 0x3520DC8

bool Nekki_SF2_GUI_Scripts_CheckBox__get_interactable
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  return (__this->fields).super.super.super.m_Interactable;
}


// ===== public void add_OnChangedState(Action<CheckBox.EKFFAMKMBIH> CJNHFNHJHPE)  [RVA 0x3520DD0]
// Nekki.SF2.GUI.Scripts.CheckBox$$add_OnChangedState @ RVA 0x3520DD0

void Nekki_SF2_GUI_Scripts_CheckBox__add_OnChangedState
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,
               System_Action_CheckBox_EKFFAMKMBIH__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_CheckBox_EKFFAMKMBIH__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar5;
  System_Action_CheckBox_EKFFAMKMBIH__o *a;
  
  if ((DAT_045689bd & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    DAT_045689bd = 1;
  }
  a = (__this->fields).LCDOFOMLNLI;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
             FUN_01c07368(&(__this->fields).LCDOFOMLNLI,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public CheckBox.EKFFAMKMBIH get_State()  [RVA 0x3520E84]
// Nekki.SF2.GUI.Scripts.CheckBox$$get_State @ RVA 0x3520E84

int32_t Nekki_SF2_GUI_Scripts_CheckBox__get_State
                  (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  return (__this->fields).OIKLOAGFFGO;
}


// ===== private void IHJPNECNEGF()  [RVA 0x3520E8C]
// Nekki.SF2.GUI.Scripts.CheckBox$$IHJPNECNEGF @ RVA 0x3520E8C

void Nekki_SF2_GUI_Scripts_CheckBox__IHJPNECNEGF
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Scripts_CheckBox__set_State(__this,(uint)((__this->fields).OIKLOAGFFGO == 0),in_x2);
  return;
}


// ===== public void set_State(CheckBox.EKFFAMKMBIH CJNHFNHJHPE)  [RVA 0x3520E9C]
// Nekki.SF2.GUI.Scripts.CheckBox$$set_State @ RVA 0x3520E9C

void Nekki_SF2_GUI_Scripts_CheckBox__set_State
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar1;
  
  if ((__this->fields).OIKLOAGFFGO == CJNHFNHJHPE) {
    return;
  }
  pSVar1 = (__this->fields).LCDOFOMLNLI;
  (__this->fields).OIKLOAGFFGO = CJNHFNHJHPE;
  if (pSVar1 != (System_Action_CheckBox_EKFFAMKMBIH__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,CJNHFNHJHPE,
               (pSVar1->fields).super.super.method);
    Nekki_SF2_GUI_Scripts_CheckBox__NKIOJIILDGG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ClearEventsSubscription()  [RVA 0x3520F9C]
// Nekki.SF2.GUI.Scripts.CheckBox$$ClearEventsSubscription @ RVA 0x3520F9C

void Nekki_SF2_GUI_Scripts_CheckBox__ClearEventsSubscription
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  System_Action_CheckBox_EKFFAMKMBIH__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar2;
  
  if ((DAT_045689be & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
                    /* try { // try from 03620fd4 to 0372154b has its CatchHandler @ 03620fd4
                       catch() { ... } // from try @ 03620fd4 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621598 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621c88 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621cb4 with catch @ 03620fd4
                       catch() { ... } // from try @ 03621cf4 with catch @ 03620fd4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_CheckBox_<>c_EMFONFKBKJH__);
    FUN_01bab630(&Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo);
    DAT_045689be = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__10_0;
  if (pSVar2 == (System_Action_CheckBox_EKFFAMKMBIH__o *)0x0) {
    if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
             thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__10_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
    (__this->fields).LCDOFOMLNLI = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).LCDOFOMLNLI,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Awake()  [RVA 0x3521088]
// Nekki.SF2.GUI.Scripts.CheckBox$$Awake @ RVA 0x3521088

void Nekki_SF2_GUI_Scripts_CheckBox__Awake
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_045689bf & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_CheckBox_IHJPNECNEGF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045689bf = 1;
    method = extraout_x1;
  }
  (__this->fields).super._EnableClickAnimation = false;
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.m_OnClick;
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
    UnityEngine_UI_Selectable__set_transition
              ((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x0;
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)0x0,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_Scripts_CheckBox__set_State(__this,(__this->fields).OIKLOAGFFGO,method_01);
    Nekki_SF2_GUI_Scripts_CheckBox__set_interactable
              (__this,(__this->fields).super.super.super.m_Interactable,method_01);
    Nekki_SF2_GUI_Scripts_CheckBox__NKIOJIILDGG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x352115C]
// Nekki.SF2.GUI.Scripts.CheckBox$$.ctor @ RVA 0x352115C

void Nekki_SF2_GUI_Scripts_CheckBox___ctor
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  System_Action_CheckBox_EKFFAMKMBIH__o **ppSVar1;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar2;
  UnityEngine_Color_o UVar3;
  
  if ((DAT_045689c0 & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_CheckBox_<>c_KMPAHBPEMPC__);
    FUN_01bab630(&Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo);
    DAT_045689c0 = 1;
  }
  UVar3 = CFBGPBCDAGA__NFFPCFGDOKG(0x96,0x96,0x96,200,(MethodInfo *)0x0);
  (__this->fields)._disabledColor.fields.r = UVar3.fields.r;
  (__this->fields)._disabledColor.fields.g = UVar3.fields.g;
  (__this->fields)._disabledColor.fields.b = UVar3.fields.b;
  (__this->fields)._disabledColor.fields.a = UVar3.fields.a;
  UVar3 = CFBGPBCDAGA__NFFPCFGDOKG(0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  (__this->fields)._enabledColor.fields.r = UVar3.fields.r;
  (__this->fields)._enabledColor.fields.g = UVar3.fields.g;
  (__this->fields)._enabledColor.fields.b = UVar3.fields.b;
  (__this->fields)._enabledColor.fields.a = UVar3.fields.a;
  if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__20_0;
  if (pSVar2 == (System_Action_CheckBox_EKFFAMKMBIH__o *)0x0) {
    if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
             thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__20_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  (__this->fields).LCDOFOMLNLI = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).LCDOFOMLNLI,pSVar2);
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NKIOJIILDGG()  [RVA 0x3520EE4]
// Nekki.SF2.GUI.Scripts.CheckBox$$NKIOJIILDGG @ RVA 0x3520EE4

void Nekki_SF2_GUI_Scripts_CheckBox__NKIOJIILDGG
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_045689c1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045689c1 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._uncheckedSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._uncheckedSprite;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03620f98;
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).OIKLOAGFFGO == 1,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._checkedSprite;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).OIKLOAGFFGO == 0,(MethodInfo *)0x0);
    return;
  }
LAB_03620f98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

