// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FEGLJPNHFJF @ RVA 0x345896C

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FEGLJPNHFJF
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,float KAFHJNFHFHL,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar2;
  DDMHMABAHHD_o *DPILKAHLFOA;
  MethodInfo *in_x3;
  int iVar3;
  ACHLOMELAJE_o *pAVar4;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar5;
  int iVar6;
  System_Collections_Generic_List_DDMHMABAHHD__o *collection;
  
  if ((DAT_045682db & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14844);
    DAT_045682db = 1;
  }
  if (PBDIPLHDHHD != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
    collection = (PBDIPLHDHHD->fields).GFBNJPMOEKD;
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar3 = (__this_00->fields)._size;
      if (0 < iVar3) {
        iVar6 = 0;
        do {
          pIVar1 = System_Collections_Generic_List<object>__get_Item
                             (__this_00,iVar6,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (((pAVar4 == (ACHLOMELAJE_o *)0x0) || (pIVar1 == (Il2CppObject *)0x0)) ||
             (__this_01 = (pAVar4->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
          goto LAB_03558bec;
          pIVar2 = GGHCLMEFIGO__JNFIBDBHNOA
                             (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
          if (pIVar2 == (IGFGDDANEPE_o *)0x0) {
            iVar3 = (__this_00->fields)._size;
            iVar6 = iVar6 + 1;
          }
          else {
            System_Collections_Generic_List<object>__RemoveAt
                      (__this_00,iVar6,
                       Method_System_Collections_Generic_List<DDMHMABAHHD>_RemoveAt__);
            iVar3 = (__this_00->fields)._size;
          }
        } while (iVar6 < iVar3);
      }
      if (0 < iVar3) {
        iVar6 = 0;
        do {
          DPILKAHLFOA = (DDMHMABAHHD_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  (__this_00,iVar6,
                                   Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          if (DPILKAHLFOA == (DDMHMABAHHD_o *)0x0) goto LAB_03558bec;
          Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
                    (__this,DPILKAHLFOA,(DPILKAHLFOA->fields)._COIPKAKHDFP_k__BackingField,
                     (1.0 / (float)iVar3) * KAFHJNFHFHL,in_x3);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (__this_00->fields)._size);
      }
      pSVar5 = (PBDIPLHDHHD->fields).BAPMMGFEIDM;
      if (pSVar5 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0) {
        if ((pSVar5->fields)._size < 1) {
          return;
        }
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_14844,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03558bec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

