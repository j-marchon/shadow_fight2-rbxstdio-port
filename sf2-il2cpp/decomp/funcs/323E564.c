// Nekki.SF2.GUI.SFScrollRect$$.ctor @ RVA 0x323E564

void Nekki_SF2_GUI_SFScrollRect___ctor(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_c *pUVar1;
  Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o *__this_00;
  Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o **ppNVar2;
  UnityEngine_Vector3_array *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_Vector2_Fields UVar4;
  
  if ((DAT_04567073 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04567073 = 1;
    method = extraout_x1;
  }
  (__this->fields).m_Horizontal = true;
  (__this->fields).m_Vertical = true;
  (__this->fields).m_MovementType = 1;
  (__this->fields).m_Elasticity = 0.1;
  (__this->fields).m_Inertia = true;
  (__this->fields).m_DecelerationRate = 0.135;
  (__this->fields).m_ScrollSensitivity = 1.0;
  __this_00 = (Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_TypeInfo,method);
  Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).m_OnValueChanged;
  *ppNVar2 = __this_00;
  thunk_FUN_01c20e04(ppNVar2,__this_00);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  pUVar1 = UnityEngine_Vector2_TypeInfo;
  (__this->fields).HCOHGDCJGIM.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).MLDBMFNGFNM.fields = (pUVar1->static_fields->zeroVector).fields;
  UVar4 = (pUVar1->static_fields->zeroVector).fields;
  (__this->fields).field_0x111 = 1;
  (__this->fields).m_ScrollFactor = 1.0;
  (__this->fields).EADEAEOKIOJ.fields = UVar4;
  pUVar3 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  (__this->fields).CBJHKCGHPMI = pUVar3;
  thunk_FUN_01c20e04(&(__this->fields).CBJHKCGHPMI);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._PHKBHFCILKG_k__BackingField = -1.0;
  return;
}

