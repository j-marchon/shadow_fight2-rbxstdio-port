// TypeDefIndex 3099
// Namespace: Nekki.SF2.GUI
// public class BaseScrollItem : Button, IKIHIGCOLOF
// Fields:
//   private RectTransform _visibilityRoot; // 0x108
//   private string <COIPKAKHDFP>k__BackingField; // 0x110
//   private Button.ButtonClickedEvent <HCMPFAOMMHO>k__BackingField; // 0x118
//   protected float PEFNNFJCCNG; // 0x120
//   protected float AEIJHOCAICH; // 0x124
//   protected float FHIIIPEBDLE; // 0x128

// ===== public string get_Name()  [RVA 0x34CAE20]
// Nekki.SF2.GUI.BaseScrollItem$$get_Name @ RVA 0x34CAE20

System_String_o *
Nekki_SF2_GUI_BaseScrollItem__get_Name(Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public override void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x34CAE28]
// Nekki.SF2.GUI.BaseScrollItem$$OnPointerClick @ RVA 0x34CAE28

void Nekki_SF2_GUI_BaseScrollItem__OnPointerClick
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  UnityEngine_UI_Button__OnPointerClick
            ((UnityEngine_UI_Button_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._clickCount_k__BackingField < 2) {
      return;
    }
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields)._HCMPFAOMMHO_k__BackingField;
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34CAE78]
// Nekki.SF2.GUI.BaseScrollItem$$.ctor @ RVA 0x34CAE78

void Nekki_SF2_GUI_BaseScrollItem___ctor(Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  if ((DAT_04568667 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568667 = 1;
  }
  (__this->fields)._COIPKAKHDFP_k__BackingField = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(&(__this->fields)._COIPKAKHDFP_k__BackingField);
  __this_00 = (UnityEngine_UI_Button_ButtonClickedEvent_o *)
              thunk_FUN_01bda818(UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo);
  UnityEngine_UI_Button_ButtonClickedEvent___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._HCMPFAOMMHO_k__BackingField = __this_00;
  thunk_FUN_01c20e04(&(__this->fields)._HCMPFAOMMHO_k__BackingField,__this_00);
  (__this->fields).PEFNNFJCCNG = 1.0;
  (__this->fields).FHIIIPEBDLE = 1.0;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public RectTransform get_VisibilityRoot()  [RVA 0x34CAF24]
// Nekki.SF2.GUI.BaseScrollItem$$get_VisibilityRoot @ RVA 0x34CAF24

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_BaseScrollItem__get_VisibilityRoot
          (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._visibilityRoot;
}


// ===== public float get_MinOpacity()  [RVA 0x34CAF2C]
// Nekki.SF2.GUI.BaseScrollItem$$get_MinOpacity @ RVA 0x34CAF2C

float Nekki_SF2_GUI_BaseScrollItem__get_MinOpacity
                (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).AEIJHOCAICH;
}


// ===== public void set_onDoubleClick(Button.ButtonClickedEvent CJNHFNHJHPE)  [RVA 0x34CAF34]
// Nekki.SF2.GUI.BaseScrollItem$$set_onDoubleClick @ RVA 0x34CAF34

void Nekki_SF2_GUI_BaseScrollItem__set_onDoubleClick
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,
               UnityEngine_UI_Button_ButtonClickedEvent_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HCMPFAOMMHO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._HCMPFAOMMHO_k__BackingField);
  return;
}


// ===== public void set_Name(string CJNHFNHJHPE)  [RVA 0x34CAF44]
// Nekki.SF2.GUI.BaseScrollItem$$set_Name @ RVA 0x34CAF44

void Nekki_SF2_GUI_BaseScrollItem__set_Name
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._COIPKAKHDFP_k__BackingField);
  return;
}


// ===== public virtual Vector3 get_CenterPosition()  [RVA 0x34CAF54]
// Nekki.SF2.GUI.BaseScrollItem$$get_CenterPosition @ RVA 0x34CAF54

UnityEngine_Vector3_o
Nekki_SF2_GUI_BaseScrollItem__get_CenterPosition
          (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void set_Size(Vector2 CJNHFNHJHPE)  [RVA 0x34CAF74]
// Nekki.SF2.GUI.BaseScrollItem$$set_Size @ RVA 0x34CAF74

void Nekki_SF2_GUI_BaseScrollItem__set_Size
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    value.fields.x = CJNHFNHJHPE.fields.x;
    value.fields.y = (float)((ulong)CJNHFNHJHPE.fields >> 0x20);
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void EnableVisibility(bool CJNHFNHJHPE)  [RVA 0x34CB00C]
// Nekki.SF2.GUI.BaseScrollItem$$EnableVisibility @ RVA 0x34CB00C

void Nekki_SF2_GUI_BaseScrollItem__EnableVisibility
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  UnityEngine_RectTransform_o *pUVar2;
  
  if ((DAT_04568668 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568668 = 1;
  }
  pUVar2 = (__this->fields)._visibilityRoot;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._visibilityRoot;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public virtual float get_Opacity()  [RVA 0x34CB0A8]
// Nekki.SF2.GUI.BaseScrollItem$$get_Opacity @ RVA 0x34CB0A8

float Nekki_SF2_GUI_BaseScrollItem__get_Opacity
                (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).FHIIIPEBDLE;
}


// ===== private GameObject FHAMIBNCNHI()  [RVA 0x34CB0B0]
// Nekki.SF2.GUI.BaseScrollItem$$FHAMIBNCNHI @ RVA 0x34CB0B0

UnityEngine_GameObject_o *
Nekki_SF2_GUI_BaseScrollItem__FHAMIBNCNHI(Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  return pUVar1;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x34CAFA8]
// Nekki.SF2.GUI.BaseScrollItem$$get_RectTransform @ RVA 0x34CAFA8

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
          (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04568669 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568669 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
  return pUVar1;
}


// ===== public void set_MaxOpacity(float CJNHFNHJHPE)  [RVA 0x34CB0B8]
// Nekki.SF2.GUI.BaseScrollItem$$set_MaxOpacity @ RVA 0x34CB0B8

void Nekki_SF2_GUI_BaseScrollItem__set_MaxOpacity
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PEFNNFJCCNG = CJNHFNHJHPE;
  return;
}


// ===== public virtual void OnReturnToPool()  [RVA 0x34CB0C0]
// Nekki.SF2.GUI.BaseScrollItem$$OnReturnToPool @ RVA 0x34CB0C0

void Nekki_SF2_GUI_BaseScrollItem__OnReturnToPool
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  __this_00 = (__this->fields)._HCMPFAOMMHO_k__BackingField;
  if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_MaxOpacity()  [RVA 0x34CB0DC]
// Nekki.SF2.GUI.BaseScrollItem$$get_MaxOpacity @ RVA 0x34CB0DC

float Nekki_SF2_GUI_BaseScrollItem__get_MaxOpacity
                (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).PEFNNFJCCNG;
}


// ===== public Button.ButtonClickedEvent get_onDoubleClick()  [RVA 0x34CB0E4]
// Nekki.SF2.GUI.BaseScrollItem$$get_onDoubleClick @ RVA 0x34CB0E4

UnityEngine_UI_Button_ButtonClickedEvent_o *
Nekki_SF2_GUI_BaseScrollItem__get_onDoubleClick
          (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._HCMPFAOMMHO_k__BackingField;
}


// ===== public virtual void set_Opacity(float CJNHFNHJHPE)  [RVA 0x34CB0EC]
// Nekki.SF2.GUI.BaseScrollItem$$set_Opacity @ RVA 0x34CB0EC

void Nekki_SF2_GUI_BaseScrollItem__set_Opacity
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FHIIIPEBDLE = CJNHFNHJHPE;
  return;
}


// ===== public virtual Vector2 get_Size()  [RVA 0x34CB0F4]
// Nekki.SF2.GUI.BaseScrollItem$$get_Size @ RVA 0x34CB0F4

UnityEngine_Vector2_o
Nekki_SF2_GUI_BaseScrollItem__get_Size(Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_MinOpacity(float CJNHFNHJHPE)  [RVA 0x34CB110]
// Nekki.SF2.GUI.BaseScrollItem$$set_MinOpacity @ RVA 0x34CB110

void Nekki_SF2_GUI_BaseScrollItem__set_MinOpacity
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).AEIJHOCAICH = CJNHFNHJHPE;
  return;
}

