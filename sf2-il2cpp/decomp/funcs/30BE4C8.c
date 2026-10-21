// DOMFGLFMEMF$$AJJLBBCJAAL @ RVA 0x30BE4C8

System_String_o *
DOMFGLFMEMF__AJJLBBCJAAL(DOMFGLFMEMF_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *PCPECHHMLEC;
  System_String_array *values;
  System_String_o *pSVar9;
  System_Collections_Generic_IReadOnlyList_string__c *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  uint uVar13;
  System_Collections_Generic_IReadOnlyList_string__o *pSVar14;
  
  if ((DAT_04566263 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4946);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4947);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4948);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4949);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4950);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4951);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4952);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4953);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4954);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4955);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4956);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4957);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4958);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4959);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<string>_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566263 = 1;
  }
  pSVar14 = (__this->fields).BIPMCOBADGP;
  iVar1 = (__this->fields).PNHHBCLGFFN + 1;
  (__this->fields).PNHHBCLGFFN = iVar1;
  if (pSVar14 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
    pSVar10 = pSVar14->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
      piVar12 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo) {
          pVVar5 = pSVar10->vtable + *piVar12;
          goto LAB_031be64c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar14,System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo,0)
    ;
LAB_031be64c:
    iVar4 = (*pVVar5->methodPtr)(pSVar14,pVVar5->method);
    if (iVar1 < iVar4) {
      uVar13 = (__this->fields).PNHHBCLGFFN;
    }
    else {
      uVar13 = 0;
      (__this->fields).PNHHBCLGFFN = 0;
    }
    pSVar14 = (__this->fields).BIPMCOBADGP;
    if (pSVar14 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
      pSVar10 = pSVar14->klass;
      uVar3._0_1_ = (pSVar10->_2).rank;
      uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar3;
      if (uVar11 != 0) {
        piVar12 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyList<string>_TypeInfo) {
            pVVar5 = pSVar10->vtable + *piVar12;
            goto LAB_031be6cc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar14,System_Collections_Generic_IReadOnlyList<string>_TypeInfo,0);
LAB_031be6cc:
      pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pSVar14,(ulong)uVar13,pVVar5->method);
      pSVar6 = OFFIONDOEPM__HHJFGJLPHCH(pSVar6,(MethodInfo *)0x0);
      str1 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (str1 == (System_String_o *)0x0) {
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4946,
                   (MethodInfo *)0x0);
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4947,
                   (MethodInfo *)0x0);
        str1 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
      }
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4948,
                 (MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4949,
                 (MethodInfo *)0x0);
      PCPECHHMLEC = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4950,
                 (MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4951,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = pSVar9;
          thunk_FUN_01c20e04(values->m_Items,pSVar9);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar6;
            thunk_FUN_01c20e04(values->m_Items + 1,pSVar6);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4952,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4953,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar6;
              thunk_FUN_01c20e04(values->m_Items + 2,pSVar6);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = str1;
                thunk_FUN_01c20e04(values->m_Items + 3,str1);
                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar7,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4954,
                           (MethodInfo *)0x0);
                pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar8,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4955,
                           (MethodInfo *)0x0);
                pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = pSVar6;
                  thunk_FUN_01c20e04();
                  pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4956,
                             (MethodInfo *)0x0);
                  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar8,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4957,
                             (MethodInfo *)0x0);
                  pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
                  JJPNLEPEAFM__JNDPLPKDPCP
                            (PCPECHHMLEC,pSVar6,pSVar9,StringLiteral_1,
                             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,
                             true,true,true,(MethodInfo *)0x0);
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4958,
                             (MethodInfo *)0x0);
                  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar8,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4959,
                             (MethodInfo *)0x0);
                  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
                  pSVar6 = System_String__Concat(pSVar6,str1,(MethodInfo *)0x0);
                  return pSVar6;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

