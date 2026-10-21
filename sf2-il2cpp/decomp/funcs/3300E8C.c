// Nekki.SF2.Core.Quests.QuestsManager$$get_Instance @ RVA 0x3300E8C

Nekki_SF2_Core_Quests_QuestsManager_o *
Nekki_SF2_Core_Quests_QuestsManager__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  
  if ((DAT_04567768 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<QuestsManager>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_TypeInfo);
    FUN_01bab630(&StringLiteral_15566);
    DAT_04567768 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15566,(MethodInfo *)0x0);
    if (target == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar2 = (Nekki_SF2_Core_Quests_QuestsManager_o *)
             UnityEngine_GameObject__AddComponent<object>
                       ((UnityEngine_GameObject_o *)target,
                        Method_UnityEngine_GameObject_AddComponent<QuestsManager>__);
    Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
    thunk_FUN_01c20e04(Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields,pNVar2);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  }
  return Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
}

