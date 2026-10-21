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

