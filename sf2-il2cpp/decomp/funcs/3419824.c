// Nekki.SF2.GUI.Map.InfoBattle$$IINGJLINGAJ @ RVA 0x3419824

void Nekki_SF2_GUI_Map_InfoBattle__IINGJLINGAJ
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  ACHLOMELAJE_o *__this_00;
  AFFHKININGD_o *pAVar2;
  OHDDKGHEEPA_o *AOMBONOOJFP;
  Il2CppClass *pIVar3;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  undefined1 auStack_40 [4];
  int local_3c;
  
  if ((DAT_045680b7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&System_Nullable<int>_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_045680b7 = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
     (pIVar3 = (System_Nullable<int>_TypeInfo->_1).element_class, IMMNELPBGIF->klass != pIVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF,pIVar3);
  }
  thunk_FUN_01bda974(IMMNELPBGIF,System_Nullable<int>_TypeInfo,auStack_40);
  if (local_3c - 3U < 2) {
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ACHLOMELAJE__MPBJMDHDECF(__this_00,local_3c != 3,(MethodInfo *)0x0);
  }
  else if (local_3c == 1) {
    DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
    if ((pAVar2 != (AFFHKININGD_o *)0x0) &&
       (AOMBONOOJFP = (OHDDKGHEEPA_o *)(pAVar2->fields).IFJLLGPGMHM,
       AOMBONOOJFP != (OHDDKGHEEPA_o *)0x0)) {
      bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (AOMBONOOJFP->klass->_2).naturalAligment) &&
         ((AOMBONOOJFP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
        JJPNLEPEAFM__NFKLNBFKKLF(AOMBONOOJFP,(MethodInfo *)0x0);
      }
    }
  }
  return;
}

