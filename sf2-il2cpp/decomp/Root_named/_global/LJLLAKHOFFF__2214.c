// TypeDefIndex 2214
// Namespace: 
// [Extension]
// public static class LJLLAKHOFFF
// Fields:

// ===== public static bool HGHDGHHEFEP(Graphic DAHDMONMPFJ)  [RVA 0x32EAB70]
// LJLLAKHOFFF$$HGHDGHHEFEP @ RVA 0x32EAB70

bool LJLLAKHOFFF__HGHDGHHEFEP(UnityEngine_UI_Graphic_o *DAHDMONMPFJ,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_EventSystems_PointerEventData_o *__this;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_List_RaycastResult__o *__this_01;
  UnityEngine_Object_o *y;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_EventSystems_RaycastResult_o local_80;
  
  if ((DAT_04567638 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaycastResult>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaycastResult>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaycastResult>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<RaycastResult>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04567638 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_EventSystems_EventSystem_TypeInfo,method);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  __this = (UnityEngine_EventSystems_PointerEventData_o *)
           thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
  UnityEngine_EventSystems_PointerEventData___ctor(__this,pUVar2,(MethodInfo *)0x0);
  if ((DAHDMONMPFJ != (UnityEngine_UI_Graphic_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)DAHDMONMPFJ,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (__this != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      (__this->fields)._position_k__BackingField.fields.x = UVar3.fields.x;
      (__this->fields)._position_k__BackingField.fields.y = UVar3.fields.y;
      __this_01 = (System_Collections_Generic_List_RaycastResult__o *)
                  thunk_FUN_01bda818(UVar3.fields.x,UVar3.fields.y,UVar3.fields.z,
                                     System_Collections_Generic_List<RaycastResult>_TypeInfo);
      System_Collections_Generic_List<RaycastResult>___ctor
                (__this_01,Method_System_Collections_Generic_List<RaycastResult>__ctor__);
      pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) &&
         (UnityEngine_EventSystems_EventSystem__RaycastAll
                    (pUVar2,__this,__this_01,(MethodInfo *)0x0),
         __this_01 != (System_Collections_Generic_List_RaycastResult__o *)0x0)) {
        if ((__this_01->fields)._size == 0) {
          bVar1 = true;
        }
        else {
          System_Collections_Generic_List<RaycastResult>__get_Item
                    (&local_80,__this_01,0,
                     Method_System_Collections_Generic_List<RaycastResult>_get_Item__);
          y = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)DAHDMONMPFJ,(MethodInfo *)0x0);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)local_80.fields.m_GameObject,y,
                             (MethodInfo *)0x0);
        }
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool JLOAEMBJNKP(Behaviour EMJDLJDNADJ)  [RVA 0x32EAD28]
// LJLLAKHOFFF$$JLOAEMBJNKP @ RVA 0x32EAD28

bool LJLLAKHOFFF__JLOAEMBJNKP(UnityEngine_Behaviour_o *EMJDLJDNADJ,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  return bVar1;
}


// ===== public static void JAEOMHIAHJB(Button LGHOMHOPNEP, PressType CJPDDDECBPD, bool IHKMBHOELIL = True)  [RVA 0x32EAD30]
// LJLLAKHOFFF$$JAEOMHIAHJB @ RVA 0x32EAD30

void LJLLAKHOFFF__JAEOMHIAHJB
               (UnityEngine_UI_Button_o *LGHOMHOPNEP,int32_t CJPDDDECBPD,bool IHKMBHOELIL,
               MethodInfo *method)

{
  bool value;
  
  if (CJPDDDECBPD != 3) {
    if (CJPDDDECBPD == 2) {
      if (LGHOMHOPNEP == (UnityEngine_UI_Button_o *)0x0) goto LAB_033ead88;
      value = false;
    }
    else {
      if (CJPDDDECBPD != 0) {
        return;
      }
      if (LGHOMHOPNEP == (UnityEngine_UI_Button_o *)0x0) goto LAB_033ead88;
      value = true;
    }
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)LGHOMHOPNEP,value,(MethodInfo *)0x0);
    return;
  }
  if (LGHOMHOPNEP != (UnityEngine_UI_Button_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ead68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(LGHOMHOPNEP->klass->vtable)._38_Select.methodPtr)
              (LGHOMHOPNEP,(LGHOMHOPNEP->klass->vtable)._38_Select.method);
    return;
  }
LAB_033ead88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(LGHOMHOPNEP,CJPDDDECBPD,IHKMBHOELIL);
}


// ===== public static void AKKDDJDBIBD(Selectable PFNMDNHEFEC)  [RVA 0x32EAD8C]
// LJLLAKHOFFF$$AKKDDJDBIBD @ RVA 0x32EAD8C

void LJLLAKHOFFF__AKKDDJDBIBD(UnityEngine_UI_Selectable_o *PFNMDNHEFEC,MethodInfo *method)

{
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this;
  UnityEngine_GameObject_o *target;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567639 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04567639 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_EventSystems_EventSystem_TypeInfo,method);
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  __this = (UnityEngine_EventSystems_PointerEventData_o *)
           thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
  UnityEngine_EventSystems_PointerEventData___ctor(__this,eventSystem,(MethodInfo *)0x0);
  if (PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0) {
    target = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    }
    if (DAT_04565b85 == '\0') {
      FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      DAT_04565b85 = '\x01';
    }
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033eae9c to 034eaf23 has its CatchHandler @ 033eae9c
                       catch() { ... } // from try @ 033eae9c with catch @ 033eae9c
                       catch() { ... } // from try @ 033eaf88 with catch @ 033eae9c
                       catch() { ... } // from try @ 033eafc8 with catch @ 033eae9c
                       catch() { ... } // from try @ 033eb028 with catch @ 033eae9c */
    UnityEngine_EventSystems_ExecuteEvents__Execute<object>
              (target,(UnityEngine_EventSystems_BaseEventData_o *)__this,
               (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)
               UnityEngine_EventSystems_ExecuteEvents_TypeInfo->static_fields->s_PointerClickHandler
               ,Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void IFBBIDIEBEL(Graphic DAHDMONMPFJ, float AOGPHAIDFAA)  [RVA 0x32EAEBC]
// LJLLAKHOFFF$$IFBBIDIEBEL @ RVA 0x32EAEBC

void LJLLAKHOFFF__IFBBIDIEBEL
               (UnityEngine_UI_Graphic_o *DAHDMONMPFJ,float AOGPHAIDFAA,MethodInfo *method)

{
  if (DAHDMONMPFJ != (UnityEngine_UI_Graphic_o *)0x0) {
    (*(DAHDMONMPFJ->klass->vtable)._22_get_color.methodPtr)
              (DAHDMONMPFJ,(DAHDMONMPFJ->klass->vtable)._22_get_color.method);
                    /* WARNING: Could not recover jumptable at 0x033eaefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(DAHDMONMPFJ->klass->vtable)._23_set_color.methodPtr)
              (DAHDMONMPFJ,(DAHDMONMPFJ->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float EIJGFNBCPLK(Graphic DAHDMONMPFJ)  [RVA 0x32EAF04]
// LJLLAKHOFFF$$EIJGFNBCPLK @ RVA 0x32EAF04

float LJLLAKHOFFF__EIJGFNBCPLK(UnityEngine_UI_Graphic_o *DAHDMONMPFJ,MethodInfo *method)

{
  float in_s3;
  
  if (DAHDMONMPFJ != (UnityEngine_UI_Graphic_o *)0x0) {
    (*(DAHDMONMPFJ->klass->vtable)._22_get_color.methodPtr)
              (DAHDMONMPFJ,(DAHDMONMPFJ->klass->vtable)._22_get_color.method);
                    /* try { // try from 033eaf24 to 034eaf2f has its CatchHandler @ 033eaf94 */
    return in_s3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static PressType FAGKGMMBPNG(Button LGHOMHOPNEP)  [RVA 0x32EAF2C]
// LJLLAKHOFFF$$FAGKGMMBPNG @ RVA 0x32EAF2C

int32_t LJLLAKHOFFF__FAGKGMMBPNG(UnityEngine_UI_Button_o *LGHOMHOPNEP,MethodInfo *method)

{
  if (LGHOMHOPNEP != (UnityEngine_UI_Button_o *)0x0) {
                    /* try { // try from 033eaf3c to 034eaf87 has its CatchHandler @ 033eaf98 */
    return (uint)((LGHOMHOPNEP->fields).super.m_Interactable == false) << 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void PNJDKJLPKHF(Bounds JDNBFMCGGEG, float OKKPDDLFLJE)  [RVA 0x32EAF50]
// LJLLAKHOFFF$$PNJDKJLPKHF @ RVA 0x32EAF50

void LJLLAKHOFFF__PNJDKJLPKHF
               (UnityEngine_Bounds_o *JDNBFMCGGEG,float OKKPDDLFLJE,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (JDNBFMCGGEG->fields).m_Center.fields.x;
  fVar2 = (JDNBFMCGGEG->fields).m_Center.fields.y;
  fVar5 = (JDNBFMCGGEG->fields).m_Extents.fields.y;
  fVar6 = (JDNBFMCGGEG->fields).m_Extents.fields.z;
  fVar3 = (JDNBFMCGGEG->fields).m_Center.fields.z;
  fVar4 = (JDNBFMCGGEG->fields).m_Extents.fields.x;
  fVar8 = fVar2 - fVar5;
  fVar2 = fVar2 + fVar5;
  if (OKKPDDLFLJE <= fVar8) {
    fVar8 = OKKPDDLFLJE;
  }
  fVar7 = fVar1 - fVar4;
  fVar5 = fVar3 - fVar6;
  if (fVar2 <= OKKPDDLFLJE) {
    fVar2 = OKKPDDLFLJE;
  }
                    /* try { // try from 033eaf88 to 034eafaf has its CatchHandler @ 033eae9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eaf24 with catch @ 033eaf94
                        */
  fVar1 = ((fVar1 + fVar4) - fVar7) * 0.5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eaf3c with catch @ 033eaf98
                        */
  fVar3 = ((fVar3 + fVar6) - fVar5) * 0.5;
  fVar2 = (fVar2 - fVar8) * 0.5;
  (JDNBFMCGGEG->fields).m_Extents.fields.y = fVar2;
  (JDNBFMCGGEG->fields).m_Extents.fields.z = fVar3;
                    /* try { // try from 033eafb0 to 034eafc7 has its CatchHandler @ 033eb020 */
  (JDNBFMCGGEG->fields).m_Center.fields.x = fVar7 + fVar1;
  (JDNBFMCGGEG->fields).m_Center.fields.y = fVar8 + fVar2;
  (JDNBFMCGGEG->fields).m_Center.fields.z = fVar5 + fVar3;
  (JDNBFMCGGEG->fields).m_Extents.fields.x = fVar1;
  return;
}


// ===== public static void GKGMPIGPFPE(Bounds JDNBFMCGGEG, float MLECOAHAPCE)  [RVA 0x32EAFBC]
// LJLLAKHOFFF$$GKGMPIGPFPE @ RVA 0x32EAFBC

void LJLLAKHOFFF__GKGMPIGPFPE
               (UnityEngine_Bounds_o *JDNBFMCGGEG,float MLECOAHAPCE,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  fVar1 = (JDNBFMCGGEG->fields).m_Center.fields.x;
  fVar2 = (JDNBFMCGGEG->fields).m_Extents.fields.x;
  uVar3 = (JDNBFMCGGEG->fields).m_Center.fields.y;
  uVar4 = (JDNBFMCGGEG->fields).m_Center.fields.z;
                    /* try { // try from 033eafc8 to 034eb00f has its CatchHandler @ 033eae9c */
  uVar6 = (JDNBFMCGGEG->fields).m_Extents.fields.y;
  uVar7 = (JDNBFMCGGEG->fields).m_Extents.fields.z;
  fVar8 = fVar1 - fVar2;
  fVar1 = fVar1 + fVar2;
  if (MLECOAHAPCE <= fVar8) {
    fVar8 = MLECOAHAPCE;
  }
  if (fVar1 <= MLECOAHAPCE) {
    fVar1 = MLECOAHAPCE;
  }
  fVar2 = (((float)uVar3 + (float)uVar6) - ((float)uVar3 - (float)uVar6)) * 0.5;
  fVar5 = (((float)uVar4 + (float)uVar7) - ((float)uVar4 - (float)uVar7)) * 0.5;
  fVar1 = (fVar1 - fVar8) * 0.5;
  (JDNBFMCGGEG->fields).m_Extents.fields.x = fVar1;
                    /* try { // try from 033eb010 to 034eb01f has its CatchHandler @ 033eb020 */
  (JDNBFMCGGEG->fields).m_Extents.fields.y = fVar2;
  (JDNBFMCGGEG->fields).m_Extents.fields.z = fVar5;
  (JDNBFMCGGEG->fields).m_Center.fields.x = fVar8 + fVar1;
  (JDNBFMCGGEG->fields).m_Center.fields.y = ((float)uVar3 - (float)uVar6) + fVar2;
  (JDNBFMCGGEG->fields).m_Center.fields.z = ((float)uVar4 - (float)uVar7) + fVar5;
  return;
}


// ===== public static float EIJGFNBCPLK(CanvasGroup HIGOEFFEBLE)  [RVA 0x32EB020]
// LJLLAKHOFFF$$EIJGFNBCPLK @ RVA 0x32EB020

float LJLLAKHOFFF__EIJGFNBCPLK(UnityEngine_CanvasGroup_o *HIGOEFFEBLE,MethodInfo *method)

{
  float fVar1;
  
                    /* catch() { ... } // from try @ 033eafb0 with catch @ 033eb020
                       catch() { ... } // from try @ 033eb010 with catch @ 033eb020 */
  if (HIGOEFFEBLE != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* try { // try from 033eb024 to 034eb027 has its CatchHandler @ 033eb030 */
                    /* try { // try from 033eb028 to 034eb033 has its CatchHandler @ 033eae9c */
    fVar1 = UnityEngine_CanvasGroup__get_alpha(HIGOEFFEBLE,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033eb024 with catch @ 033eb030
                        */
  FUN_01bab8c8();
}


// ===== public static void IFBBIDIEBEL(CanvasGroup HIGOEFFEBLE, float AOGPHAIDFAA)  [RVA 0x32EB034]
// LJLLAKHOFFF$$IFBBIDIEBEL @ RVA 0x32EB034

void LJLLAKHOFFF__IFBBIDIEBEL
               (UnityEngine_CanvasGroup_o *HIGOEFFEBLE,float AOGPHAIDFAA,MethodInfo *method)

{
  if (HIGOEFFEBLE != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(HIGOEFFEBLE,AOGPHAIDFAA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

