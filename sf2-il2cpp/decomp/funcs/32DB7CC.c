// EMJIIEMPMFL$$MAHFCKJGBPP @ RVA 0x32DB7CC

/* WARNING: Removing unreachable block (ram,0x033dbb70) */
/* WARNING: Removing unreachable block (ram,0x033dba34) */

void EMJIIEMPMFL__MAHFCKJGBPP(EMJIIEMPMFL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_String_o *ODAMFBHJKIH;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  GGHCLMEFIGO_o *pGVar5;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  float local_a4;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_String_o *local_68;
  
  if ((DAT_045675c1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&StringLiteral_3114);
    DAT_045675c1 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_a4 = 0.0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,method);
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
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    pGVar5 = (pAVar4->fields).OIDPLCLELEN;
    local_68 = (System_String_o *)0x0;
    if ((pGVar5 != (GGHCLMEFIGO_o *)0x0) &&
       (__this_01 = (pGVar5->fields).DPOPJKJLDEE,
       __this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_c0,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      bVar1 = false;
      local_80.fields._index = local_c0.fields._index;
      local_80.fields._version = local_c0.fields._version;
      local_80.fields._list = local_c0.fields._list;
      local_80.fields._current = local_c0.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                               ), __this_00 = local_80.fields._current, bVar2) {
        if ((HEFOANCOHDC_o *)local_80.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = *(System_Collections_Generic_List_object__o **)
                     &(((HEFOANCOHDC_Fields *)((long)local_80.fields._current + 0x10))->EMLGCOFGNKH)
                      .fields.hiddenValue;
        if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_c0,__this_02,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
        local_a0.fields._index = local_c0.fields._index;
        local_a0.fields._version = local_c0.fields._version;
        local_a0.fields._list = local_c0.fields._list;
        local_a0.fields._current = local_c0.fields._current;
        do {
          do {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_a0,
                               Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                              );
            if (!bVar2) goto LAB_033dba14;
            if ((HEFOANCOHDC_o *)local_a0.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = HEFOANCOHDC__ECODHNNKEBC
                              ((HEFOANCOHDC_o *)local_a0.fields._current,StringLiteral_3114,
                               &local_68,(MethodInfo *)0x0);
            ODAMFBHJKIH = local_68;
          } while (!bVar3);
          if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&local_a4,(MethodInfo *)0x0);
        } while (!bVar3 || local_a4 != 0.0);
LAB_033dba14:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
        if (bVar2) {
          bVar1 = true;
          IGFGDDANEPE__PHAGOINEABA((IGFGDDANEPE_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__)
      ;
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
        if (pAVar4 == (ACHLOMELAJE_o *)0x0) goto LAB_033dbb80;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar4,false,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,method_00);
      return;
    }
  }
LAB_033dbb80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

