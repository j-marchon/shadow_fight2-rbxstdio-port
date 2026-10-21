// TypeDefIndex 3362
// Namespace: Nekki.SF2.GUI
// public class LockScreen : MonoBehaviour
// Fields:
//   private Color visibleColor; // 0x20
//   private Color invisibleColor; // 0x30
//   private Vector3 rotationAngle; // 0x40
//   private float rotationInterval; // 0x4C
//   private Image background; // 0x50
//   private ResolutionImage rotateImg; // 0x58
//   private Tween OCBEBGEKOIA; // 0x60
//   private static LockScreen <JPDNDPEAJAL>k__BackingField; // 0x0

// ===== private static void .cctor()  [RVA 0x3539BA0]
// Nekki.SF2.GUI.LockScreen$$.cctor @ RVA 0x3539BA0

void Nekki_SF2_GUI_LockScreen___cctor(MethodInfo *method)

{
  if (DAT_04568b3e == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568b3e = '\x01';
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField =
       (Nekki_SF2_GUI_LockScreen_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields,0);
  return;
}


// ===== public void .ctor()  [RVA 0x3539BFC]
// Nekki.SF2.GUI.LockScreen$$.ctor @ RVA 0x3539BFC

void Nekki_SF2_GUI_LockScreen___ctor(Nekki_SF2_GUI_LockScreen_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OAHAAAHHMOL(bool CMPKOOEKFKF, bool CCOCAIEPCOJ = False)  [RVA 0x3539C04]
// Nekki.SF2.GUI.LockScreen$$OAHAAAHHMOL @ RVA 0x3539C04

void Nekki_SF2_GUI_LockScreen__OAHAAAHHMOL
               (Nekki_SF2_GUI_LockScreen_o *__this,bool CMPKOOEKFKF,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  bool bVar4;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  MethodInfo *method_00;
  UnityEngine_Color_o *pUVar7;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  
  if ((DAT_04568ab9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ab9 = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_03639d64;
    UnityEngine_GameObject__SetActive(pUVar5,CMPKOOEKFKF,(MethodInfo *)0x0);
  }
  if (CMPKOOEKFKF) {
    pUVar6 = (__this->fields).background;
    if (CCOCAIEPCOJ) {
      pUVar7 = &(__this->fields).visibleColor;
      pUVar1 = &(__this->fields).visibleColor;
      pUVar2 = &(__this->fields).visibleColor;
      pUVar3 = &(__this->fields).visibleColor;
    }
    else {
      pUVar7 = &(__this->fields).invisibleColor;
      pUVar1 = &(__this->fields).invisibleColor;
      pUVar2 = &(__this->fields).invisibleColor;
      pUVar3 = &(__this->fields).invisibleColor;
    }
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03639d64;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
              ((pUVar7->fields).r,(pUVar1->fields).g,(pUVar2->fields).b,(pUVar3->fields).a,pUVar6,
               (pUVar6->klass->vtable)._23_set_color.method);
  }
  pNVar8 = (__this->fields).rotateImg;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pNVar8 = (__this->fields).rotateImg;
  if ((pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar5,CMPKOOEKFKF && CCOCAIEPCOJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_LockScreen__MHENCNPBING(__this,CMPKOOEKFKF && CCOCAIEPCOJ,method_00);
    return;
  }
LAB_03639d64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void FKOAMAIPLOL(LockScreen CJNHFNHJHPE)  [RVA 0x3539EA0]
// Nekki.SF2.GUI.LockScreen$$FKOAMAIPLOL @ RVA 0x3539EA0

void Nekki_SF2_GUI_LockScreen__FKOAMAIPLOL
               (Nekki_SF2_GUI_LockScreen_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568aba & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568aba = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== private void HHGJCPADNOJ()  [RVA 0x3539F08]
// Nekki.SF2.GUI.LockScreen$$HHGJCPADNOJ @ RVA 0x3539F08

void Nekki_SF2_GUI_LockScreen__HHGJCPADNOJ(Nekki_SF2_GUI_LockScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  __this_00 = (__this->fields).rotateImg;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__Rotate
              (__this_01,(UnityEngine_Vector3_o)(__this->fields).rotationAngle.fields,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x3539F3C]
// Nekki.SF2.GUI.LockScreen$$Init @ RVA 0x3539F3C

void Nekki_SF2_GUI_LockScreen__Init(Nekki_SF2_GUI_LockScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *target;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  
  if ((DAT_04568abb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568abb = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04568b3e == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568b3e = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_LockScreen__OAHAAAHHMOL(__this,false,false,in_x3);
  target = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  return;
}


// ===== private void MHENCNPBING(bool CMPKOOEKFKF)  [RVA 0x3539D68]
// Nekki.SF2.GUI.LockScreen$$MHENCNPBING @ RVA 0x3539D68

void Nekki_SF2_GUI_LockScreen__MHENCNPBING
               (Nekki_SF2_GUI_LockScreen_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_TweenCallback_o *callback;
  DG_Tweening_Tween_o *pDVar2;
  DG_Tweening_Tween_o **ppDVar3;
  
  if ((DAT_04568abc & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_LockScreen_HHGJCPADNOJ__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04568abc = 1;
  }
  ppDVar3 = &(__this->fields).OCBEBGEKOIA;
  if (*ppDVar3 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar3,false,(MethodInfo *)0x0);
    *ppDVar3 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar3,0);
  }
  if (CMPKOOEKFKF) {
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                       (pDVar1,(__this->fields).rotationInterval,(MethodInfo *)0x0);
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar1,callback,(MethodInfo *)0x0);
    pDVar2 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                       ((Il2CppObject *)pDVar1,-1,0,
                        Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    (__this->fields).OCBEBGEKOIA = pDVar2;
    thunk_FUN_01c20e04(ppDVar3,pDVar2);
    return;
  }
  return;
}


// ===== private void Start()  [RVA 0x353A028]
// Nekki.SF2.GUI.LockScreen$$Start @ RVA 0x353A028

void Nekki_SF2_GUI_LockScreen__Start(Nekki_SF2_GUI_LockScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *target;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  
  if ((DAT_04568abb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568abb = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04568b3e == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568b3e = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_LockScreen__OAHAAAHHMOL(__this,false,false,in_x3);
  target = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  return;
}


// ===== public static LockScreen get_Instance()  [RVA 0x353A02C]
// Nekki.SF2.GUI.LockScreen$$get_Instance @ RVA 0x353A02C

Nekki_SF2_GUI_LockScreen_o * Nekki_SF2_GUI_LockScreen__get_Instance(MethodInfo *method)

{
  if ((DAT_04568abd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568abd = 1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
}


// ===== public static bool Lock(bool CMPKOOEKFKF, bool CCOCAIEPCOJ = False)  [RVA 0x353A084]
// Nekki.SF2.GUI.LockScreen$$Lock @ RVA 0x353A084

bool Nekki_SF2_GUI_LockScreen__Lock(bool CMPKOOEKFKF,bool CCOCAIEPCOJ,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_LockScreen_o *pNVar2;
  
  if ((DAT_04568abe & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568abe = 1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566d6a == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04566d6a = '\x01';
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566d6a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
      DAT_04566d6a = '\x01';
    }
    if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_LockScreen_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_LockScreen__OAHAAAHHMOL(pNVar2,CMPKOOEKFKF,CCOCAIEPCOJ,in_x3);
  }
  return bVar1;
}

