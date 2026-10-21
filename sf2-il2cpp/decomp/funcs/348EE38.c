// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.JJFDHHNGKAL$$MLBNMCKCLDH @ RVA 0x348EE38

bool Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__MLBNMCKCLDH
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this,
               DDMHMABAHHD_o *i,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar3;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar4;
  ACHLOMELAJE_o *pAVar5;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_01;
  
  if ((DAT_04568404 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_PMOFDNANHOL__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Find__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
    FUN_01bab630(&StringLiteral_5562);
    DAT_04568404 = 1;
  }
  pIVar2 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)i;
    thunk_FUN_01c20e04(pIVar2 + 1,i);
    pJVar4 = (__this->fields).raidItems;
    if (pJVar4 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
      __this_01 = (pJVar4->fields).GADHINPJDAF;
      match = (System_Predicate_T__o *)
              thunk_FUN_01bda818(System_Predicate<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) {
        pIVar2 = System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_01,match,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Find__);
        bVar1 = false;
        if (pIVar2 != (Il2CppObject *)0x0) {
          bVar1 = System_String__op_Equality(pIVar2[4].monitor,StringLiteral_5562,(MethodInfo *)0x0)
          ;
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
            pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
               (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_0358efdc;
            pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA
                               (__this_00,(System_String_o *)pIVar2[1].klass,(MethodInfo *)0x0);
            bVar1 = pIVar3 == (IGFGDDANEPE_o *)0x0;
          }
          else {
            bVar1 = false;
          }
        }
        return bVar1;
      }
    }
  }
LAB_0358efdc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

