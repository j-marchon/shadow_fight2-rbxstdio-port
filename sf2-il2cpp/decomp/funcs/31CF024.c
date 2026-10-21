// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$Show @ RVA 0x31CF024

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Show(bool MDEOLMMEEDM,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this;
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *pNVar2;
  
  if ((DAT_04566c93 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_15567);
    FUN_01bab630(&StringLiteral_10410);
    DAT_04566c93 = 1;
  }
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this == (NDPMLPGANCI_o *)0x0) goto LAB_032cf1c4;
  NDPMLPGANCI__PHFCKPKDMBK(__this,true,true,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10410,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this_00 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_032cf1c4;
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__
                       );
    Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields,
                       pNVar2);
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0) ||
       (__this_01 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Object_o *)0x0)) goto LAB_032cf1c4;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Object__set_name(__this_01,StringLiteral_15567,(MethodInfo *)0x0);
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__LMBDCNPMNEB(pNVar2,MDEOLMMEEDM,method_00);
    return;
  }
LAB_032cf1c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

