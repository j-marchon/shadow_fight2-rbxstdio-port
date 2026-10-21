// TypeDefIndex 2352
// Namespace: 
// [Serializable]
// private sealed class KHLHAPCOFLB.<>c
// Fields:
//   public static readonly KHLHAPCOFLB.<>c <>9; // 0x0
//   public static Action<Action<bool>> <>9__1_0; // 0x8
//   public static Action<Action<bool>> <>9__1_1; // 0x10
//   public static Action<bool> <>9__1_2; // 0x18

// ===== internal void PEPDMAABEEK(Action<bool> h)  [RVA 0x3324B6C]
// KHLHAPCOFLB.<>c$$PEPDMAABEEK @ RVA 0x3324B6C

void KHLHAPCOFLB_<>c__PEPDMAABEEK
               (KHLHAPCOFLB___c_o *__this,System_Action_bool__o *h,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  System_Delegate_o *pSVar2;
  System_Action_bool__o *pSVar3;
  long lVar4;
  NHJCFGACFDF_StaticFields *pNVar5;
  
  if ((DAT_04567868 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04567868 = 1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Delegate__Combine
                     ((System_Delegate_o *)NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI,
                      (System_Delegate_o *)h,(MethodInfo *)0x0);
  pSVar1 = System_Action<bool>_TypeInfo;
  pSVar3 = (System_Action_bool__o *)0x0;
  if (pSVar2 != (System_Delegate_o *)0x0) {
    pSVar3 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
    if (pSVar3 == (System_Action_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar3;
  pSVar1 = System_Action<bool>_TypeInfo;
  pNVar5 = NHJCFGACFDF_TypeInfo->static_fields;
  if (pSVar2 == (System_Delegate_o *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  thunk_FUN_01c20e04(pNVar5,lVar4);
  return;
}


// ===== private static void .cctor()  [RVA 0x3324C5C]
// KHLHAPCOFLB.<>c$$.cctor @ RVA 0x3324C5C

void KHLHAPCOFLB_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567869 & 1) == 0) {
    FUN_01bab630(&KHLHAPCOFLB_<>c_TypeInfo);
    DAT_04567869 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KHLHAPCOFLB_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KHLHAPCOFLB_<>c_TypeInfo->static_fields->__9 = (KHLHAPCOFLB___c_o *)__this;
  thunk_FUN_01c20e04(KHLHAPCOFLB_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal void FOMMDHKCHHA(bool p_success)  [RVA 0x3324CCC]
// KHLHAPCOFLB.<>c$$FOMMDHKCHHA @ RVA 0x3324CCC

void KHLHAPCOFLB_<>c__FOMMDHKCHHA(KHLHAPCOFLB___c_o *__this,bool p_success,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  int32_t HIHCBMNGGEO;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    HIHCBMNGGEO = 0x46;
    if (!p_success) {
      HIHCBMNGGEO = 0x47;
    }
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
              (__this_00,HIHCBMNGGEO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3324CC4]
// KHLHAPCOFLB.<>c$$.ctor @ RVA 0x3324CC4

void KHLHAPCOFLB_<>c___ctor(KHLHAPCOFLB___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void MNIIGKKHLBF(Action<bool> h)  [RVA 0x3324CFC]
// KHLHAPCOFLB.<>c$$MNIIGKKHLBF @ RVA 0x3324CFC

void KHLHAPCOFLB_<>c__MNIIGKKHLBF
               (KHLHAPCOFLB___c_o *__this,System_Action_bool__o *h,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  System_Delegate_o *pSVar2;
  System_Action_bool__o *pSVar3;
  long lVar4;
  NHJCFGACFDF_StaticFields *pNVar5;
  
  if ((DAT_0456786a & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_0456786a = 1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Delegate__Remove
                     ((System_Delegate_o *)NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI,
                      (System_Delegate_o *)h,(MethodInfo *)0x0);
  pSVar1 = System_Action<bool>_TypeInfo;
  pSVar3 = (System_Action_bool__o *)0x0;
  if (pSVar2 != (System_Delegate_o *)0x0) {
    pSVar3 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
    if (pSVar3 == (System_Action_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar3;
  pSVar1 = System_Action<bool>_TypeInfo;
  pNVar5 = NHJCFGACFDF_TypeInfo->static_fields;
  if (pSVar2 == (System_Delegate_o *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  thunk_FUN_01c20e04(pNVar5,lVar4);
  return;
}

