// Nekki.SF2.GUI.Dialogs.ExitDialog$$Init @ RVA 0x31103B0

void Nekki_SF2_GUI_Dialogs_ExitDialog__Init
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  ONDBPECEKAJ_c *pOVar2;
  ONDBPECEKAJ_o *pOVar3;
  ONDBPECEKAJ_o **ppOVar4;
  
  if ((DAT_0456657b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo);
    FUN_01bab630(&ONDBPECEKAJ_TypeInfo);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17787);
    DAT_0456657b = 1;
  }
  pOVar2 = ONDBPECEKAJ_TypeInfo;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (ONDBPECEKAJ_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)ONDBPECEKAJ_TypeInfo)) {
      (__this->fields).LHNINNECGJF = (ONDBPECEKAJ_o *)IMMNELPBGIF;
      if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
         ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pOVar2))
      goto LAB_03210474;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  (__this->fields).LHNINNECGJF = (ONDBPECEKAJ_o *)0x0;
LAB_03210474:
  ppOVar4 = &(__this->fields).LHNINNECGJF;
  thunk_FUN_01c20e04(ppOVar4,IMMNELPBGIF);
  pOVar3 = *ppOVar4;
  if (pOVar3 != (ONDBPECEKAJ_o *)0x0) {
    (__this->fields).super.IsPausing = (pOVar3->fields).JODAGCMMKMK;
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pOVar3->fields).IKIINEOIIAK,
               StringLiteral_17787,StringLiteral_3640,3,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo->static_fields->JFAEKJELFFN = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

