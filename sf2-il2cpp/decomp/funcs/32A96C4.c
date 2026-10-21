// Nekki.SF2.GUI.Fight.RaidFinalFightRatingContent$$LGBMPBAIEPA @ RVA 0x32A96C4

void Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent__LGBMPBAIEPA
               (Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  System_String_o *CJNHFNHJHPE_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Fight_RaitingString_o *pNVar2;
  
  if ((DAT_04567423 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<RaitingString>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567423 = 1;
  }
  pNVar2 = (__this->fields)._RaitingStringFinalPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._RaitingStringFinalPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = (Nekki_SF2_GUI_Fight_RaitingString_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pNVar2,
                        Method_UnityEngine_Object_Instantiate<RaitingString>__);
    if (pNVar2 != (Nekki_SF2_GUI_Fight_RaitingString_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)(__this->fields)._Panel,(UnityEngine_Object_o *)0x0
                         ,(MethodInfo *)0x0);
      if (bVar1) {
        parent = (__this->fields)._Panel;
      }
      else {
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      }
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
        if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CJNHFNHJHPE_00 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_RaitingString__set_Value(pNVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

