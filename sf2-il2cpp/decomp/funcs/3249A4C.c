// Nekki.SF2.GUI.Scripts.EditBox$$.ctor @ RVA 0x3249A4C

void Nekki_SF2_GUI_Scripts_EditBox___ctor
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,MethodInfo *method)

{
  System_Action_EditBox__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_EditBox__o *pSVar2;
  
                    /* try { // try from 03349a54 to 03449a5b has its CatchHandler @ 03349a70 */
                    /* try { // try from 03349a5c to 03449a67 has its CatchHandler @ 03349364 */
                    /* try { // try from 03349a68 to 03449a6f has its CatchHandler @ 03349a70 */
  if ((DAT_045670e5 & 1) == 0) {
                    /* catch() { ... } // from try @ 03349978 with catch @ 03349a70
                       catch() { ... } // from try @ 033499ec with catch @ 03349a70
                       catch() { ... } // from try @ 03349a54 with catch @ 03349a70
                       catch() { ... } // from try @ 03349a68 with catch @ 03349a70 */
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_InputField_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_EditBox_<>c_NKMMMIILPAA__);
    FUN_01bab630(&Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo);
    DAT_045670e5 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->static_fields->__9__13_0;
  if (pSVar2 == (System_Action_EditBox__o *)0x0) {
    if ((Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Scripts_EditBox_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    (__this->fields).HHHKCKLPENH = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).HHHKCKLPENH,pSVar2);
    if ((UnityEngine_UI_InputField_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_UI_InputField___ctor((UnityEngine_UI_InputField_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

