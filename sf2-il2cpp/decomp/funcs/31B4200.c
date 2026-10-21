// Nekki.SF2.GUI.Map.RaidKey$$CreateIconAndCountLabel @ RVA 0x31B4200

Nekki_SF2_GUI_Map_RaidKey_o *
Nekki_SF2_GUI_Map_RaidKey__CreateIconAndCountLabel
          (UnityEngine_Transform_o *ODNJEHJPBGA,NPKKNCCEIND_o *BGDNOAFNJGG,MethodInfo *method)

{
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Map_RaidKey_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566b9b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidKey>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10411);
    DAT_04566b9b = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10411,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = Method_UnityEngine_Object_Instantiate<GameObject>__;
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,ODNJEHJPBGA,
                      (MethodInfo_1F1EC6C *)Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (Nekki_SF2_GUI_Map_RaidKey_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this,Method_UnityEngine_GameObject_GetComponent<RaidKey>__),
     __this_00 != (Nekki_SF2_GUI_Map_RaidKey_o *)0x0)) {
    Nekki_SF2_GUI_Map_RaidKey__GIENGNEGHPJ(__this_00,BGDNOAFNJGG,method_00);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

