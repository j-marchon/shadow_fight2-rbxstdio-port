// EGMONPGHHDP$$OEGMLDDKCLA @ RVA 0x304AAB4

bool EGMONPGHHDP__OEGMLDDKCLA
               (EGMONPGHHDP_o *__this,JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  Il2CppObject *pIVar2;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  ACHLOMELAJE_o *pAVar3;
  GGHCLMEFIGO_o *__this_02;
  IGFGDDANEPE_o *pIVar4;
  Il2CppClass *KGLJICLJHEL;
  
  if ((DAT_04565dff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565dff = 1;
  }
  if (GDGBNEPJEOO != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
    __this_00 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
    if (__this_00 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
LAB_0314acc8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (__this_00->fields)._size) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0314acc8;
      KGLJICLJHEL = pIVar2[1].klass;
      if (KGLJICLJHEL != (Il2CppClass *)0x0) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_01 == (DOPEEDABNEK_o *)0x0) goto LAB_0314acc8;
        IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN
                                (__this_01,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
        if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
          if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
              (ACHLOMELAJE_o *)0x0) {
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
            pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar3 == (ACHLOMELAJE_o *)0x0) goto LAB_0314acc8;
            bVar1 = ACHLOMELAJE__BDAMDFLLEAM
                              (pAVar3,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
            if (!bVar1) {
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
              pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
                 (__this_02 = (pAVar3->fields).OIDPLCLELEN, __this_02 == (GGHCLMEFIGO_o *)0x0))
              goto LAB_0314acc8;
              pIVar4 = GGHCLMEFIGO__JNFIBDBHNOA(__this_02,IKKAMAMLIKA,(MethodInfo *)0x0);
              if (pIVar4 != (IGFGDDANEPE_o *)0x0) {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

