// Nekki.SF2.GUI.Shop.InfoPanelContent$$ABCDOFCJLOG @ RVA 0x300C6BC

void Nekki_SF2_GUI_Shop_InfoPanelContent__ABCDOFCJLOG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar3;
  ACHLOMELAJE_o *pAVar4;
  
  if ((DAT_04565b77 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_PBPPPILDIBH__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_10823);
    DAT_04565b77 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar2) && (pHVar3 = (__this->fields).KJBDDCNKNNE, pHVar3 != (HOOAAGABMBL_o *)0x0)) {
      bVar1 = System_String__op_Equality
                        ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        pHVar3 = (__this->fields).KJBDDCNKNNE;
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
LAB_0310c890:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = System_String__op_Equality
                          ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = AMIINPEKKFB__CNDGBHMOMJB((__this->fields).KJBDDCNKNNE,(MethodInfo *)0x0);
          method_00 = extraout_x1;
          if (bVar1) {
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
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
               (__this_00 = (pAVar4->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_0310c890;
            GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).KJBDDCNKNNE,true,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
          }
          Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
          return;
        }
      }
      pHVar3 = (__this->fields).KJBDDCNKNNE;
      BLMFLPJJMPF = (System_Action_BKKPAKHJDKB__o *)
                    thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
      System_Action<object>___ctor();
      AMIINPEKKFB__AOBOOIINCOA(pHVar3,BLMFLPJJMPF,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

