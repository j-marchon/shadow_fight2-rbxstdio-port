// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$get_Instance @ RVA 0x3255454

Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar2;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o **ppNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar4;
  UnityEngine_RectTransform_o *parent;
  
  if ((DAT_0456715a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MoveableChatSF>__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10408);
    DAT_0456715a = 1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10408,Method_UnityEngine_Resources_Load<GameObject>__);
    pNVar2 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
      parent = (pNVar2->fields)._chatShownMount;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      __this = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         (original,(UnityEngine_Transform_o *)parent,
                          Method_UnityEngine_Object_Instantiate<GameObject>__);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (__this,Method_UnityEngine_GameObject_GetComponent<MoveableChatSF>__);
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
        }
        ppNVar3 = &Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
        *ppNVar3 = pNVar4;
        thunk_FUN_01c20e04(ppNVar3,pNVar4);
        pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIENGNEGHPJ(pNVar4,method_00);
          goto LAB_033555bc;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033555bc:
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
}

