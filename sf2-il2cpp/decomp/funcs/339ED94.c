// Nekki.SF2.GUI.HintBox$$SetText @ RVA 0x339ED94

void Nekki_SF2_GUI_HintBox__SetText
               (Nekki_SF2_GUI_HintBox_o *__this,System_String_o *HLFKCPFEJND,
               System_String_o *LODPPIMOFPH,int32_t FCIMCPDCPGP,int32_t GHGFENOFEBF,
               int32_t JKBCEOKEEDH,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  undefined2 local_48 [2];
  undefined2 local_44 [2];
  
  if ((DAT_04567c9a & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22453);
    DAT_04567c9a = 1;
  }
  pNVar2 = (__this->fields)._Title;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._Title;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ef38;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,HLFKCPFEJND,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Title;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ef38;
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar2,FCIMCPDCPGP,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._Description;
  bVar1 = PCOEHCPGBBG__CMDDCBNKHEK(LODPPIMOFPH,(MethodInfo *)0x0);
  if (!bVar1) {
    if (LODPPIMOFPH == (System_String_o *)0x0) goto LAB_0349ef38;
    bVar1 = System_String__Contains(LODPPIMOFPH,0x5e,(MethodInfo *)0x0);
    if (!bVar1) {
      local_44[0] = 0x5e;
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(char_TypeInfo,local_44);
      local_48[0] = 0x5e;
      arg2 = (Il2CppObject *)thunk_FUN_01bda448(char_TypeInfo,local_48);
      LODPPIMOFPH = System_String__Format
                              (StringLiteral_22453,arg0,(Il2CppObject *)LODPPIMOFPH,arg2,
                               (MethodInfo *)0x0);
    }
  }
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,LODPPIMOFPH,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Description;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar2,GHGFENOFEBF,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Description;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        UnityEngine_UI_Text__set_alignment
                  ((UnityEngine_UI_Text_o *)pNVar2,JKBCEOKEEDH,(MethodInfo *)0x0);
        Nekki_SF2_GUI_HintBox__UpdateLineSpacing(__this,method_00);
        Nekki_SF2_GUI_HintBox__MFAGMLEEDEJ(__this,method_01);
        return;
      }
    }
  }
LAB_0349ef38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

