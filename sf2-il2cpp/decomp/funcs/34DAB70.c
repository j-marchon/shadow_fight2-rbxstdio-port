// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$get_Instance @ RVA 0x34DAB70

Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *
Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar2;
  
  if ((DAT_04568708 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DialogCanvasController>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035dabc8 to 036dac97 has its CatchHandler @ 035dabc8
                       catch() { ... } // from try @ 035dabc8 with catch @ 035dabc8
                       catch() { ... } // from try @ 035dacf4 with catch @ 035dabc8
                       catch() { ... } // from try @ 035dad18 with catch @ 035dabc8
                       catch() { ... } // from try @ 035dad3c with catch @ 035dabc8
                       catch() { ... } // from try @ 035dad70 with catch @ 035dabc8 */
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_15458);
    FUN_01bab630(&StringLiteral_10400);
    DAT_04568708 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10400,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this != (UnityEngine_Object_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Object__set_name(__this,StringLiteral_15458,(MethodInfo *)0x0);
                    /* try { // try from 035dac98 to 036dac9f has its CatchHandler @ 035dad20 */
      pNVar2 = (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)__this,
                          Method_UnityEngine_GameObject_GetComponent<DialogCanvasController>__);
      Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields,pNVar2
                        );
      pNVar2 = Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_DialogCanvasController__EnableBackground(pNVar2,false,method_00);
        Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches(pNVar2,false,method_00);
        UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
        goto LAB_035dacec;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035dacec:
                    /* try { // try from 035dacec to 036dacf3 has its CatchHandler @ 035dad1c */
                    /* try { // try from 035dacf4 to 036dad13 has its CatchHandler @ 035dabc8 */
  return Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK;
}

