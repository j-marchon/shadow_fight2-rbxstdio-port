// GGLDGAAPKCF$$ENICPLGGIED @ RVA 0x35D1F34

bool GGLDGAAPKCF__ENICPLGGIED
               (HOOAAGABMBL_o *IHGFKLOLPOK,int32_t IDPMJOKDHNP,System_String_o *NOPKDGGEPPP,
               System_String_o **EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  GGLDGAAPKCF_c *method_00;
  PIADCKMDDAK_o *__this;
  JMDPBFOCHHP_o *pJVar6;
  EEGDOGKBLNG_o *pEVar7;
  System_String_array *values;
  System_String_o *a;
  int32_t local_44;
  
  local_44 = IDPMJOKDHNP;
  if ((DAT_04568ff0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_3);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_801);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_802);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_803);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_804);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_805);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_806);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_807);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_808);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_809);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_810);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_811);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568ff0 = 1;
  }
  *EHNFGMGKCHO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(EHNFGMGKCHO);
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    a = (IHGFKLOLPOK->fields)._GMPAEDFIIHF_k__BackingField;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_801,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_802,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Inequality(a,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
    method_00 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar5 = GGLDGAAPKCF__HJLMMLMBDDC((MethodInfo *)method_00);
    bVar1 = System_String__op_Equality(NOPKDGGEPPP,pSVar5,(MethodInfo *)0x0);
    __this = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
    PIADCKMDDAK___ctor(__this,(MethodInfo *)0x0);
    if (__this != (PIADCKMDDAK_o *)0x0) {
      PIADCKMDDAK__HCOCAAIGNNL
                (__this,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      (__this->fields).GDKPGIBMFPA = IDPMJOKDHNP;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar6 != (JMDPBFOCHHP_o *)0x0) {
        bVar2 = JMDPBFOCHHP__EHALIINDAED(pJVar6,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
        if (bVar2) {
          if (!bVar1) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_036d2588;
            EEGDOGKBLNG__KFDOOFMOAEH(pEVar7,__this,true,(MethodInfo *)0x0);
          }
        }
        else {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (pJVar6 == (JMDPBFOCHHP_o *)0x0) goto LAB_036d2588;
          bVar2 = JMDPBFOCHHP__NNBJOLPDGOM(pJVar6,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
          if (!bVar2) {
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_803,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_3,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            pSVar5 = System_String__Concat(pSVar5,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            return false;
          }
          if (!bVar1) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_036d2588;
            EEGDOGKBLNG__KILLKMHKIMI(pEVar7,__this,true,(MethodInfo *)0x0);
          }
        }
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_804,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_805,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar5;
            thunk_FUN_01c20e04(values->m_Items,pSVar5);
            pSVar5 = OFFIONDOEPM__CNLBHLNMCCI
                               ((IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0
                               );
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = pSVar5;
              thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_806,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_807,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = pSVar5;
                thunk_FUN_01c20e04();
                if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar5 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = pSVar5;
                  thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_808,
                             (MethodInfo *)0x0);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_809,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar5;
                    thunk_FUN_01c20e04(values->m_Items + 4,pSVar5);
                    pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                    if (5 < (uint)values->max_length) {
                      values->m_Items[5] = pSVar5;
                      thunk_FUN_01c20e04(values->m_Items + 5,pSVar5);
                      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar3,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_810,
                                 (MethodInfo *)0x0);
                      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar4,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_811,
                                 (MethodInfo *)0x0);
                      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                      if (6 < (uint)values->max_length) {
                        values->m_Items[6] = pSVar5;
                        thunk_FUN_01c20e04();
                        pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                        *EHNFGMGKCHO = pSVar5;
                        thunk_FUN_01c20e04(EHNFGMGKCHO,pSVar5);
                        return true;
                      }
                    }
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
  }
LAB_036d2588:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

