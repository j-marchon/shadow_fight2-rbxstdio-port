// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LoadSection @ RVA 0x324E7E0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,System_String_o *ENECIBGGHJI,
               MethodInfo *method)

{
  int32_t BACJDPMBFFE;
  System_String_o *message;
  MethodInfo *method_00;
  
  if ((DAT_04567110 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<JIAOLFMAECH>__);
    FUN_01bab630(&StringLiteral_4175);
    DAT_04567110 = 1;
  }
  method_00 = Method_PCOEHCPGBBG_AICKIDLLIBK<JIAOLFMAECH>__;
  BACJDPMBFFE = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                          (ENECIBGGHJI,5,
                           (MethodInfo_1F413A8 *)Method_PCOEHCPGBBG_AICKIDLLIBK<JIAOLFMAECH>__);
  if (BACJDPMBFFE == 5) {
    message = System_String__Concat(StringLiteral_4175,ENECIBGGHJI,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection(__this,BACJDPMBFFE,method_00);
  return;
}

