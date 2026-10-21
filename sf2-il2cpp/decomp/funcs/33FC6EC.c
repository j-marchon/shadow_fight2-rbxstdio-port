// MGNPHCAAEIO$$MGLPJIGMCHH @ RVA 0x33FC6EC

PJKHAJKEHEL_o * MGNPHCAAEIO__MGLPJIGMCHH(MethodInfo *method)

{
  int iVar1;
  PJKHAJKEHEL_o *__this;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  Il2CppObject *pIVar2;
  IGFGDDANEPE_o *__this_01;
  HOOAAGABMBL_o *pHVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_05;
  GGHCLMEFIGO_o *__this_02;
  int index;
  Il2CppClass *pIVar4;
  ACHLOMELAJE_o *pAVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar6;
  
  if ((DAT_04567fc5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567fc5 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE__KEIKDAIFHDE((MethodInfo *)0x0);
  if (__this != (PJKHAJKEHEL_o *)0x0) {
    __this_00 = PJKHAJKEHEL__OIPAIAJGCDA(__this,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method_00 = extraout_x1_00;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_01;
    }
    if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      iVar1 = (__this_00->fields)._size;
      if (0 < iVar1) {
        index = 0;
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        do {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          method_00 = extraout_x1_02;
          if (pIVar2 != (Il2CppObject *)0x0) {
            if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
               (__this_02 = (pAVar5->fields).OIDPLCLELEN, __this_02 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_034fc8c0;
            __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_02,pIVar2[1].monitor,(MethodInfo *)0x0);
            method_00 = extraout_x1_03;
            if ((__this_01 != (IGFGDDANEPE_o *)0x0) && ((__this_01->fields).DKNFBKANNGN != false)) {
              pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,index,
                                  Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_034fc8c0;
              pIVar4 = pIVar2[3].klass;
              pHVar3 = IGFGDDANEPE__JGBDIHJDIHD(__this_01,(MethodInfo *)0x0);
              (*(__this->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                        (__this,pIVar4,pHVar3,(__this->klass->vtable)._9_CGNPHPDFKJG.method);
              method_00 = extraout_x1_04;
            }
          }
          index = index + 1;
        } while (iVar1 != index);
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_05;
      }
      MGNPHCAAEIO__JPFEMNNELIF(__this,method_00);
      CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (__this->fields).DHGNGIKCDON.fields = CVar6;
      (__this->fields).BLJLIBHLGLI = false;
      CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (__this->fields).HJPOJOPKEKI.fields = CVar6;
      return __this;
    }
  }
LAB_034fc8c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

