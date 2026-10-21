// Nekki.SF2.GUI.Fight.ComboModel$$IPLAGLIIMNC @ RVA 0x332BCBC

Nekki_SF2_GUI_Fight_ComboItem_o *
Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  
  if ((DAT_045678d2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ComboItem>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045678d2 = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._comboItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0;
  if (!bVar1) {
    pUVar2 = (__this->fields)._comboItemPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar2 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_00 = (Nekki_SF2_GUI_Fight_ComboItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar2,Method_UnityEngine_GameObject_GetComponent<ComboItem>__),
       __this_00 == (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_ComboItem__Init
              (__this_00,ACCIHBHMFPN,(__this->fields).NKKPNCHMEHC,(MethodInfo *)0x0);
  }
  return __this_00;
}

