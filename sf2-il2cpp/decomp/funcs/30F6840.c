// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_Instance @ RVA 0x30F6840

Nekki_SF2_GUI_Dialogs_NotificationsGame_o *
Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar4;
  
  if ((DAT_04566462 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<NotificationsGame>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10402);
    FUN_01bab630(&StringLiteral_15559);
    DAT_04566462 = 1;
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_031f69a0:
    return Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  pUVar2 = UnityEngine_Resources__Load(StringLiteral_10402,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    if (pUVar2->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar2);
    }
    UnityEngine_Object__set_name(pUVar2,StringLiteral_15559,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar2,
                        Method_UnityEngine_GameObject_GetComponent<NotificationsGame>__);
    ppNVar3 = &Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
    *ppNVar3 = pNVar4;
    thunk_FUN_01c20e04(ppNVar3,pNVar4);
    pNVar4 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
    if (pNVar4 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__GIENGNEGHPJ(pNVar4,method_00);
      UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
      goto LAB_031f69a0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

