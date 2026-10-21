// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$Init @ RVA 0x33B9530

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__Init
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  MPMBFKHOAKB_c *pMVar3;
  int32_t iVar4;
  AFFHKININGD_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  MPMBFKHOAKB_o *pMVar5;
  MPMBFKHOAKB_o **ppMVar6;
  
  if ((DAT_04567d91 & 1) == 0) {
    FUN_01bab630(&MPMBFKHOAKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_3107);
    DAT_04567d91 = 1;
  }
  pMVar3 = MPMBFKHOAKB_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).DKMMBMBMJBO = (MPMBFKHOAKB_o *)0x0;
LAB_034b9600:
    ppMVar6 = &(__this->fields).DKMMBMBMJBO;
    thunk_FUN_01c20e04(ppMVar6,IMMNELPBGIF);
    pMVar5 = *ppMVar6;
    if (pMVar5 != (MPMBFKHOAKB_o *)0x0) {
      bVar2 = (pMVar5->fields).MIMPBIMAAHL;
      (__this->fields).super.IsQuestDialog = true;
      (__this->fields).super.IsIgnoreBack = bVar2;
      Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pMVar5->fields).IKIINEOIIAK,
                 StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
      pMVar5 = (__this->fields).DKMMBMBMJBO;
      if ((pMVar5 != (MPMBFKHOAKB_o *)0x0) &&
         (__this_00 = (pMVar5->fields).FAMILKPGDOC, __this_00 != (AFFHKININGD_o *)0x0)) {
        iVar4 = AFFHKININGD__FCKMLBIPLDK(__this_00,StringLiteral_3107,(MethodInfo *)0x0);
        (__this->fields).NGKGHJDHNCP = iVar4;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_01 != (ACHLOMELAJE_o *)0x0) {
          iVar4 = ACHLOMELAJE__FCPIAEEKGEL(__this_01,StringLiteral_3107,(MethodInfo *)0x0);
          (__this->fields).MDNGKCEFAOI = iVar4;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (MPMBFKHOAKB_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)MPMBFKHOAKB_TypeInfo)) {
    (__this->fields).DKMMBMBMJBO = (MPMBFKHOAKB_o *)IMMNELPBGIF;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pMVar3))
    goto LAB_034b9600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(IMMNELPBGIF);
}

