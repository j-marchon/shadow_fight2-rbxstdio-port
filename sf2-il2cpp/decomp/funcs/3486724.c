// Nekki.SF2.GUI.Map.RaidQuestsButton$$Instantiate @ RVA 0x3486724

Nekki_SF2_GUI_Map_RaidQuestsButton_o *
Nekki_SF2_GUI_Map_RaidQuestsButton__Instantiate
          (UnityEngine_RectTransform_o *ODNJEHJPBGA,MethodInfo *method)

{
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar1;
  
  if ((DAT_045683af & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidQuestsButton>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10414);
    DAT_045683af = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10414,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,(UnityEngine_Transform_o *)ODNJEHJPBGA,
                      Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (pNVar1 = (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this,Method_UnityEngine_GameObject_GetComponent<RaidQuestsButton>__),
     pNVar1 != (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) {
    (*((Il2CppClass *)pNVar1->klass)->vtable[4].methodPtr)
              (pNVar1,((Il2CppClass *)pNVar1->klass)->vtable[4].method);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

