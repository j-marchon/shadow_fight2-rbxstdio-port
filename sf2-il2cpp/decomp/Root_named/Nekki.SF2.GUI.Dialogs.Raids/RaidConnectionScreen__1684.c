// TypeDefIndex 1684
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidConnectionScreen : MonoBehaviour
// Fields:
//   private static RaidConnectionScreen CBDMFFMCJBK; // 0x0
//   private LabelAlias _label; // 0x20
//   private LabelButton _btnCancel; // 0x28

// ===== private void OnDestroy()  [RVA 0x31CEE04]
// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$OnDestroy @ RVA 0x31CEE04

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *__this,MethodInfo *method)

{
  if ((DAT_04566c91 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo);
    DAT_04566c91 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK =
       (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields,0);
  return;
}


// ===== private void LMBDCNPMNEB(bool MDEOLMMEEDM)  [RVA 0x31CEE58]
// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$LMBDCNPMNEB @ RVA 0x31CEE58

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__LMBDCNPMNEB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *__this,bool MDEOLMMEEDM,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  LabelButton_o *pLVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  BHEDGAKGKPO_StaticFields *pBVar3;
  UnityEngine_Events_UnityEvent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04566c92 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_KFGOAJEAPKE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_3856/*"Cancel"*/);
    FUN_01bab630(&StringLiteral_10957/*"RaidReconnectingKey"*/);
    DAT_04566c92 = 1;
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._label;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                ((pBVar3->LDIIEEOLEMM).fields.r,(pBVar3->LDIIEEOLEMM).fields.g,
                 (pBVar3->LDIIEEOLEMM).fields.b,(pBVar3->LDIIEEOLEMM).fields.a,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
      pNVar4 = (__this->fields)._label;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,StringLiteral_10957/*"RaidReconnectingKey"*/,(MethodInfo *)0x0);
        pLVar1 = (__this->fields)._btnCancel;
        if (pLVar1 != (LabelButton_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0);
          if (MDEOLMMEEDM) {
            Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if (pLVar1 == (LabelButton_o *)0x0) goto LAB_032cf020;
            LabelButton__set_ButtonColor(pLVar1,5,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if (pLVar1 == (LabelButton_o *)0x0) goto LAB_032cf020;
            LabelButton__set_Alias(pLVar1,StringLiteral_3856/*"Cancel"*/,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if ((pLVar1 == (LabelButton_o *)0x0) ||
               (__this_01 = (pLVar1->fields).super.super.super.m_OnClick,
               __this_01 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_032cf020;
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if (pLVar1 == (LabelButton_o *)0x0) goto LAB_032cf020;
            __this_02 = (UnityEngine_Events_UnityEvent_o *)
                        (pLVar1->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_032cf020;
            UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
          }
          else {
            Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
          }
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_032cf020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void Show(bool MDEOLMMEEDM)  [RVA 0x31CF024]
// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$Show @ RVA 0x31CF024

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Show(bool MDEOLMMEEDM,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this;
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *pNVar2;
  
  if ((DAT_04566c93 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_15567/*"[RaidConnectionScreen]"*/);
    FUN_01bab630(&StringLiteral_10410/*"Prefabs/Raids/RaidConnectionScreen"*/);
    DAT_04566c93 = 1;
  }
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this == (NDPMLPGANCI_o *)0x0) goto LAB_032cf1c4;
  NDPMLPGANCI__PHFCKPKDMBK(__this,true,true,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10410/*"Prefabs/Raids/RaidConnectionScreen"*/,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this_00 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_032cf1c4;
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__
                       );
    Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields,
                       pNVar2);
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0) ||
       (__this_01 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Object_o *)0x0)) goto LAB_032cf1c4;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Object__set_name(__this_01,StringLiteral_15567/*"[RaidConnectionScreen]"*/,(MethodInfo *)0x0);
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__LMBDCNPMNEB(pNVar2,MDEOLMMEEDM,method_00);
    return;
  }
LAB_032cf1c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31CF1C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$.ctor @ RVA 0x31CF1C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KFGOAJEAPKE()  [RVA 0x31CF1D0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$KFGOAJEAPKE @ RVA 0x31CF1D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__KFGOAJEAPKE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *__this,MethodInfo *method)

{
  SFRequestSender_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (SFRequestSender_o *)0x0) {
    SFRequestSender__FHIODBIPGBG(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Hide(method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void Hide()  [RVA 0x31CF1F4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$Hide @ RVA 0x31CF1F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Hide(MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *pNVar2;
  
  if ((DAT_04566c94 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo);
    DAT_04566c94 = 1;
  }
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__PHFCKPKDMBK(__this,false,true,(MethodInfo *)0x0);
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

