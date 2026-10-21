// Nekki.SF2.Core.Quests.QuestsManager$$Destroy @ RVA 0x33060A0

void Nekki_SF2_Core_Quests_QuestsManager__Destroy(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *obj;
  PKHMIGFEJCL_o *__this;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  
  if ((DAT_04567755 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 034060d8 to 035062cf has its CatchHandler @ 034060d8
                       catch() { ... } // from try @ 034060d8 with catch @ 034060d8
                       catch() { ... } // from try @ 03406418 with catch @ 034060d8
                       catch() { ... } // from try @ 034064d4 with catch @ 034060d8
                       catch() { ... } // from try @ 034064dc with catch @ 034060d8
                       catch() { ... } // from try @ 034064e8 with catch @ 034060d8
                       catch() { ... } // from try @ 034065b8 with catch @ 034060d8 */
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_TypeInfo);
    DAT_04567755 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    __this = (pNVar2->fields).QuestParameters;
    if (__this != (PKHMIGFEJCL_o *)0x0) {
      PKHMIGFEJCL__Dispose(__this,(MethodInfo *)0x0);
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_034061a4;
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0)
    ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK =
         (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0;
    thunk_FUN_01c20e04(Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields,0);
    return;
  }
LAB_034061a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

