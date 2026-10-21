// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$INNLHPGEEPH @ RVA 0x3574D18

int32_t Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__INNLHPGEEPH
                  (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  EGMONPGHHDP_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  undefined8 local_18;
  
  if ((DAT_04568c7b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&StringLiteral_15931);
    DAT_04568c7b = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_00 == (ACHLOMELAJE_o *)0x0) ||
     (pMVar2 = ACHLOMELAJE__HKIEGNBOFCD(__this_00,StringLiteral_15931,0,(MethodInfo *)0x0),
     pMVar2 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = PCOEHCPGBBG__JBGCINPPLAC((pMVar2->fields).JAICMIMBIOA,0,(MethodInfo *)0x0);
    local_18 = 0;
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_18,iVar1,Method_System_Nullable<int>__ctor__);
    iVar1 = local_18._4_4_;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_01 != (EGMONPGHHDP_o *)0x0) {
    iVar1 = EGMONPGHHDP__AKPDKBCEFAA(__this_01,iVar1,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

