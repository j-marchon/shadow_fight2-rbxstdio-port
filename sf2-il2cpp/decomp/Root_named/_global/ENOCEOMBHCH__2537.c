// TypeDefIndex 2537
// Namespace: 
// [Extension]
// public static class ENOCEOMBHCH
// Fields:
//   private static AnimationCurve JCOOCBNBLGJ; // 0x0
//   private static AnimationCurve HIIGGFIODEH; // 0x8
//   private static Dictionary<DPDCBEAOJMO, AnimationCurve> KCKLKHPMFBE; // 0x10

// ===== private static void .cctor()  [RVA 0x3392BAC]
// ENOCEOMBHCH$$.cctor @ RVA 0x3392BAC

void ENOCEOMBHCH___cctor(MethodInfo *method)

{
  UnityEngine_Keyframe_array *pUVar1;
  UnityEngine_AnimationCurve_o *pUVar2;
  UnityEngine_AnimationCurve_o **ppUVar3;
  System_Collections_Generic_Dictionary_DPDCBEAOJMO__AnimationCurve__o *__this;
  System_Collections_Generic_Dictionary_DPDCBEAOJMO__AnimationCurve__o **ppSVar4;
  UnityEngine_Keyframe_Fields local_160;
  UnityEngine_Keyframe_Fields UStack_140;
  UnityEngine_Keyframe_Fields local_120;
  UnityEngine_Keyframe_Fields local_100;
  UnityEngine_Keyframe_Fields local_e0;
  UnityEngine_Keyframe_Fields UStack_c0;
  UnityEngine_Keyframe_Fields local_a0;
  UnityEngine_Keyframe_Fields local_80;
  UnityEngine_Keyframe_Fields local_60;
  
  if ((DAT_04567c33 & 1) == 0) {
    FUN_01bab630(&UnityEngine_AnimationCurve_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>__ctor__)
    ;
    FUN_01bab630(&System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>_TypeInfo);
    FUN_01bab630(&ENOCEOMBHCH_TypeInfo);
    FUN_01bab630(&UnityEngine_Keyframe___TypeInfo);
    DAT_04567c33 = 1;
  }
  pUVar1 = (UnityEngine_Keyframe_array *)FUN_01bab718(UnityEngine_Keyframe___TypeInfo,2);
  local_60.m_Time = 0.0;
  local_60.m_Value = 0.0;
  local_60.m_InTangent = 0.0;
  local_60.m_OutTangent = 0.0;
  local_60.m_OutWeight = 0.0;
  local_60.m_WeightedMode = 0;
  local_60.m_InWeight = 0.0;
  UnityEngine_Keyframe___ctor((UnityEngine_Keyframe_o *)&local_60,0.0,1.0,0.0,0.0,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Keyframe_array *)0x0) {
    local_80._20_8_ = CONCAT44(local_60.m_OutWeight,local_60.m_InWeight);
    local_80.m_InTangent = local_60.m_InTangent;
    local_80.m_Time = local_60.m_Time;
    local_80.m_Value = local_60.m_Value;
    local_80.m_OutTangent = local_60.m_OutTangent;
    local_80.m_WeightedMode = local_60.m_WeightedMode;
    if ((int)pUVar1->max_length != 0) {
      pUVar1->m_Items[0].fields.m_InWeight = local_60.m_InWeight;
      pUVar1->m_Items[0].fields.m_OutWeight = local_60.m_OutWeight;
      pUVar1->m_Items[0].fields.m_OutTangent = local_60.m_OutTangent;
      pUVar1->m_Items[0].fields.m_WeightedMode = local_60.m_WeightedMode;
      pUVar1->m_Items[0].fields.m_InTangent = local_60.m_InTangent;
      pUVar1->m_Items[0].fields.m_OutTangent = local_60.m_OutTangent;
      pUVar1->m_Items[0].fields.m_Time = local_60.m_Time;
      pUVar1->m_Items[0].fields.m_Value = local_60.m_Value;
      local_a0.m_Time = 0.0;
      local_a0.m_Value = 0.0;
      local_a0.m_InTangent = 0.0;
      local_a0.m_OutTangent = 0.0;
      local_a0.m_OutWeight = 0.0;
      local_a0.m_WeightedMode = 0;
      local_a0.m_InWeight = 0.0;
      UnityEngine_Keyframe___ctor
                ((UnityEngine_Keyframe_o *)&local_a0,1.0,0.2,0.0,0.0,(MethodInfo *)0x0);
      UStack_c0._20_8_ = CONCAT44(local_a0.m_OutWeight,local_a0.m_InWeight);
      UStack_c0.m_WeightedMode = local_a0.m_WeightedMode;
      UStack_c0.m_InTangent = local_a0.m_InTangent;
      UStack_c0.m_OutTangent = local_a0.m_OutTangent;
      UStack_c0.m_Time = local_a0.m_Time;
      UStack_c0.m_Value = local_a0.m_Value;
      if (1 < (uint)pUVar1->max_length) {
        pUVar1->m_Items[1].fields.m_InWeight = local_a0.m_InWeight;
        pUVar1->m_Items[1].fields.m_OutWeight = local_a0.m_OutWeight;
        pUVar1->m_Items[1].fields.m_OutTangent = local_a0.m_OutTangent;
        pUVar1->m_Items[1].fields.m_WeightedMode = local_a0.m_WeightedMode;
        pUVar1->m_Items[1].fields.m_InTangent = local_a0.m_InTangent;
        pUVar1->m_Items[1].fields.m_OutTangent = local_a0.m_OutTangent;
        pUVar1->m_Items[1].fields.m_Time = local_a0.m_Time;
        pUVar1->m_Items[1].fields.m_Value = local_a0.m_Value;
        pUVar2 = (UnityEngine_AnimationCurve_o *)
                 thunk_FUN_01bda818(UnityEngine_AnimationCurve_TypeInfo);
        UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
        ENOCEOMBHCH_TypeInfo->static_fields->JCOOCBNBLGJ = pUVar2;
        thunk_FUN_01c20e04(ENOCEOMBHCH_TypeInfo->static_fields,pUVar2);
        pUVar1 = (UnityEngine_Keyframe_array *)FUN_01bab718(UnityEngine_Keyframe___TypeInfo,3);
        local_e0.m_Time = 0.0;
        local_e0.m_Value = 0.0;
        local_e0.m_InTangent = 0.0;
        local_e0.m_OutTangent = 0.0;
        local_e0.m_OutWeight = 0.0;
        local_e0.m_WeightedMode = 0;
        local_e0.m_InWeight = 0.0;
        UnityEngine_Keyframe___ctor
                  ((UnityEngine_Keyframe_o *)&local_e0,0.0,1.0,0.0,0.0,(MethodInfo *)0x0);
        if (pUVar1 == (UnityEngine_Keyframe_array *)0x0) goto LAB_03492efc;
        local_100._20_8_ = CONCAT44(local_e0.m_OutWeight,local_e0.m_InWeight);
        local_100.m_InTangent = local_e0.m_InTangent;
        local_100.m_Time = local_e0.m_Time;
        local_100.m_Value = local_e0.m_Value;
        local_100.m_OutTangent = local_e0.m_OutTangent;
        local_100.m_WeightedMode = local_e0.m_WeightedMode;
        if ((int)pUVar1->max_length != 0) {
          pUVar1->m_Items[0].fields.m_InWeight = local_e0.m_InWeight;
          pUVar1->m_Items[0].fields.m_OutWeight = local_e0.m_OutWeight;
          pUVar1->m_Items[0].fields.m_OutTangent = local_e0.m_OutTangent;
          pUVar1->m_Items[0].fields.m_WeightedMode = local_e0.m_WeightedMode;
          pUVar1->m_Items[0].fields.m_InTangent = local_e0.m_InTangent;
          pUVar1->m_Items[0].fields.m_OutTangent = local_e0.m_OutTangent;
          pUVar1->m_Items[0].fields.m_Time = local_e0.m_Time;
          pUVar1->m_Items[0].fields.m_Value = local_e0.m_Value;
          local_120.m_Time = 0.0;
          local_120.m_Value = 0.0;
          local_120.m_InTangent = 0.0;
          local_120.m_OutTangent = 0.0;
          local_120.m_OutWeight = 0.0;
          local_120.m_WeightedMode = 0;
          local_120.m_InWeight = 0.0;
          UnityEngine_Keyframe___ctor
                    ((UnityEngine_Keyframe_o *)&local_120,0.35,1.0,0.0,-2.0,(MethodInfo *)0x0);
          UStack_140._20_8_ = CONCAT44(local_120.m_OutWeight,local_120.m_InWeight);
          UStack_140.m_WeightedMode = local_120.m_WeightedMode;
          UStack_140.m_InTangent = local_120.m_InTangent;
          UStack_140.m_OutTangent = local_120.m_OutTangent;
          UStack_140.m_Time = local_120.m_Time;
          UStack_140.m_Value = local_120.m_Value;
          if (1 < (uint)pUVar1->max_length) {
            pUVar1->m_Items[1].fields.m_InWeight = local_120.m_InWeight;
            pUVar1->m_Items[1].fields.m_OutWeight = local_120.m_OutWeight;
            pUVar1->m_Items[1].fields.m_OutTangent = local_120.m_OutTangent;
            pUVar1->m_Items[1].fields.m_WeightedMode = local_120.m_WeightedMode;
            pUVar1->m_Items[1].fields.m_InTangent = local_120.m_InTangent;
            pUVar1->m_Items[1].fields.m_OutTangent = local_120.m_OutTangent;
            pUVar1->m_Items[1].fields.m_Time = local_120.m_Time;
            pUVar1->m_Items[1].fields.m_Value = local_120.m_Value;
            local_160.m_Time = 0.0;
            local_160.m_Value = 0.0;
            local_160.m_InTangent = 0.0;
            local_160.m_OutTangent = 0.0;
            local_160.m_OutWeight = 0.0;
            local_160.m_WeightedMode = 0;
            local_160.m_InWeight = 0.0;
            UnityEngine_Keyframe___ctor
                      ((UnityEngine_Keyframe_o *)&local_160,1.0,0.0,0.0,0.0,(MethodInfo *)0x0);
            if (2 < (uint)pUVar1->max_length) {
              pUVar1->m_Items[2].fields.m_InWeight = local_160.m_InWeight;
              pUVar1->m_Items[2].fields.m_OutWeight = local_160.m_OutWeight;
              pUVar1->m_Items[2].fields.m_OutTangent = local_160.m_OutTangent;
              pUVar1->m_Items[2].fields.m_WeightedMode = local_160.m_WeightedMode;
              pUVar1->m_Items[2].fields.m_InTangent = local_160.m_InTangent;
              pUVar1->m_Items[2].fields.m_OutTangent = local_160.m_OutTangent;
              pUVar1->m_Items[2].fields.m_Time = local_160.m_Time;
              pUVar1->m_Items[2].fields.m_Value = local_160.m_Value;
              pUVar2 = (UnityEngine_AnimationCurve_o *)
                       thunk_FUN_01bda818(UnityEngine_AnimationCurve_TypeInfo);
              UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
              ppUVar3 = &ENOCEOMBHCH_TypeInfo->static_fields->HIIGGFIODEH;
              *ppUVar3 = pUVar2;
              thunk_FUN_01c20e04(ppUVar3,pUVar2);
              __this = (System_Collections_Generic_Dictionary_DPDCBEAOJMO__AnimationCurve__o *)
                       thunk_FUN_01bda818(
                                         System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>_TypeInfo
                                         );
              System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                         Method_System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>__ctor__
                        );
              if (__this != (System_Collections_Generic_Dictionary_DPDCBEAOJMO__AnimationCurve__o *)
                            0x0) {
                System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,0,
                           (Il2CppObject *)ENOCEOMBHCH_TypeInfo->static_fields->JCOOCBNBLGJ,
                           Method_System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>_Add__
                          );
                System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,1,
                           (Il2CppObject *)ENOCEOMBHCH_TypeInfo->static_fields->HIIGGFIODEH,
                           Method_System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>_Add__
                          );
                ppSVar4 = &ENOCEOMBHCH_TypeInfo->static_fields->KCKLKHPMFBE;
                *ppSVar4 = __this;
                thunk_FUN_01c20e04(ppSVar4,__this);
                return;
              }
              goto LAB_03492efc;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03492efc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IEnumerator AINGFINOCLP(InputDevice DMEEIIKHKDH, GCAKLDNBADP OKBIKHHKOEN, AnimationCurve KPDNFDIGEHE)  [RVA 0x3392F00]
// ENOCEOMBHCH$$AINGFINOCLP @ RVA 0x3392F00

System_Collections_IEnumerator_o *
ENOCEOMBHCH__AINGFINOCLP
          (InControl_InputDevice_o *DMEEIIKHKDH,GCAKLDNBADP_o OKBIKHHKOEN,
          UnityEngine_AnimationCurve_o *KPDNFDIGEHE,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567c34 & 1) == 0) {
    FUN_01bab630(&ENOCEOMBHCH_IJNOHKIDLMN_TypeInfo);
    DAT_04567c34 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(ENOCEOMBHCH_IJNOHKIDLMN_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  __this[3].klass = (Il2CppClass *)DMEEIIKHKDH;
  thunk_FUN_01c20e04(__this + 3,DMEEIIKHKDH);
  __this[2].klass = OKBIKHHKOEN.fields._0_8_;
  __this[2].monitor = OKBIKHHKOEN.fields._8_8_;
  __this[3].monitor = KPDNFDIGEHE;
  thunk_FUN_01c20e04(&__this[3].monitor,KPDNFDIGEHE);
  return (System_Collections_IEnumerator_o *)__this;
}


// ===== public static void EEGCCJKIHKM(GamePadController ELHFHAPBFMI, InputDevice DMEEIIKHKDH, GCAKLDNBADP OKBIKHHKOEN)  [RVA 0x3392FC4]
// ENOCEOMBHCH$$EEGCCJKIHKM @ RVA 0x3392FC4

void ENOCEOMBHCH__EEGCCJKIHKM
               (Nekki_SF2_Core_InputControllers_GamePadController_o *ELHFHAPBFMI,
               InControl_InputDevice_o *DMEEIIKHKDH,GCAKLDNBADP_o OKBIKHHKOEN,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *KPDNFDIGEHE;
  bool bVar1;
  System_Collections_Generic_Dictionary_DPDCBEAOJMO__AnimationCurve__o *__this;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_AnimationCurve_o *local_38;
  
  if ((DAT_04567c35 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>_TryGetValue__
                );
    FUN_01bab630(&ENOCEOMBHCH_TypeInfo);
    DAT_04567c35 = 1;
  }
  local_38 = (UnityEngine_AnimationCurve_o *)0x0;
  if ((ENOCEOMBHCH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = ENOCEOMBHCH_TypeInfo->static_fields->KCKLKHPMFBE;
  if (__this != (System_Collections_Generic_Dictionary_DPDCBEAOJMO__AnimationCurve__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       OKBIKHHKOEN.fields.LBKAKBJBNCG,(Il2CppObject **)&local_38,
                       Method_System_Collections_Generic_Dictionary<DPDCBEAOJMO,_AnimationCurve>_TryGetValue__
                      );
    KPDNFDIGEHE = local_38;
    if (bVar1) {
      if ((ENOCEOMBHCH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      routine = ENOCEOMBHCH__AINGFINOCLP(DMEEIIKHKDH,OKBIKHHKOEN,KPDNFDIGEHE,method);
      if (ELHFHAPBFMI == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0)
      goto LAB_034930a8;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)ELHFHAPBFMI,routine,(MethodInfo *)0x0);
    }
    return;
  }
LAB_034930a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

