// Nekki.SF2.GUI.Map.InfoBattle$$HFGAKFACONL @ RVA 0x3419178

void Nekki_SF2_GUI_Map_InfoBattle__HFGAKFACONL
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  AFFHKININGD_o *pAVar2;
  DNELIPCHKLK_o *pDVar3;
  System_String_o *a;
  OOMHDDBCBJP_o *pOVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_045680b1 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15248);
    FUN_01bab630(&StringLiteral_15250);
    FUN_01bab630(&StringLiteral_10669);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680b1 = 1;
    method = extraout_x1;
  }
  pAVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(__this,method);
  if (pAVar2 != (AFFHKININGD_o *)0x0) {
    pDVar3 = (pAVar2->fields).KOILJHHCIEE;
    if (pDVar3 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    a = (System_String_o *)
        (*(pDVar3->klass->vtable)._3_ToString.methodPtr)
                  (pDVar3,(pDVar3->klass->vtable)._3_ToString.method);
    bVar1 = System_String__op_Equality(a,StringLiteral_15250,(MethodInfo *)0x0);
    if (bVar1) {
      pDVar3 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
      DNELIPCHKLK___ctor(pDVar3,StringLiteral_15248,StringLiteral_10669,StringLiteral_1,
                         (MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar4 = NLPJLHOEAOE__JIOEHAPGADN(pDVar3,(MethodInfo *)0x0);
      if (pOVar4 != (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03519294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pOVar4->klass->vtable)._14_FAFFJKFGMAL.methodPtr)
                  (pOVar4,(pOVar4->klass->vtable)._14_FAFFJKFGMAL.method);
        return;
      }
    }
  }
  return;
}

