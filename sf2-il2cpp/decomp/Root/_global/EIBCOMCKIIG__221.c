// TypeDefIndex 221
// Namespace: 
// public class EIBCOMCKIIG : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3123714]
// EIBCOMCKIIG$$DLKKPFHKIPB @ RVA 0x3123714

System_Collections_Generic_IEnumerable_string__o *
EIBCOMCKIIG__DLKKPFHKIPB(EIBCOMCKIIG_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566641 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4626);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4627);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566641 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4626,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4627,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3123884]
// EIBCOMCKIIG$$.ctor @ RVA 0x3123884

void EIBCOMCKIIG___ctor(EIBCOMCKIIG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x312388C]
// EIBCOMCKIIG$$ECKDICODLME @ RVA 0x312388C

bool EIBCOMCKIIG__ECKDICODLME(EIBCOMCKIIG_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x3123894]
// EIBCOMCKIIG$$IGMDDJFPIJL @ RVA 0x3123894

System_String_o * EIBCOMCKIIG__IGMDDJFPIJL(EIBCOMCKIIG_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566642 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_51);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4628);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566642 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4628,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_51,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3123944]
// EIBCOMCKIIG$$AJJLBBCJAAL @ RVA 0x3123944

System_String_o *
EIBCOMCKIIG__AJJLBBCJAAL(EIBCOMCKIIG_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  PDGHODJHCGP_o *__this_00;
  PDGHODJHCGP_HIBNPLAHCBH_o **ppPVar5;
  System_String_o *pSVar6;
  PDGHODJHCGP_HIBNPLAHCBH_o *pPVar7;
  Il2CppObject *pIVar8;
  
  if ((DAT_04566643 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4629);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4631);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4635);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4636);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4637);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4639);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4640);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4641);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4642);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4643);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4644);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4645);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4646);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
    FUN_01bab630(&PDGHODJHCGP_TypeInfo);
    FUN_01bab630(&Method_EIBCOMCKIIG_<>c_CHCAMHMLOIO__);
    FUN_01bab630(&Method_EIBCOMCKIIG_<>c_GFBIJFEFNFF__);
    FUN_01bab630(&Method_EIBCOMCKIIG_<>c_JDEJOKKKACI__);
    FUN_01bab630(&Method_EIBCOMCKIIG_<>c_ODLMLJCPDMH__);
    __this = (EIBCOMCKIIG_o *)FUN_01bab630(&EIBCOMCKIIG_<>c_TypeInfo);
    DAT_04566643 = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length != 0) {
      if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0(__this);
      }
      pSVar6 = OPAEPDIIOEB->m_Items[0];
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4629,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4630,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar6,pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4631,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4632,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4633,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4634,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        __this_00 = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
        PDGHODJHCGP___ctor(__this_00,pSVar4,pSVar6,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4635,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4636,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(EIBCOMCKIIG_<>c_TypeInfo);
        }
        pPVar7 = EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9__4_0;
        if (pPVar7 == (PDGHODJHCGP_HIBNPLAHCBH_o *)0x0) {
          if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(EIBCOMCKIIG_<>c_TypeInfo);
          }
          pIVar8 = (Il2CppObject *)EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9;
          pPVar7 = (PDGHODJHCGP_HIBNPLAHCBH_o *)thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo)
          ;
          PDGHODJHCGP_HIBNPLAHCBH___ctor
                    (pPVar7,pIVar8,Method_EIBCOMCKIIG_<>c_ODLMLJCPDMH__,(MethodInfo *)0x0);
          ppPVar5 = &EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9__4_0;
          *ppPVar5 = pPVar7;
          thunk_FUN_01c20e04(ppPVar5,pPVar7);
        }
        if (__this_00 == (PDGHODJHCGP_o *)0x0) goto LAB_032240d4;
        PDGHODJHCGP__IEFEBMICIHN(__this_00,pSVar4,pPVar7,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4637,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4638,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(EIBCOMCKIIG_<>c_TypeInfo);
        }
        pPVar7 = EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9__4_1;
        if (pPVar7 == (PDGHODJHCGP_HIBNPLAHCBH_o *)0x0) {
          if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(EIBCOMCKIIG_<>c_TypeInfo);
          }
          pIVar8 = (Il2CppObject *)EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9;
          pPVar7 = (PDGHODJHCGP_HIBNPLAHCBH_o *)thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo)
          ;
          PDGHODJHCGP_HIBNPLAHCBH___ctor
                    (pPVar7,pIVar8,Method_EIBCOMCKIIG_<>c_GFBIJFEFNFF__,(MethodInfo *)0x0);
          ppPVar5 = &EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9__4_1;
          *ppPVar5 = pPVar7;
          thunk_FUN_01c20e04(ppPVar5,pPVar7);
        }
        PDGHODJHCGP__IEFEBMICIHN(__this_00,pSVar4,pPVar7,(MethodInfo *)0x0);
        if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pPVar7 = EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9__4_2;
        if (pPVar7 == (PDGHODJHCGP_HIBNPLAHCBH_o *)0x0) {
          if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pIVar8 = (Il2CppObject *)EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9;
          pPVar7 = (PDGHODJHCGP_HIBNPLAHCBH_o *)thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo)
          ;
          PDGHODJHCGP_HIBNPLAHCBH___ctor
                    (pPVar7,pIVar8,Method_EIBCOMCKIIG_<>c_CHCAMHMLOIO__,(MethodInfo *)0x0);
          ppPVar5 = &EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9__4_2;
          *ppPVar5 = pPVar7;
          thunk_FUN_01c20e04(ppPVar5,pPVar7);
        }
        ppPVar5 = &(__this_00->fields).NIMBKJIIDLF;
        *ppPVar5 = pPVar7;
        thunk_FUN_01c20e04(ppPVar5,pPVar7);
        goto LAB_0322405c;
      }
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4639,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4640,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4641,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4642,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    __this_00 = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
    PDGHODJHCGP___ctor(__this_00,pSVar4,pSVar6,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4643,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4644,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EIBCOMCKIIG_<>c_TypeInfo);
    }
    pPVar7 = EIBCOMCKIIG_<>c_TypeInfo->static_fields->__9__4_3;
    if (pPVar7 == (PDGHODJHCGP_HIBNPLAHCBH_o *)0x0) {
      if ((EIBCOMCKIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EIBCOMCKIIG_<>c_TypeInfo);
      }
      pSVar4 = (System_String_o *)FUN_03f939d8(EIBCOMCKIIG_<>c_TypeInfo->static_fields);
      return pSVar4;
    }
    if (__this_00 != (PDGHODJHCGP_o *)0x0) {
      PDGHODJHCGP__IEFEBMICIHN(__this_00,pSVar4,pPVar7,(MethodInfo *)0x0);
LAB_0322405c:
      PDGHODJHCGP__BFCCEGGDJEF(__this_00,(MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4645,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4646,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
LAB_032240d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x31240DC]
// EIBCOMCKIIG$$KCBILPIAPHN @ RVA 0x31240DC

int32_t EIBCOMCKIIG__KCBILPIAPHN(EIBCOMCKIIG_o *__this,MethodInfo *method)

{
  return 1;
}

