// Nekki.SF2.GUI.Map.InfoBattle$$CEOEIJFKMOG @ RVA 0x34193C0

void Nekki_SF2_GUI_Map_InfoBattle__CEOEIJFKMOG
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  AFFHKININGD_o *AGONJKOMAAA;
  System_Action_BKKPAKHJDKB__o *CPECAEHDDDB;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  
  if ((DAT_045680b5 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_OGCPNAAGKAK__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680b5 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar1 = (int *)thunk_FUN_01bda96c();
  if (*piVar1 == 1) {
    DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AGONJKOMAAA = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
    CPECAEHDDDB = (System_Action_BKKPAKHJDKB__o *)
                  thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
    System_Action<object>___ctor();
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LPGPNBGHDBD__CEOEIJFKMOG(AGONJKOMAAA,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
  return;
}

