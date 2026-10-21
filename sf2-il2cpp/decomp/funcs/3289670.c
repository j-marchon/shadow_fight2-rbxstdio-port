// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KAPGCIMJPED @ RVA 0x3289670

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KAPGCIMJPED
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_o *__this_00;
  System_Predicate_DILGLGMKOFG__o **ppSVar5;
  System_Predicate_T__o *pSVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  BECIPDJBAOG_o *pBVar11;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar12;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar13;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar14;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_Fields *pNVar15;
  System_Predicate_DILGLGMKOFG__o *pSVar16;
  
  if ((DAT_045672ed & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1627);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1629);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1631);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1634);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_CONLJALLIMF__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HMHMPPJOPMO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HOPIJLFCJLL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_MLJCPJAFHPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PLCHHHDDJJN__);
    FUN_01bab630(&System_Predicate<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_ALGGCJBHNPD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_HMICFHKOPCH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    DAT_045672ed = 1;
    method = extraout_x1;
  }
  if ((__this->fields).KGJOHFHDLFK != false) {
    __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_TypeInfo,method);
    Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON___ctor(__this_00,(MethodInfo *)0x0);
    pSVar14 = (__this->fields).HPJNLAOAJJE;
    if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar16 = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_5;
    if (pSVar16 == (System_Predicate_DILGLGMKOFG__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar16 = (System_Predicate_DILGLGMKOFG__o *)
                thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar5 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_5;
      *ppSVar5 = pSVar16;
      thunk_FUN_01c20e04(ppSVar5,pSVar16);
    }
    if ((pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) &&
       (pSVar14 = (System_Collections_Generic_List_DILGLGMKOFG__o *)
                  System_Collections_Generic_List<object>__FindAll
                            ((System_Collections_Generic_List_object__o *)pSVar14,
                             (System_Predicate_T__o *)pSVar16,
                             Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__),
       __this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_o *)0x0)) {
      pNVar15 = &__this_00->fields;
      pNVar15->focusItems = pSVar14;
      thunk_FUN_01c20e04(pNVar15,pSVar14);
      if (pNVar15->focusItems != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
        pSVar14 = (__this->fields).HPJNLAOAJJE;
        if ((pNVar15->focusItems->fields)._size == 0) {
          if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar16 = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_6;
          if (pSVar16 == (System_Predicate_DILGLGMKOFG__o *)0x0) {
            if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar16 = (System_Predicate_DILGLGMKOFG__o *)
                      thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
            System_Predicate<object>___ctor();
            ppSVar5 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_6;
            *ppSVar5 = pSVar16;
            thunk_FUN_01c20e04(ppSVar5,pSVar16);
          }
          if (pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
            iVar4 = System_Collections_Generic_List<object>__FindIndex
                              ((System_Collections_Generic_List_object__o *)pSVar14,
                               (System_Predicate_T__o *)pSVar16,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
            (__this->fields).GLGOLGJBCAK = iVar4;
            (__this->fields).BECMMEIMOAL = iVar4;
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1627,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1628,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            goto LAB_03389adc;
          }
        }
        else {
          pSVar6 = (System_Predicate_T__o *)
                   thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
          System_Predicate<object>___ctor();
          if (pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
            iVar4 = System_Collections_Generic_List<object>__FindIndex
                              ((System_Collections_Generic_List_object__o *)pSVar14,pSVar6,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
            (__this->fields).GLGOLGJBCAK = iVar4;
            (__this->fields).BECMMEIMOAL = iVar4;
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1629,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1630,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString((int)__this + 0x1b0,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat(pSVar9,pSVar10,(MethodInfo *)0x0);
LAB_03389adc:
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    goto LAB_03389d68;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__PEKFBGKOIPA(__this,true,in_x2);
  pBVar11 = (__this->fields).FBODAFDBNLH;
  if (((pBVar11 == (BECIPDJBAOG_o *)0x0) ||
      (pGVar12 = (pBVar11->fields).AKFPFIHIHOC,
      pGVar12 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) ||
     (pGVar13 = (pBVar11->fields).LEJBLHJFJHP,
     pGVar13 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) goto LAB_03389d68;
  iVar1 = (pGVar12->fields).count;
  iVar2 = (pGVar13->fields).count;
  if (1 < iVar2 + iVar1) {
    iVar1 = (__this->fields).BECMMEIMOAL;
    method_00 = extraout_x1_00;
    if (iVar1 != -1) {
      (__this->fields).GLGOLGJBCAK = iVar1;
      return;
    }
    goto LAB_03389c58;
  }
  if (iVar1 < 1) {
    if (0 < iVar2) {
      pSVar14 = (__this->fields).HPJNLAOAJJE;
      pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      goto LAB_03389b50;
    }
    bVar3 = BECIPDJBAOG__BODMFFONFKC(pBVar11,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar14 = (__this->fields).HPJNLAOAJJE;
      pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
LAB_03389ccc:
      System_Predicate<object>___ctor();
      if (pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
        iVar4 = System_Collections_Generic_List<object>__FindIndex
                          ((System_Collections_Generic_List_object__o *)pSVar14,pSVar6,
                           Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
        (__this->fields).GLGOLGJBCAK = iVar4;
        return;
      }
      goto LAB_03389d68;
    }
    pBVar11 = (__this->fields).FBODAFDBNLH;
    if (pBVar11 == (BECIPDJBAOG_o *)0x0) goto LAB_03389d68;
    bVar3 = BECIPDJBAOG__HMCAGKEIIGO(pBVar11,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar14 = (__this->fields).HPJNLAOAJJE;
      pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      goto LAB_03389ccc;
    }
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1631,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1632,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
  }
  else {
    pSVar14 = (__this->fields).HPJNLAOAJJE;
    pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
LAB_03389b50:
    System_Predicate<object>___ctor();
    if (pSVar14 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
LAB_03389d68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar4 = System_Collections_Generic_List<object>__FindIndex
                      ((System_Collections_Generic_List_object__o *)pSVar14,pSVar6,
                       Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
    (__this->fields).GLGOLGJBCAK = iVar4;
    if (iVar4 != -1) {
      return;
    }
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1633,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1634,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    pBVar11 = (__this->fields).FBODAFDBNLH;
    if (pBVar11 == (BECIPDJBAOG_o *)0x0) goto LAB_03389d68;
    pSVar10 = (System_String_o *)
              (*(pBVar11->klass->vtable)._3_ToString.methodPtr)
                        (pBVar11,(pBVar11->klass->vtable)._3_ToString.method);
    pSVar9 = System_String__Concat(pSVar9,pSVar10,(MethodInfo *)0x0);
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
  method_00 = extraout_x1_01;
LAB_03389c58:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__CFAECCGMCDA(__this,method_00);
  return;
}

