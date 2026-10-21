// Nekki.SF2.GUI.DebugModules.BuildInfoUI$$GIENGNEGHPJ @ RVA 0x3541480

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_DebugModules_BuildInfoUI__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_BuildInfoUI_o *__this,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  bool bVar3;
  System_String_array *values;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o **ppSVar7;
  System_Enum_o local_68;
  int32_t local_58;
  
  if ((DAT_04568af7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1587);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1588);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1589);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1590);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1591);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1592);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1593);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1594);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1595);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1596);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1597);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1598);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&HMCJKEJGGCB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568af7 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  bVar3 = EOAOCPLIKOI__IHBLLJEMHLM((MethodInfo *)0x0);
  pSVar6 = StringLiteral_1;
  if (bVar3) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1587,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1588,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  if (values == (System_String_array *)0x0) {
LAB_0364192c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = pSVar6;
    thunk_FUN_01c20e04();
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = EOAOCPLIKOI__MJNFJOOPION((MethodInfo *)0x0);
    pSVar6 = StringLiteral_1;
    if (bVar3) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1589,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1590,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    }
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 1);
      local_58 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
      local_68.klass = (System_Enum_c *)HMCJKEJGGCB_TypeInfo;
      local_68.monitor = (void *)0xffffffffffffffff;
      pSVar6 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = pSVar6;
        thunk_FUN_01c20e04(values->m_Items + 2,pSVar6);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1591,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1592,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar6;
          thunk_FUN_01c20e04();
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Debug__get_isDebugBuild((MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar1 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1595;
          if (!bVar3) {
            pSVar1 = (System_RuntimeFieldHandle_Fields *)
                     &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1593;
          }
          pSVar2 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1596;
          if (!bVar3) {
            pSVar2 = (System_RuntimeFieldHandle_Fields *)
                     &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1594;
          }
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar1->value,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar2->value,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = pSVar6;
            thunk_FUN_01c20e04(values->m_Items + 4,pSVar6);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1597,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1598,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar6;
              thunk_FUN_01c20e04();
              pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
              if (__this != (Nekki_SF2_GUI_DebugModules_BuildInfoUI_o *)0x0) {
                ppSVar7 = &(__this->fields).DOPCLAKBBAB;
                *ppSVar7 = pSVar6;
                thunk_FUN_01c20e04(ppSVar7,pSVar6);
                return;
              }
              goto LAB_0364192c;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

