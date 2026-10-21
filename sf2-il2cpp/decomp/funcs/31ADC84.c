// FGOIMLHDMNF$$AJJLBBCJAAL @ RVA 0x31ADC84

/* WARNING: Type propagation algorithm not settling */

System_String_o *
FGOIMLHDMNF__AJJLBBCJAAL(FGOIMLHDMNF_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_RuntimeFieldHandle_Fields *pSVar5;
  System_String_o *pSVar6;
  float local_44;
  System_Nullable_bool__Fields local_38 [2];
  float local_34;
  
  if ((DAT_04566b61 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4576);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4577);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4578);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4579);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4580);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4581);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4582);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4583);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4584);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4585);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566b61 = 1;
  }
  local_34 = 0.0;
  local_38[0].hasValue = false;
  local_38[0].value = false;
  local_44 = 0.0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar4 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  else {
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar6 = OPAEPDIIOEB->m_Items[0];
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4576,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4577,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar6,pSVar4,(MethodInfo *)0x0);
    if (bVar1) {
      if ((int)OPAEPDIIOEB->max_length == 2) {
        pSVar4 = OPAEPDIIOEB->m_Items[1];
        if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar4,&local_34,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4580,
                     (MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4581,
                     (MethodInfo *)0x0);
          pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
          local_44 = Nekki_SF2_Core_Fights_Controls_Stick__SetTouchZoneExtensionFactor
                               (local_34,(MethodInfo *)0x0);
          pSVar6 = System_Single__ToString(local_44,(MethodInfo *)&local_44);
          pSVar4 = System_String__Concat(pSVar4,pSVar6,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
    else {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4578,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4579,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(pSVar6,pSVar4,(MethodInfo *)0x0);
      if ((bVar1) &&
         (local_38[0] = (System_Nullable_bool__Fields)
                        AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,method_00),
         ((ushort)local_38[0] & 0xff) != 0)) {
        bVar1 = System_Nullable<bool>__get_Value
                          ((System_Nullable_bool__o)SUB82(local_38,0),
                           Method_System_Nullable<bool>_get_Value__);
        if (DAT_04565f34 == '\0') {
          FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
          DAT_04565f34 = '\x01';
        }
        Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField =
             bVar1;
        bVar1 = System_Nullable<bool>__get_Value
                          ((System_Nullable_bool__o)SUB82(local_38,0),
                           Method_System_Nullable<bool>_get_Value__);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        if (bVar1) {
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4584,
                     (MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar5 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4585;
        }
        else {
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4582,
                     (MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar5 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4583;
        }
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar5->value,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
    pSVar4 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  return pSVar4;
}

