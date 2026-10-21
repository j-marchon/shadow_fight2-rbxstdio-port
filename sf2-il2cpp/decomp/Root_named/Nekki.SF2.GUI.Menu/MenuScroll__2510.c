// TypeDefIndex 2510
// Namespace: Nekki.SF2.GUI.Menu
// public class MenuScroll : MonoBehaviour, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler
// Fields:
//   private const float KEBFOOHBHPH = 0.3;
//   private Action LGFDPLGBHAM; // 0x20
//   private Action DKPPMJCLNAB; // 0x28
//   private Action<bool> NEEFCIAEAJG; // 0x30
//   private Action<MenuScroll.OAPJJKKCANC> NPBCGNGDANF; // 0x38
//   private Action JIKHJOBDNHA; // 0x40
//   public MenuScroll.OAPJJKKCANC CurScrollState; // 0x48
//   private Button _wheel; // 0x50
//   private Text _label; // 0x58
//   private Image _background; // 0x60
//   private float ILADFHOHLJH; // 0x68
//   private float FDFCNIMNHFK; // 0x6C
//   private float JICCBHGBHCI; // 0x70
//   private MenuScroll.ALEAPFHMPBE JDNKKGPNHPB; // 0x74
//   private float GBAGCMBPGHI; // 0x78
//   private Vector2 NLAOCJOCKHI; // 0x7C
//   private bool KDBFJLCCJHC; // 0x84
//   private bool BDFGFOCANII; // 0x85
//   private bool BEAOMNNKBJA; // 0x86
//   private bool KFCLIPMOFFN; // 0x87
//   private Tween OGBOMAHLDKN; // 0x88

// ===== public void .ctor()  [RVA 0x338B52C]
// Nekki.SF2.GUI.Menu.MenuScroll$$.ctor @ RVA 0x338B52C

void Nekki_SF2_GUI_Menu_MenuScroll___ctor
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_bool__o **ppSVar2;
  System_Action_MenuScroll_OAPJJKKCANC__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar4;
  System_Action_bool__o *pSVar5;
  System_Action_MenuScroll_OAPJJKKCANC__o *pSVar6;
  
  if ((DAT_04567bdb & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_<>c_AAKCCCILCMI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_<>c_EJLDFLICHHP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_<>c_KDKIOEMMGAB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_<>c_NHDOCJFCKEP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_<>c_PBNACHMICPB__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo);
    DAT_04567bdb = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar4 = Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_0;
  if (pSVar4 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo,method);
    }
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_0;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  if (__this != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
    ppSVar1 = &(__this->fields).LGFDPLGBHAM;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_1;
    if (pSVar4 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_1;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).DKPPMJCLNAB;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_2;
    if (pSVar5 == (System_Action_bool__o *)0x0) {
      if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_2;
      *ppSVar2 = pSVar5;
      thunk_FUN_01c20e04(ppSVar2,pSVar5);
    }
    ppSVar2 = &(__this->fields).NEEFCIAEAJG;
    *ppSVar2 = pSVar5;
    thunk_FUN_01c20e04(ppSVar2,pSVar5);
    if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_3;
    if (pSVar6 == (System_Action_MenuScroll_OAPJJKKCANC__o *)0x0) {
      if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_MenuScroll_OAPJJKKCANC__o *)
               thunk_FUN_01bda818(System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      ppSVar3 = &Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_3;
      *ppSVar3 = pSVar6;
      thunk_FUN_01c20e04(ppSVar3,pSVar6);
    }
    ppSVar3 = &(__this->fields).NPBCGNGDANF;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
    if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_4;
    if (pSVar4 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Menu_MenuScroll_<>c_TypeInfo->static_fields->__9__55_4;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).JIKHJOBDNHA;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    (__this->fields).JICCBHGBHCI = 10.0;
    (__this->fields).GBAGCMBPGHI = 1.0;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool CPLNFCEAOEF(Vector2 FEDEPKJBDDM)  [RVA 0x338B89C]
// Nekki.SF2.GUI.Menu.MenuScroll$$CPLNFCEAOEF @ RVA 0x338B89C

bool Nekki_SF2_GUI_Menu_MenuScroll__CPLNFCEAOEF
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,UnityEngine_Vector2_o FEDEPKJBDDM,
               MethodInfo *method)

{
  return true;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x338B8A4]
// Nekki.SF2.GUI.Menu.MenuScroll$$get_RectTransform @ RVA 0x338B8A4

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform
          (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04567bdc & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567bdc = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}


// ===== private void AEEDBFCIFIA(float LNEPMKENPBG, float PNEIGGOFIOA)  [RVA 0x338B904]
// Nekki.SF2.GUI.Menu.MenuScroll$$AEEDBFCIFIA @ RVA 0x338B904

void Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,float LNEPMKENPBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DG_Tweening_Tween_o **ppDVar2;
  
  if ((DAT_04567bdd & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_GetCurrentLength__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_KBAFINNJPGC__);
    DAT_04567bdd = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__CCPABLFBFFA(__this,method);
  if (0.0 < PNEIGGOFIOA) {
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__To(getter,setter,LNEPMKENPBG,PNEIGGOFIOA,(MethodInfo *)0x0);
    ppDVar2 = &(__this->fields).OGBOMAHLDKN;
    *ppDVar2 = (DG_Tweening_Tween_o *)pDVar1;
    thunk_FUN_01c20e04(ppDVar2,pDVar1);
    return;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__KBAFINNJPGC(__this,LNEPMKENPBG,method_00);
  return;
}


// ===== public void OnBackgroundClick()  [RVA 0x338BBB8]
// Nekki.SF2.GUI.Menu.MenuScroll$$OnBackgroundClick @ RVA 0x338BBB8

void Nekki_SF2_GUI_Menu_MenuScroll__OnBackgroundClick
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  if ((__this->fields).KFCLIPMOFFN != false) {
    (__this->fields).KDBFJLCCJHC = false;
    Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,0.0,0.3,method);
    return;
  }
  return;
}


// ===== public void add_OnChanging(Action<bool> CJNHFNHJHPE)  [RVA 0x338BBE8]
// Nekki.SF2.GUI.Menu.MenuScroll$$add_OnChanging @ RVA 0x338BBE8

void Nekki_SF2_GUI_Menu_MenuScroll__add_OnChanging
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_bool__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o **ppSVar6;
  System_Action_bool__o *a;
  
  if ((DAT_04567bde & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04567bde = 1;
  }
  ppSVar6 = &(__this->fields).NEEFCIAEAJG;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Expand(float PNEIGGOFIOA)  [RVA 0x338BC98]
// Nekki.SF2.GUI.Menu.MenuScroll$$Expand @ RVA 0x338BC98

void Nekki_SF2_GUI_Menu_MenuScroll__Expand
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,float PNEIGGOFIOA,MethodInfo *method)

{
  (__this->fields).KDBFJLCCJHC = true;
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,(__this->fields).FDFCNIMNHFK,PNEIGGOFIOA,method)
  ;
  return;
}


// ===== public float GetCurrentLength()  [RVA 0x338BCAC]
// Nekki.SF2.GUI.Menu.MenuScroll$$GetCurrentLength @ RVA 0x338BCAC

float Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength
                (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  iVar1 = (__this->fields).JDNKKGPNHPB;
  __this_00 = Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar2 = UVar3.fields.m_Height;
    if (iVar1 != 1) {
      fVar2 = UVar3.fields.m_Width;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnOpen(Action CJNHFNHJHPE)  [RVA 0x338BCD8]
// Nekki.SF2.GUI.Menu.MenuScroll$$add_OnOpen @ RVA 0x338BCD8

void Nekki_SF2_GUI_Menu_MenuScroll__add_OnOpen
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567bdf & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567bdf = 1;
  }
  ppSVar4 = &(__this->fields).LGFDPLGBHAM;
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


// ===== private void CCPABLFBFFA()  [RVA 0x338BA44]
// Nekki.SF2.GUI.Menu.MenuScroll$$CCPABLFBFFA @ RVA 0x338BA44

void Nekki_SF2_GUI_Menu_MenuScroll__CCPABLFBFFA
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).OGBOMAHLDKN;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public void OnEndDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x338BD74]
// Nekki.SF2.GUI.Menu.MenuScroll$$OnEndDrag @ RVA 0x338BD74

void Nekki_SF2_GUI_Menu_MenuScroll__OnEndDrag
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  (__this->fields).BDFGFOCANII = false;
  if ((__this->fields).KDBFJLCCJHC == false) {
    fVar6 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,(MethodInfo *)OHNNFPGGEFK);
    method_00 = extraout_x1_00;
  }
  else {
    fVar6 = (__this->fields).FDFCNIMNHFK;
    fVar3 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,(MethodInfo *)OHNNFPGGEFK);
    fVar6 = fVar6 - fVar3;
    method_00 = extraout_x1;
  }
  fVar7 = (__this->fields).FDFCNIMNHFK;
  fVar4 = (__this->fields).JICCBHGBHCI;
  bVar1 = (__this->fields).KDBFJLCCJHC;
  fVar3 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,method_00);
  fVar5 = (__this->fields).FDFCNIMNHFK;
  bVar2 = bVar1 != (fVar7 * fVar4) / 100.0 < fVar6;
  if (bVar2) {
    fVar3 = fVar7 - fVar3;
  }
  (__this->fields).KDBFJLCCJHC = bVar2;
  fVar6 = 0.0;
  if (bVar2) {
    fVar6 = fVar5;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,fVar6,(fVar3 / fVar5) * 0.3,method_01);
  return;
}


// ===== public void OnBeginDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x338BE18]
// Nekki.SF2.GUI.Menu.MenuScroll$$OnBeginDrag @ RVA 0x338BE18

void Nekki_SF2_GUI_Menu_MenuScroll__OnBeginDrag
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPoint;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar1;
  UnityEngine_Vector2_Fields local_28;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04567be0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567be0 = 1;
    method_00 = extraout_x1;
  }
  local_28.x = 0.0;
  local_28.y = 0.0;
  rect = Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform(__this,(MethodInfo *)method_00);
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    screenPoint = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (OHNNFPGGEFK,(MethodInfo *)0x0);
    if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_28,
               (MethodInfo *)0x0);
    (__this->fields).BDFGFOCANII = true;
    (__this->fields).NLAOCJOCKHI.fields = local_28;
    Nekki_SF2_GUI_Menu_MenuScroll__CCPABLFBFFA(__this,method_01);
    pSVar1 = (__this->fields).JIKHJOBDNHA;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsExpanded()  [RVA 0x338BEFC]
// Nekki.SF2.GUI.Menu.MenuScroll$$get_IsExpanded @ RVA 0x338BEFC

bool Nekki_SF2_GUI_Menu_MenuScroll__get_IsExpanded
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  return (__this->fields).KDBFJLCCJHC;
}


// ===== public void SetOutsideTouchProperties(bool GEBBGFMJHLK)  [RVA 0x338BF04]
// Nekki.SF2.GUI.Menu.MenuScroll$$SetOutsideTouchProperties @ RVA 0x338BF04

void Nekki_SF2_GUI_Menu_MenuScroll__SetOutsideTouchProperties
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,bool GEBBGFMJHLK,MethodInfo *method)

{
  (__this->fields).KFCLIPMOFFN = GEBBGFMJHLK;
  return;
}


// ===== public void remove_OnRolling(Action<MenuScroll.OAPJJKKCANC> CJNHFNHJHPE)  [RVA 0x338BF10]
// Nekki.SF2.GUI.Menu.MenuScroll$$remove_OnRolling @ RVA 0x338BF10

void Nekki_SF2_GUI_Menu_MenuScroll__remove_OnRolling
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MenuScroll_OAPJJKKCANC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MenuScroll_OAPJJKKCANC__o *pSVar5;
  System_Action_MenuScroll_OAPJJKKCANC__o **ppSVar6;
  System_Action_MenuScroll_OAPJJKKCANC__o *source;
  
  if ((DAT_04567be1 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    DAT_04567be1 = 1;
  }
  ppSVar6 = &(__this->fields).NPBCGNGDANF;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MenuScroll_OAPJJKKCANC__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void KBAFINNJPGC(float HFBFLHCIGNB)  [RVA 0x338BA7C]
// Nekki.SF2.GUI.Menu.MenuScroll$$KBAFINNJPGC @ RVA 0x338BA7C

void Nekki_SF2_GUI_Menu_MenuScroll__KBAFINNJPGC
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,float HFBFLHCIGNB,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  UnityEngine_RectTransform_o *__this_00;
  MethodInfo *method_00;
  System_Action_bool__o *pSVar3;
  System_Action_o *pSVar4;
  System_Action_MenuScroll_OAPJJKKCANC__o *pSVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o value;
  
  fVar7 = (__this->fields).FDFCNIMNHFK;
  __this_00 = Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform(__this,method);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0348bbb4;
  iVar1 = (__this->fields).JDNKKGPNHPB;
  if (HFBFLHCIGNB <= 0.0) {
    HFBFLHCIGNB = 0.0;
  }
  fVar7 = ABS(fVar7);
  UVar8 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
  fVar6 = HFBFLHCIGNB;
  fVar2 = UVar8.fields.m_Width;
  if (iVar1 != 1) {
    fVar6 = UVar8.fields.m_Height;
    fVar2 = HFBFLHCIGNB;
  }
  value.fields.y = fVar6;
  value.fields.x = fVar2;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Menu_MenuScroll__EDCPAMPAOIC(__this,method_00);
  if (HFBFLHCIGNB == 0.0) {
    if ((__this->fields).CurScrollState == 2) {
      if (ABS(HFBFLHCIGNB) == fVar7) goto LAB_0348bb08;
    }
    else {
      pSVar3 = (__this->fields).NEEFCIAEAJG;
      (__this->fields).CurScrollState = 2;
      if (pSVar3 == (System_Action_bool__o *)0x0) goto LAB_0348bbb4;
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,0,(pSVar3->fields).super.super.method);
      pSVar4 = (__this->fields).DKPPMJCLNAB;
joined_r0x0348bb6c:
      if (pSVar4 == (System_Action_o *)0x0) goto LAB_0348bbb4;
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method);
    }
  }
  else if (ABS(HFBFLHCIGNB) == fVar7) {
LAB_0348bb08:
    if ((__this->fields).CurScrollState != 1) {
      pSVar3 = (__this->fields).NEEFCIAEAJG;
      (__this->fields).CurScrollState = 1;
      if (pSVar3 == (System_Action_bool__o *)0x0) goto LAB_0348bbb4;
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,1,(pSVar3->fields).super.super.method);
      pSVar4 = (__this->fields).LGFDPLGBHAM;
      goto joined_r0x0348bb6c;
    }
  }
  else {
    (__this->fields).CurScrollState = 0;
  }
  pSVar5 = (__this->fields).NPBCGNGDANF;
  if (pSVar5 != (System_Action_MenuScroll_OAPJJKKCANC__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,(__this->fields).CurScrollState,
               (pSVar5->fields).super.super.method);
    return;
  }
LAB_0348bbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnMenuBtnClick()  [RVA 0x338C170]
// Nekki.SF2.GUI.Menu.MenuScroll$$OnMenuBtnClick @ RVA 0x338C170

void Nekki_SF2_GUI_Menu_MenuScroll__OnMenuBtnClick
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  float LNEPMKENPBG;
  
  if ((__this->fields).KDBFJLCCJHC == false) {
    LNEPMKENPBG = (__this->fields).FDFCNIMNHFK;
    (__this->fields).KDBFJLCCJHC = true;
  }
  else {
    (__this->fields).KDBFJLCCJHC = false;
    LNEPMKENPBG = 0.0;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,LNEPMKENPBG,0.3,method);
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public void add_OnClose(Action CJNHFNHJHPE)  [RVA 0x338C1B0]
// Nekki.SF2.GUI.Menu.MenuScroll$$add_OnClose @ RVA 0x338C1B0

void Nekki_SF2_GUI_Menu_MenuScroll__add_OnClose
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567be2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567be2 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
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


// ===== public void remove_OnClose(Action CJNHFNHJHPE)  [RVA 0x338C24C]
// Nekki.SF2.GUI.Menu.MenuScroll$$remove_OnClose @ RVA 0x338C24C

void Nekki_SF2_GUI_Menu_MenuScroll__remove_OnClose
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567be3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567be3 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
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


// ===== public void Init(MenuScroll.ALEAPFHMPBE ACCIHBHMFPN = 1)  [RVA 0x338C2E8]
// Nekki.SF2.GUI.Menu.MenuScroll$$Init @ RVA 0x338C2E8

void Nekki_SF2_GUI_Menu_MenuScroll__Init
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UnityEngine_UI_Image_o *pUVar3;
  float fVar4;
  float in_s3;
  
  pMVar2 = (MethodInfo *)(ulong)(uint)ACCIHBHMFPN;
  if ((DAT_04567be4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567be4 = 1;
    pMVar2 = extraout_x1;
  }
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  fVar4 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,pMVar2);
  (__this->fields).FDFCNIMNHFK = fVar4;
  (__this->fields).CurScrollState = 0;
  (__this->fields).KFCLIPMOFFN = true;
  (__this->fields).BDFGFOCANII = false;
  (__this->fields).BEAOMNNKBJA = true;
  (__this->fields).GBAGCMBPGHI = 0.0;
  pUVar3 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar2 = extraout_x1_00;
  if (bVar1) {
    pUVar3 = (__this->fields)._background;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
              (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
    (__this->fields).GBAGCMBPGHI = 255.0 / in_s3;
    pMVar2 = extraout_x1_01;
  }
  (__this->fields).KDBFJLCCJHC = false;
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,0.0,0.0,pMVar2);
  return;
}


// ===== public void SetAllowRolling(bool CJNHFNHJHPE)  [RVA 0x338C3C0]
// Nekki.SF2.GUI.Menu.MenuScroll$$SetAllowRolling @ RVA 0x338C3C0

void Nekki_SF2_GUI_Menu_MenuScroll__SetAllowRolling
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BEAOMNNKBJA = CJNHFNHJHPE;
  return;
}


// ===== public Button GetButton()  [RVA 0x338C3CC]
// Nekki.SF2.GUI.Menu.MenuScroll$$GetButton @ RVA 0x338C3CC

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Menu_MenuScroll__GetButton(Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  return (__this->fields)._wheel;
}


// ===== public void add_OnTouch(Action CJNHFNHJHPE)  [RVA 0x338C3D4]
// Nekki.SF2.GUI.Menu.MenuScroll$$add_OnTouch @ RVA 0x338C3D4

void Nekki_SF2_GUI_Menu_MenuScroll__add_OnTouch
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567be5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567be5 = 1;
  }
  ppSVar4 = &(__this->fields).JIKHJOBDNHA;
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


// ===== private void EDCPAMPAOIC()  [RVA 0x338BFC0]
// Nekki.SF2.GUI.Menu.MenuScroll$$EDCPAMPAOIC @ RVA 0x338BFC0

void Nekki_SF2_GUI_Menu_MenuScroll__EDCPAMPAOIC
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  ulong uVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Image_c *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined1 in_q2 [16];
  float fVar8;
  float fVar9;
  
  if ((DAT_04567be6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567be6 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  fVar6 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,method_00);
  pUVar5 = (__this->fields)._background;
  if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
    fVar9 = (__this->fields).FDFCNIMNHFK;
    fVar8 = (__this->fields).GBAGCMBPGHI;
    uVar7 = (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                      (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
    pUVar2 = (__this->fields)._background;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
    (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
              (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
    pUVar2 = (__this->fields)._background;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
    fVar8 = (ABS(fVar6 / fVar9) * 255.0) / fVar8;
    (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
              (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (uVar7,in_d1,in_q2,(ulong)(uint)fVar8,pUVar5,
               (pUVar5->klass->vtable)._23_set_color.method);
    if (fVar8 <= 0.0) {
      pUVar5 = (__this->fields)._background;
      if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
      uVar3 = (*(pUVar5->klass->vtable)._24_get_raycastTarget.methodPtr)
                        (pUVar5,(pUVar5->klass->vtable)._24_get_raycastTarget.method);
      if ((uVar3 & 1) != 0) {
        pUVar5 = (__this->fields)._background;
        if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
        pUVar4 = pUVar5->klass;
        uVar7 = 0;
        goto LAB_0348c14c;
      }
    }
    if (fVar8 <= 0.0) {
      return;
    }
    pUVar5 = (__this->fields)._background;
    if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
      uVar3 = (*(pUVar5->klass->vtable)._24_get_raycastTarget.methodPtr)
                        (pUVar5,(pUVar5->klass->vtable)._24_get_raycastTarget.method);
      if ((uVar3 & 1) != 0) {
        return;
      }
      pUVar5 = (__this->fields)._background;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar4 = pUVar5->klass;
        uVar7 = 1;
LAB_0348c14c:
                    /* WARNING: Could not recover jumptable at 0x0348c168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar4->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar5,uVar7,(pUVar4->vtable)._25_set_raycastTarget.method);
        return;
      }
    }
  }
LAB_0348c16c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnChanging(Action<bool> CJNHFNHJHPE)  [RVA 0x338C470]
// Nekki.SF2.GUI.Menu.MenuScroll$$remove_OnChanging @ RVA 0x338C470

void Nekki_SF2_GUI_Menu_MenuScroll__remove_OnChanging
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_bool__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o **ppSVar6;
  System_Action_bool__o *source;
  
  if ((DAT_04567be7 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04567be7 = 1;
  }
  ppSVar6 = &(__this->fields).NEEFCIAEAJG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Collapse(float PNEIGGOFIOA)  [RVA 0x338BBD8]
// Nekki.SF2.GUI.Menu.MenuScroll$$Collapse @ RVA 0x338BBD8

void Nekki_SF2_GUI_Menu_MenuScroll__Collapse
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,float PNEIGGOFIOA,MethodInfo *method)

{
  (__this->fields).KDBFJLCCJHC = false;
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,0.0,PNEIGGOFIOA,method);
  return;
}


// ===== public bool GetAllowRolling()  [RVA 0x338C520]
// Nekki.SF2.GUI.Menu.MenuScroll$$GetAllowRolling @ RVA 0x338C520

bool Nekki_SF2_GUI_Menu_MenuScroll__GetAllowRolling
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  return (__this->fields).BEAOMNNKBJA;
}


// ===== public void remove_OnTouch(Action CJNHFNHJHPE)  [RVA 0x338C528]
// Nekki.SF2.GUI.Menu.MenuScroll$$remove_OnTouch @ RVA 0x338C528

void Nekki_SF2_GUI_Menu_MenuScroll__remove_OnTouch
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567be8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567be8 = 1;
  }
  ppSVar4 = &(__this->fields).JIKHJOBDNHA;
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


// ===== public void add_OnRolling(Action<MenuScroll.OAPJJKKCANC> CJNHFNHJHPE)  [RVA 0x338C5C4]
// Nekki.SF2.GUI.Menu.MenuScroll$$add_OnRolling @ RVA 0x338C5C4

void Nekki_SF2_GUI_Menu_MenuScroll__add_OnRolling
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MenuScroll_OAPJJKKCANC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MenuScroll_OAPJJKKCANC__o *pSVar5;
  System_Action_MenuScroll_OAPJJKKCANC__o **ppSVar6;
  System_Action_MenuScroll_OAPJJKKCANC__o *a;
  
  if ((DAT_04567be9 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    DAT_04567be9 = 1;
  }
  ppSVar6 = &(__this->fields).NPBCGNGDANF;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MenuScroll_OAPJJKKCANC__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void OnDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x338C674]
// Nekki.SF2.GUI.Menu.MenuScroll$$OnDrag @ RVA 0x338C674

void Nekki_SF2_GUI_Menu_MenuScroll__OnDrag
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPoint;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_Fields local_28;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04567bea & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567bea = 1;
    method_00 = extraout_x1;
  }
  local_28.x = 0.0;
  local_28.y = 0.0;
  rect = Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform(__this,(MethodInfo *)method_00);
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    screenPoint = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (OHNNFPGGEFK,(MethodInfo *)0x0);
    if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_28,
               (MethodInfo *)0x0);
    if ((__this->fields).BDFGFOCANII != false) {
      fVar3 = (__this->fields).NLAOCJOCKHI.fields.x - local_28.x;
      fVar4 = (__this->fields).NLAOCJOCKHI.fields.y - local_28.y;
      fVar1 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,method_01);
      fVar2 = (__this->fields).FDFCNIMNHFK;
      if ((__this->fields).JDNKKGPNHPB != 1) {
        fVar4 = fVar3;
      }
      fVar3 = fVar1 + fVar4;
      if (fVar2 <= fVar1 + fVar4) {
        fVar3 = fVar2;
      }
      Nekki_SF2_GUI_Menu_MenuScroll__KBAFINNJPGC(__this,fVar3,method_02);
      (__this->fields).NLAOCJOCKHI.fields = local_28;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnOpen(Action CJNHFNHJHPE)  [RVA 0x338C774]
// Nekki.SF2.GUI.Menu.MenuScroll$$remove_OnOpen @ RVA 0x338C774

void Nekki_SF2_GUI_Menu_MenuScroll__remove_OnOpen
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567beb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567beb = 1;
  }
  ppSVar4 = &(__this->fields).LGFDPLGBHAM;
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

