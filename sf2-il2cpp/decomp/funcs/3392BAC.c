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

