// TypeDefIndex 1901
// Namespace: Nekki.SF2.GUI.Map
// public class MoveableMapPanel : MonoBehaviour
// Fields:
//   private Action AIMIDDHDIAG; // 0x20
//   private Action ODENJKGAALC; // 0x28
//   private const float IHFAANFOJJA = 1200;
//   private const float NGHPMFKFNOO = 0;
//   private const float OAMFMINDBJB = 0.5;
//   private const float GGPNDEMGCDF = 1;
//   private RectTransform KFADFKDCDGM; // 0x30
//   private Sequence BGPAMNDALNP; // 0x38
//   private MapPanel ICEHFJNJDDO; // 0x40
//   private MoveableMapPanel.GKLJBLIFDMM NEGADKBHGOM; // 0x48

// ===== public void CloseRightNow()  [RVA 0x3256D80]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$CloseRightNow @ RVA 0x3256D80

void Nekki_SF2_GUI_Map_MoveableMapPanel__CloseRightNow
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,1200.0,(MethodInfo *)0x0);
  return;
}


// ===== public void remove_OnFinishedOpen(Action CJNHFNHJHPE)  [RVA 0x3256DE8]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$remove_OnFinishedOpen @ RVA 0x3256DE8

void Nekki_SF2_GUI_Map_MoveableMapPanel__remove_OnFinishedOpen
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_0456716d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456716d = 1;
  }
  ppSVar4 = &(__this->fields).AIMIDDHDIAG;
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


// ===== private void PJMMEIOHMOB()  [RVA 0x3256E84]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$PJMMEIOHMOB @ RVA 0x3256E84

void Nekki_SF2_GUI_Map_MoveableMapPanel__PJMMEIOHMOB
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float duration;
  
  if ((DAT_0456716e & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_AGCMHAHKAIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_EEJALNEPFIL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_KHMMOAJLBKI__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_0456716e = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  (__this->fields).NEGADKBHGOM = 0;
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  (__this->fields).BGPAMNDALNP = pDVar1;
  thunk_FUN_01c20e04();
  duration = Nekki_SF2_GUI_Map_MoveableMapPanel__FHEANCOCLEL(__this,1200.0,method_00);
  if (0.0 < duration) {
    pDVar1 = (__this->fields).BGPAMNDALNP;
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    t = DG_Tweening_DOTween__To(getter,setter,1200.0,duration,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append(pDVar1,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    pDVar1 = (__this->fields).BGPAMNDALNP;
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar1,callback,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__EEJALNEPFIL(__this,method_01);
  return;
}


// ===== private void FHHDIIMNKNJ()  [RVA 0x3256DA4]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$FHHDIIMNKNJ @ RVA 0x3256DA4

void Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).BGPAMNDALNP;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3257144]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$.ctor @ RVA 0x3257144

void Nekki_SF2_GUI_Map_MoveableMapPanel___ctor
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  
  if ((DAT_0456716f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_CAMMODJJDJE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_JCJGEMKOHCI__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo);
    DAT_0456716f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    ppSVar1 = &(__this->fields).AIMIDDHDIAG;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_1;
    if (pSVar2 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_1;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).ODENJKGAALC;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float KHMMOAJLBKI()  [RVA 0x32572D0]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$KHMMOAJLBKI @ RVA 0x32572D0

float Nekki_SF2_GUI_Map_MoveableMapPanel__KHMMOAJLBKI
                (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields).KFADFKDCDGM;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition3D(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsMoving()  [RVA 0x32572F8]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsMoving @ RVA 0x32572F8

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsMoving
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).BGPAMNDALNP;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public bool IsOpening()  [RVA 0x325730C]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsOpening @ RVA 0x325730C

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsOpening
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).BGPAMNDALNP;
  bVar1 = false;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = (__this->fields).NEGADKBHGOM == 1;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== public bool Open()  [RVA 0x3257344]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$Open @ RVA 0x3257344

bool Nekki_SF2_GUI_Map_MoveableMapPanel__Open
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  
  bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__IsClosed(__this,method);
  method_00 = extraout_x1;
  if (!bVar1) {
    t = (__this->fields).BGPAMNDALNP;
    if (t == (DG_Tweening_Sequence_o *)0x0) {
      return false;
    }
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    if ((!bVar1) || (method_00 = extraout_x1_00, (__this->fields).NEGADKBHGOM != 0)) {
      return false;
    }
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__INFGPIFPJGH(__this,method_00);
  return true;
}


// ===== private float KILOIOEILFL()  [RVA 0x32572D4]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$KILOIOEILFL @ RVA 0x32572D4

float Nekki_SF2_GUI_Map_MoveableMapPanel__KILOIOEILFL
                (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields).KFADFKDCDGM;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition3D(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AGCMHAHKAIF(float CACDLDCFNNC)  [RVA 0x32575F8]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$AGCMHAHKAIF @ RVA 0x32575F8

void Nekki_SF2_GUI_Map_MoveableMapPanel__AGCMHAHKAIF
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,float CACDLDCFNNC,MethodInfo *method)

{
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,CACDLDCFNNC,(MethodInfo *)0x0);
  return;
}


// ===== public bool Close()  [RVA 0x3257604]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$Close @ RVA 0x3257604

bool Nekki_SF2_GUI_Map_MoveableMapPanel__Close
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  
  bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__IsOpened(__this,method);
  method_00 = extraout_x1;
  if (!bVar1) {
    t = (__this->fields).BGPAMNDALNP;
    if (t == (DG_Tweening_Sequence_o *)0x0) {
      return false;
    }
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    if ((!bVar1) || (method_00 = extraout_x1_00, (__this->fields).NEGADKBHGOM != 1)) {
      return false;
    }
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__PJMMEIOHMOB(__this,method_00);
  return true;
}


// ===== public bool IsOpened()  [RVA 0x3257650]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsOpened @ RVA 0x3257650

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsOpened
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  float fVar2;
  
  fVar2 = Nekki_SF2_GUI_Map_MoveableMapPanel__KILOIOEILFL(__this,method);
  if (fVar2 <= 1.0) {
    t = (__this->fields).BGPAMNDALNP;
    if (t == (DG_Tweening_Sequence_o *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== public void add_OnFinishedClose(Action CJNHFNHJHPE)  [RVA 0x3257698]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$add_OnFinishedClose @ RVA 0x3257698

void Nekki_SF2_GUI_Map_MoveableMapPanel__add_OnFinishedClose
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567170 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567170 = 1;
  }
  ppSVar4 = &(__this->fields).ODENJKGAALC;
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


// ===== private float FHEANCOCLEL(float APINBNILPLA)  [RVA 0x3257070]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$FHEANCOCLEL @ RVA 0x3257070

float Nekki_SF2_GUI_Map_MoveableMapPanel__FHEANCOCLEL
                (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,float APINBNILPLA,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  
  if ((DAT_04567171 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567171 = 1;
    method = extraout_x1;
  }
  fVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__KILOIOEILFL(__this,method);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar2 = (ABS(fVar1 - APINBNILPLA) / 1200.0) * 0.5;
  fVar1 = 0.0;
  if (0.05 < fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}


// ===== public void Init(MapPanel DOOCPKBJPGG, BaseScrollContent ANGBPBINHBL)  [RVA 0x3257734]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$Init @ RVA 0x3257734

void Nekki_SF2_GUI_Map_MoveableMapPanel__Init
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,
               Nekki_SF2_GUI_Map_MapPanel_o *DOOCPKBJPGG,
               Nekki_SF2_GUI_BaseScrollContent_o *ANGBPBINHBL,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o **ppNVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o **ppUVar3;
  
  if ((DAT_04567172 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04567172 = 1;
  }
  ppNVar1 = &(__this->fields).ICEHFJNJDDO;
  *ppNVar1 = DOOCPKBJPGG;
  thunk_FUN_01c20e04(ppNVar1,DOOCPKBJPGG);
  if (ANGBPBINHBL != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)ANGBPBINHBL,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    ppUVar3 = &(__this->fields).KFADFKDCDGM;
    *ppUVar3 = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ACMFPMGPPEE()  [RVA 0x32577B4]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$ACMFPMGPPEE @ RVA 0x32577B4

void Nekki_SF2_GUI_Map_MoveableMapPanel__ACMFPMGPPEE
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,0.0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).AIMIDDHDIAG;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033577e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnFinishedOpen(Action CJNHFNHJHPE)  [RVA 0x32577F0]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$add_OnFinishedOpen @ RVA 0x32577F0

void Nekki_SF2_GUI_Map_MoveableMapPanel__add_OnFinishedOpen
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567173 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567173 = 1;
  }
  ppSVar4 = &(__this->fields).AIMIDDHDIAG;
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


// ===== private void GFECOLFOILC(float CJNHFNHJHPE)  [RVA 0x3256DDC]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$GFECOLFOILC @ RVA 0x3256DDC

void Nekki_SF2_GUI_Map_MoveableMapPanel__GFECOLFOILC
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void INFGPIFPJGH()  [RVA 0x3257410]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$INFGPIFPJGH @ RVA 0x3257410

void Nekki_SF2_GUI_Map_MoveableMapPanel__INFGPIFPJGH
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float duration;
  
  if ((DAT_04567174 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_ACMFPMGPPEE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_GFECOLFOILC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_KILOIOEILFL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04567174 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  (__this->fields).NEGADKBHGOM = 1;
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  (__this->fields).BGPAMNDALNP = pDVar1;
  thunk_FUN_01c20e04();
  duration = Nekki_SF2_GUI_Map_MoveableMapPanel__FHEANCOCLEL(__this,0.0,method_00);
  if (0.0 < duration) {
    pDVar1 = (__this->fields).BGPAMNDALNP;
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    t = DG_Tweening_DOTween__To(getter,setter,0.0,duration,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append(pDVar1,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    pDVar1 = (__this->fields).BGPAMNDALNP;
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar1,callback,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__ACMFPMGPPEE(__this,method_01);
  return;
}


// ===== public void OpenRightNow()  [RVA 0x325788C]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$OpenRightNow @ RVA 0x325788C

void Nekki_SF2_GUI_Map_MoveableMapPanel__OpenRightNow
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,0.0,(MethodInfo *)0x0);
  return;
}


// ===== public bool IsClosing()  [RVA 0x32573D8]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsClosing @ RVA 0x32573D8

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsClosing
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).BGPAMNDALNP;
  bVar1 = false;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = (__this->fields).NEGADKBHGOM == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== public void remove_OnFinishedClose(Action CJNHFNHJHPE)  [RVA 0x32578AC]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$remove_OnFinishedClose @ RVA 0x32578AC

void Nekki_SF2_GUI_Map_MoveableMapPanel__remove_OnFinishedClose
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567175 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567175 = 1;
  }
  ppSVar4 = &(__this->fields).ODENJKGAALC;
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


// ===== private void EEJALNEPFIL()  [RVA 0x3257104]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$EEJALNEPFIL @ RVA 0x3257104

void Nekki_SF2_GUI_Map_MoveableMapPanel__EEJALNEPFIL
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,1200.0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).ODENJKGAALC;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0335713c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsClosed()  [RVA 0x325738C]
// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsClosed @ RVA 0x325738C

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsClosed
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  float fVar2;
  
  fVar2 = Nekki_SF2_GUI_Map_MoveableMapPanel__KILOIOEILFL(__this,method);
  if (1199.0 <= fVar2) {
    t = (__this->fields).BGPAMNDALNP;
    if (t == (DG_Tweening_Sequence_o *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

