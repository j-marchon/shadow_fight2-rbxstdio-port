// HEFOANCOHDC$$EMGLGFMDMKD @ RVA 0x341B8E8

System_String_o * HEFOANCOHDC__EMGLGFMDMKD(HEFOANCOHDC_o *__this,MethodInfo *method)

{
  bool bVar1;
  KBCOFHAJOCK_o *__this_00;
  PLCCJCFAFKA_o *pPVar2;
  System_Text_StringBuilder_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  GGHCLMEFIGO_o *__this_03;
  HEFOANCOHDC_o *__this_04;
  MethodInfo *in_x2;
  MethodInfo *in_x4;
  DOPEEDABNEK_o *pDVar3;
  ACHLOMELAJE_o *pAVar4;
  Il2CppObject **ppIVar5;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_HashSet_object__o *local_38;
  
  if ((DAT_045680ce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_10806);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_10811);
    FUN_01bab630(&StringLiteral_3076);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_11021);
    FUN_01bab630(&StringLiteral_7069);
    FUN_01bab630(&StringLiteral_6163);
    FUN_01bab630(&StringLiteral_8786);
    FUN_01bab630(&StringLiteral_7068);
    FUN_01bab630(&StringLiteral_11022);
    FUN_01bab630(&StringLiteral_3078);
    FUN_01bab630(&StringLiteral_15860);
    FUN_01bab630(&StringLiteral_14876);
    FUN_01bab630(&StringLiteral_6164);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_045680ce = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
  if (bVar1) {
LAB_0351bd68:
    pSVar7 = HEFOANCOHDC__FBEOHCOEMKH(__this,(__this->fields).BPCADJLKKGA,in_x2);
    return pSVar7;
  }
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
  pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar3 == (DOPEEDABNEK_o *)0x0) ||
     (__this_00 = (pDVar3->fields)._GMODBKFPHPN_k__BackingField, __this_00 == (KBCOFHAJOCK_o *)0x0))
  goto LAB_0351be48;
  in_x2 = (MethodInfo *)0x0;
  pPVar2 = KBCOFHAJOCK__JHDDCDEENAK(__this_00,(__this->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
  if (pPVar2 == (PLCCJCFAFKA_o *)0x0) goto LAB_0351bd68;
  __this_01 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_01,0x400,(MethodInfo *)0x0);
  if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
LAB_0351be48:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Text_StringBuilder__AppendFormat
            (__this_01,StringLiteral_15860,(Il2CppObject *)(pPVar2->fields).PEKGAFPPFLP,
             (MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_02,Method_System_Collections_Generic_HashSet<string>__ctor__);
  local_38 = __this_02;
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
  if ((((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
       (__this_03 = (pAVar4->fields).OIDPLCLELEN, __this_03 == (GGHCLMEFIGO_o *)0x0)) ||
      (GGHCLMEFIGO__LEGEKLCFCIA
                 (__this_03,__this,(System_Collections_Generic_HashSet_string__o **)&local_38,
                  (MethodInfo *)0x0),
      local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,(Il2CppObject *)StringLiteral_14870,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  pSVar7 = StringLiteral_14876;
  if (!bVar1) {
    pSVar7 = StringLiteral_14870;
  }
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,(Il2CppObject *)StringLiteral_14870,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163;
  }
  HEFOANCOHDC__NJEFAIIJLMA
            ((HEFOANCOHDC_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,92.0,in_x4);
  if ((local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,(Il2CppObject *)StringLiteral_3076,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  pSVar7 = StringLiteral_3078;
  if (!bVar1) {
    pSVar7 = StringLiteral_3076;
  }
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,(Il2CppObject *)StringLiteral_3076,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163;
  }
  HEFOANCOHDC__NJEFAIIJLMA
            ((HEFOANCOHDC_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,46.0,in_x4);
  if ((local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,StringLiteral_7066,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  puVar6 = &StringLiteral_7069;
  if (!bVar1) {
    puVar6 = &StringLiteral_7068;
  }
  pSVar7 = (System_String_o *)*puVar6;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_7066,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163;
  }
  HEFOANCOHDC__NJEFAIIJLMA
            ((HEFOANCOHDC_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,0.0,in_x4);
  if ((local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,StringLiteral_11017,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  puVar6 = &StringLiteral_11022;
  if (!bVar1) {
    puVar6 = &StringLiteral_11021;
  }
  pSVar7 = (System_String_o *)*puVar6;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_11017,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163;
  }
  HEFOANCOHDC__NJEFAIIJLMA
            ((HEFOANCOHDC_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,-46.0,in_x4);
  if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_10806,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  if (bVar1) {
    ppIVar5 = (Il2CppObject **)&StringLiteral_10811;
  }
  else {
    if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (local_38,StringLiteral_8772,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    ppIVar5 = (Il2CppObject **)&StringLiteral_8786;
    if (!bVar1) {
      ppIVar5 = &StringLiteral_8772;
    }
  }
  if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
  pSVar7 = (System_String_o *)*ppIVar5;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_8772,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  __this_04 = (HEFOANCOHDC_o *)(ulong)bVar1;
  if (!bVar1) {
    if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (local_38,StringLiteral_10806,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    __this_04 = (HEFOANCOHDC_o *)(ulong)bVar1;
    if (!bVar1) {
      puVar6 = &StringLiteral_6163;
      goto LAB_0351bdf4;
    }
  }
  puVar6 = &StringLiteral_6164;
LAB_0351bdf4:
  HEFOANCOHDC__NJEFAIIJLMA(__this_04,__this_01,pSVar7,(System_String_o *)*puVar6,-92.0,in_x4);
  System_Text_StringBuilder__Append(__this_01,StringLiteral_47,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)
           (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._3_ToString.method);
  return pSVar7;
}

