// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$Init @ RVA 0x3540138

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  NCJBDBGIPNF_c *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  NCJBDBGIPNF_o *pNVar4;
  NCJBDBGIPNF_o **ppNVar5;
  
  if ((DAT_04568af0 & 1) == 0) {
    FUN_01bab630(&NCJBDBGIPNF_TypeInfo);
    FUN_01bab630(&StringLiteral_20424);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568af0 = 1;
  }
  pNVar2 = NCJBDBGIPNF_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).GIAMLPMHEDN = (NCJBDBGIPNF_o *)0x0;
LAB_036401ec:
    ppNVar5 = &(__this->fields).GIAMLPMHEDN;
    thunk_FUN_01c20e04(ppNVar5,IMMNELPBGIF);
    pNVar3 = (__this->fields)._error;
    (__this->fields).LNIKACBHFOE = 1;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,StringLiteral_20424,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).GIAMLPMHEDN;
      if ((pNVar4 != (NCJBDBGIPNF_o *)0x0) &&
         (pNVar3 = (__this->fields)._message, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,(pNVar4->fields).FDLJAOACNIP,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar4 = *ppNVar5;
        if (pNVar4 != (NCJBDBGIPNF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1,
                     (pNVar4->fields).EEABODJFJMN,(pNVar4->fields).PJKGDJHIDFA,3,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (NCJBDBGIPNF_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)NCJBDBGIPNF_TypeInfo)) {
    (__this->fields).GIAMLPMHEDN = (NCJBDBGIPNF_o *)IMMNELPBGIF;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pNVar2))
    goto LAB_036401ec;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(IMMNELPBGIF);
}

