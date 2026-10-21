// TypeDefIndex 2459
// Namespace: 
// public static class IEHDDOIHPNI
// Fields:
//   private static bool NMFCCFJDDNN; // 0x0
//   private static bool DDLIGIKDNAA; // 0x1
//   private static List<HOOAAGABMBL> DPOPJKJLDEE; // 0x8
//   private static List<string> ICLDBBGODHJ; // 0x10
//   private const int PNBFJLFLNHE = 600;
//   private const string EDCNEIOHPDJ = "EndDiscountManagerTimer";
//   private static HOOAAGABMBL JLLLPGEABHK; // 0x18
//   private static BaseDialog KLAFPJHHOHD; // 0x20

// ===== private static void .cctor()  [RVA 0x336BE0C]
// IEHDDOIHPNI$$.cctor @ RVA 0x336BE0C

void IEHDDOIHPNI___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *__this;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar2;
  HOOAAGABMBL_o **ppHVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar4;
  IEHDDOIHPNI_StaticFields *pIVar5;
  
  if ((DAT_04567af2 & 1) == 0) {
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567af2 = 1;
  }
  pIVar5 = IEHDDOIHPNI_TypeInfo->static_fields;
  pIVar5->NMFCCFJDDNN = false;
  pIVar5->DDLIGIKDNAA = false;
  __this = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar1 = &IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
  *ppSVar2 = __this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  ppHVar3 = &IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  ppNVar4 = &IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
  *ppNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar4,0);
  return;
}


// ===== private static List<HOOAAGABMBL> EIJGGJGKJBF()  [RVA 0x336BF28]
// IEHDDOIHPNI$$EIJGGJGKJBF @ RVA 0x336BF28

System_Collections_Generic_List_HOOAAGABMBL__o * IEHDDOIHPNI__EIJGGJGKJBF(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *item;
  bool bVar2;
  int64_t iVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  long lVar5;
  HOOAAGABMBL_array *pHVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567af3 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567af3 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar7 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  iVar3 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IEHDDOIHPNI_TypeInfo);
  }
  pSVar4 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
  if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  pSVar4 = (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      item = local_70.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        return pSVar4;
      }
      if ((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar5 = (*(((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable)._6_PDECHBMCBDB.
                methodPtr)(local_70.fields._current,0,
                           (((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable).
                           _6_PDECHBMCBDB.method);
    } while ((lVar5 == 0) || (iVar3 + lVar7 < *(long *)(lVar5 + 0x70) + -600));
    if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      pSVar4 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
      if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    lVar5 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
    pHVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pHVar6 == (HOOAAGABMBL_array *)0x0) break;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pHVar6->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
      thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void CFFMMKEJGKP(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x336C25C]
// IEHDDOIHPNI$$CFFMMKEJGKP @ RVA 0x336C25C

void IEHDDOIHPNI__CFFMMKEJGKP(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  uint uVar1;
  IEHDDOIHPNI_StaticFields *pIVar2;
  HOOAAGABMBL_o **ppHVar3;
  long lVar4;
  int64_t iVar5;
  NBLEEDEAPHB_o *__this;
  NBLEEDEAPHB_o *__this_00;
  NBLEEDEAPHB_o *__this_01;
  LBMOOFGGPEB_o *pLVar6;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  System_String_o *NJLKBEHCEKD;
  System_String_o *JEHFOBHMGJM;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *pMVar8;
  int iVar9;
  ACHLOMELAJE_o *pAVar10;
  NBLEEDEAPHB_array *pNVar11;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar12;
  HOOAAGABMBL_o *pHVar13;
  undefined8 uVar14;
  System_String_o **ppSVar15;
  LBMOOFGGPEB_o **ppLVar16;
  LAMJOHEKJNJ_o *__this_02;
  long lVar17;
  
  if ((DAT_04567af4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_IEHDDOIHPNI_GKGOBGPNJMB__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8328/*"LastChance"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17838/*"dlgStoryBtnShowme"*/);
    FUN_01bab630(&StringLiteral_8329/*"LastChance1"*/);
    FUN_01bab630(&StringLiteral_15460/*"[EndDiscountManager] dialog started"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5732/*"EndDiscountManagerTimer"*/);
    DAT_04567af4 = 1;
    method = extraout_x1;
  }
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IEHDDOIHPNI_TypeInfo,method);
  }
  pIVar2 = IEHDDOIHPNI_TypeInfo->static_fields;
  ppHVar3 = &pIVar2->JLLLPGEABHK;
  *ppHVar3 = IKKAMAMLIKA;
  pIVar2->DDLIGIKDNAA = true;
  thunk_FUN_01c20e04(ppHVar3,IKKAMAMLIKA);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar17 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar10 != (ACHLOMELAJE_o *)0x0) && (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
    __this_02 = (pAVar10->fields)._DDGPMHMNKNA_k__BackingField;
    lVar4 = (*(IKKAMAMLIKA->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                      (IKKAMAMLIKA,0,(IKKAMAMLIKA->klass->vtable)._6_PDECHBMCBDB.method);
    if (lVar4 == 0) {
      iVar9 = 600;
    }
    else {
      uVar14 = *(undefined8 *)(lVar4 + 0x70);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      iVar5 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
      iVar9 = ((int)uVar14 - (int)lVar17) - (int)iVar5;
      if (600 < iVar9) {
        iVar9 = 600;
      }
    }
    if (__this_02 != (LAMJOHEKJNJ_o *)0x0) {
      LAMJOHEKJNJ__NCBMPCGHHFK(__this_02,StringLiteral_5732/*"EndDiscountManagerTimer"*/,lVar17 + iVar9,(MethodInfo *)0x0);
      __this = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
      NBLEEDEAPHB___ctor(__this,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1
                         ,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                         (MethodInfo *)0x0);
      if (__this != (NBLEEDEAPHB_o *)0x0) {
        ppSVar15 = &(__this->fields).ABCHAOKFLGL;
        *ppSVar15 = StringLiteral_8328/*"LastChance"*/;
        thunk_FUN_01c20e04(ppSVar15);
        (__this->fields).ILAJANAMHDM = -200;
        (__this->fields).OJDCNGCCOBA = -0x6e;
        __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
        NBLEEDEAPHB___ctor(__this_00,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/
                           ,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                           (MethodInfo *)0x0);
        if (__this_00 != (NBLEEDEAPHB_o *)0x0) {
          ppSVar15 = &(__this_00->fields).ABCHAOKFLGL;
          *ppSVar15 = StringLiteral_8329/*"LastChance1"*/;
          thunk_FUN_01c20e04(ppSVar15);
          (__this_00->fields).ILAJANAMHDM = -200;
          __this_01 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
          NBLEEDEAPHB___ctor(__this_01,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                             StringLiteral_1/*""*/,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                             (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
          if (__this_01 != (NBLEEDEAPHB_o *)0x0) {
            ppSVar15 = &(__this_01->fields).ABCHAOKFLGL;
            *ppSVar15 = StringLiteral_1/*""*/;
            thunk_FUN_01c20e04(ppSVar15);
            (__this_01->fields).KFHPFEKBDFM = 1;
            pMVar8 = extraout_x1_00;
            if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar8 = extraout_x1_01;
            }
            pLVar6 = IEHDDOIHPNI__DMFPHHLKEPI(StringLiteral_5732/*"EndDiscountManagerTimer"*/,pMVar8);
            ppLVar16 = &(__this_01->fields).KOLIPNBCKOB;
            *ppLVar16 = pLVar6;
            thunk_FUN_01c20e04(ppLVar16,pLVar6);
            (__this_01->fields).OJDCNGCCOBA = 0x5a;
            IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                          thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
            lVar17 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
            if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
              pNVar11 = (IJIPABLCAKE->fields)._items;
              (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
              if (pNVar11 != (NBLEEDEAPHB_array *)0x0) {
                uVar1 = (IJIPABLCAKE->fields)._size;
                if (uVar1 < (uint)pNVar11->max_length) {
                  (IJIPABLCAKE->fields)._size = uVar1 + 1;
                  pNVar11->m_Items[(int)uVar1] = __this;
                  thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,__this);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                             (Il2CppObject *)__this,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar17 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
                pNVar11 = (IJIPABLCAKE->fields)._items;
                (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
                if (pNVar11 != (NBLEEDEAPHB_array *)0x0) {
                  uVar1 = (IJIPABLCAKE->fields)._size;
                  if (uVar1 < (uint)pNVar11->max_length) {
                    (IJIPABLCAKE->fields)._size = uVar1 + 1;
                    pNVar11->m_Items[(int)uVar1] = __this_00;
                    thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,__this_00);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                               (Il2CppObject *)__this_00,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar17 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
                  pNVar11 = (IJIPABLCAKE->fields)._items;
                  (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
                  if (pNVar11 != (NBLEEDEAPHB_array *)0x0) {
                    uVar1 = (IJIPABLCAKE->fields)._size;
                    if (uVar1 < (uint)pNVar11->max_length) {
                      (IJIPABLCAKE->fields)._size = uVar1 + 1;
                      pNVar11->m_Items[(int)uVar1] = __this_01;
                      thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,__this_01);
                      pMVar8 = extraout_x1_02;
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                                 (Il2CppObject *)__this_01,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      pMVar8 = extraout_x1_03;
                    }
                    pHVar13 = IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
                    NJLKBEHCEKD = StringLiteral_1/*""*/;
                    if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
                      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(IEHDDOIHPNI_TypeInfo);
                        pHVar13 = IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
                        if (pHVar13 == (HOOAAGABMBL_o *)0x0) goto LAB_0346c8c0;
                      }
                      NJLKBEHCEKD = OFFIONDOEPM__CNLBHLNMCCI
                                              ((pHVar13->fields)._GPEFIOMJHNN_k__BackingField,
                                               (MethodInfo *)0x0);
                      pMVar8 = extraout_x1_04;
                    }
                    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(IEHDDOIHPNI_TypeInfo);
                      pMVar8 = extraout_x1_05;
                    }
                    JEHFOBHMGJM = IEHDDOIHPNI__MJIINBIHIEF
                                            (IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK,pMVar8
                                            );
                    IELDNEAAPBE = (System_Action_object__o *)
                                  thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    System_Action<object>___ctor();
                    pNVar7 = JJPNLEPEAFM__NBABCABBABL
                                       (NJLKBEHCEKD,JEHFOBHMGJM,IJIPABLCAKE,(IGNEHHMICKB_o *)0x0,
                                        IELDNEAAPBE,StringLiteral_3640/*"CANCEL"*/,true,StringLiteral_17838/*"dlgStoryBtnShowme"*/,2,0,
                                        true,true,0.0,(MethodInfo *)0x0);
                    ppNVar12 = &IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
                    *ppNVar12 = pNVar7;
                    thunk_FUN_01c20e04(ppNVar12,pNVar7);
                    pNVar7 = IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
                    if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                      (*(pNVar7->klass->vtable)._16_SetImageScale.methodPtr)
                                (0x3f19999a,pNVar7,(pNVar7->klass->vtable)._16_SetImageScale.method)
                      ;
                      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      UnityEngine_Debug__Log(StringLiteral_15460/*"[EndDiscountManager] dialog started"*/,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0346c8c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void GIENGNEGHPJ()  [RVA 0x336CB94]
// IEHDDOIHPNI$$GIENGNEGHPJ @ RVA 0x336CB94

void IEHDDOIHPNI__GIENGNEGHPJ(MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04567af5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_IEHDDOIHPNI_LPAEJFCBMMF__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    DAT_04567af5 = 1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IEHDDOIHPNI_TypeInfo->static_fields->NMFCCFJDDNN = true;
  return;
}


// ===== private static void GKGOBGPNJMB(object OCMMDIHLKMH)  [RVA 0x336CC6C]
// IEHDDOIHPNI$$GKGOBGPNJMB @ RVA 0x336CC6C

void IEHDDOIHPNI__GKGOBGPNJMB(Il2CppObject *OCMMDIHLKMH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar3;
  HOOAAGABMBL_o **ppHVar4;
  int *piVar5;
  System_String_o *pSVar6;
  long lVar7;
  NDPMLPGANCI_o *__this;
  FFHKCJAOPLI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  int32_t iVar8;
  IEHDDOIHPNI_StaticFields *pIVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  UnityEngine_Object_o *x;
  System_Enum_o local_58;
  int local_48;
  
                    /* try { // try from 0346cc94 to 0356cf27 has its CatchHandler @ 0346cc94
                       catch() { ... } // from try @ 0346cc94 with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d0a4 with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d154 with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d15c with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d228 with catch @ 0346cc94 */
  if ((DAT_04567af6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_15462/*"[EndDiscountManager] recreate item. dialog closed"*/);
    FUN_01bab630(&StringLiteral_15461/*"[EndDiscountManager] press button "*/);
    DAT_04567af6 = 1;
    method = extraout_x1;
  }
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IEHDDOIHPNI_TypeInfo,method);
  }
  ppNVar3 = &IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
  *ppNVar3 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar3,0);
  ppHVar4 = &IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
  IKKAMAMLIKA = *ppHVar4;
  IEHDDOIHPNI_TypeInfo->static_fields->DDLIGIKDNAA = false;
  *ppHVar4 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar4,0);
  if (OCMMDIHLKMH == (Il2CppObject *)0x0) goto LAB_0346cfe8;
  if ((OCMMDIHLKMH->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0346cff0 to 0356cff7 has its CatchHandler @ 0346d174 */
    FUN_01babc64(OCMMDIHLKMH);
  }
  piVar5 = (int *)thunk_FUN_01bda96c(OCMMDIHLKMH);
  local_58.klass = (System_Enum_c *)Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo;
  iVar1 = *piVar5;
  local_58.monitor = (void *)0xffffffffffffffff;
  local_48 = iVar1;
  pSVar6 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat(StringLiteral_15461/*"[EndDiscountManager] press button "*/,pSVar6,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (iVar1 == 1) {
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      bVar2 = System_String__op_Equality
                        ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                         (MethodInfo *)0x0);
      iVar8 = 8;
      if (!bVar2) {
        iVar8 = 6;
      }
      lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar7 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0346cf28 to 0356cf4f has its CatchHandler @ 0346d190 */
      if (bVar2) {
        lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8) ==
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
LAB_0346cfe8:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItem
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8),iVar8,
                   IKKAMAMLIKA,(MethodInfo *)0x0);
      }
      else {
        __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0346cf84 to 0356cfaf has its CatchHandler @ 0346d18c */
        __this_00 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
        FFHKCJAOPLI___ctor(__this_00,iVar8,IKKAMAMLIKA,(System_String_o *)0x0,(System_String_o *)0x0
                           ,(MethodInfo *)0x0);
        if (__this == (NDPMLPGANCI_o *)0x0) goto LAB_0346cfe8;
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this,4,(Il2CppObject *)__this_00,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
      }
    }
  }
  else if (iVar1 == 0) {
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK != (HOOAAGABMBL_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogWarning(StringLiteral_15462/*"[EndDiscountManager] recreate item. dialog closed"*/,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
      pSVar10 = pIVar9->ICLDBBGODHJ;
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0346cfe8;
      iVar8 = (pSVar10->fields)._size;
      (pSVar10->fields)._size = 0;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
      if (0 < iVar8) {
        System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar8,(MethodInfo *)0x0);
        pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
        method_00 = extraout_x1_02;
      }
      IEHDDOIHPNI__EDNBFMMPAHG(pIVar9->JLLLPGEABHK,method_00);
    }
  }
  return;
}


// ===== private static void LPAEJFCBMMF()  [RVA 0x336D300]
// IEHDDOIHPNI$$LPAEJFCBMMF @ RVA 0x336D300

void IEHDDOIHPNI__LPAEJFCBMMF(MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar5;
  HOOAAGABMBL_o **ppHVar6;
  IEHDDOIHPNI_c *method_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar7;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  char cVar8;
  IEHDDOIHPNI_StaticFields *pIVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar11;
  VideoPlayerController_o *pVVar12;
  char cVar13;
  
  if ((DAT_04567af7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15463/*"[EndDiscountManager] recreate item. downloading or paused"*/);
    DAT_04567af7 = 1;
  }
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    iVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_ScheduledQuestsCount(__this,(MethodInfo *)0x0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      iVar4 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
      if (iVar4 - 3U < 3) {
        if (DAT_04566bb5 == '\0') {
          FUN_01bab630(&VideoPlayerController_TypeInfo);
          DAT_04566bb5 = '\x01';
        }
        pVVar12 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pVVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (DAT_04566bb5 == '\0') {
            FUN_01bab630(&VideoPlayerController_TypeInfo);
            DAT_04566bb5 = '\x01';
          }
          pVVar12 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
          if (pVVar12 == (VideoPlayerController_o *)0x0) goto LAB_0346d624;
          cVar13 = (pVVar12->fields)._LFALNJINAPO_k__BackingField;
        }
        else {
          cVar13 = '\0';
        }
        if ((0 < iVar3) ||
           (bVar2 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__Exists((MethodInfo *)0x0), bVar2)) {
          cVar8 = '\x01';
        }
        else {
          if (DAT_04565b83 == '\0') {
            FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
            DAT_04565b83 = '\x01';
          }
          cVar8 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->
                  _NHDGMLJJAOA_k__BackingField;
        }
        if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = IEHDDOIHPNI_TypeInfo->static_fields->DDLIGIKDNAA;
        if (cVar8 == '\0' && cVar13 == '\0') {
          if (bVar1 == false) {
            method_00 = IEHDDOIHPNI_TypeInfo;
            if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
              method_00 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
            }
            IKKAMAMLIKA = IEHDDOIHPNI__OCKKDMEHADL((MethodInfo *)method_00);
            if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
              pMVar7 = extraout_x1_03;
              if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar7 = extraout_x1_04;
              }
              IEHDDOIHPNI__CFFMMKEJGKP(IKKAMAMLIKA,pMVar7);
              return;
            }
          }
        }
        else if (bVar1 != false) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_15463/*"[EndDiscountManager] recreate item. downloading or paused"*/,(MethodInfo *)0x0);
          if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
          pIVar9->DDLIGIKDNAA = false;
          pNVar11 = pIVar9->KLAFPJHHOHD;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          pMVar7 = extraout_x1;
          if (bVar2) {
            if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pNVar11 = IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
            if (pNVar11 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_0346d624;
            (*(pNVar11->klass->vtable)._20_Close.methodPtr)
                      (pNVar11,(pNVar11->klass->vtable)._20_Close.method);
            ppNVar5 = &IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
            *ppNVar5 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
            thunk_FUN_01c20e04(ppNVar5,0);
            pMVar7 = extraout_x1_00;
          }
          if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar7 = extraout_x1_01;
          }
          pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
          pSVar10 = pIVar9->ICLDBBGODHJ;
          if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
            iVar3 = (pSVar10->fields)._size;
            (pSVar10->fields)._size = 0;
            (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
            if (0 < iVar3) {
              System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar3,
                                  (MethodInfo *)0x0);
              pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
              pMVar7 = extraout_x1_02;
            }
            IEHDDOIHPNI__EDNBFMMPAHG(pIVar9->JLLLPGEABHK,pMVar7);
            ppHVar6 = &IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
            *ppHVar6 = (HOOAAGABMBL_o *)0x0;
            thunk_FUN_01c20e04(ppHVar6,0);
            return;
          }
          goto LAB_0346d624;
        }
      }
      return;
    }
  }
LAB_0346d624:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void NDNPGAKJLHM()  [RVA 0x336DBAC]
// IEHDDOIHPNI$$NDNPGAKJLHM @ RVA 0x336DBAC

void IEHDDOIHPNI__NDNPGAKJLHM(MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04567af8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_IEHDDOIHPNI_LPAEJFCBMMF__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    DAT_04567af8 = 1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IEHDDOIHPNI_TypeInfo->static_fields->NMFCCFJDDNN = false;
  return;
}


// ===== private static string MJIINBIHIEF(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x336CA1C]
// IEHDDOIHPNI$$MJIINBIHIEF @ RVA 0x336CA1C

System_String_o * IEHDDOIHPNI__MJIINBIHIEF(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  DDMHMABAHHD_o *pDVar2;
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar3;
  System_String_o *str0;
  System_String_o *pSVar4;
  int32_t local_24;
  
  if ((DAT_04567af9 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
    FUN_01bab630(&StringLiteral_8328/*"LastChance"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567af9 = 1;
  }
  str0 = StringLiteral_8328/*"LastChance"*/;
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    str0 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    bVar1 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    pSVar4 = StringLiteral_1/*""*/;
    if (bVar1) {
      local_24 = 0;
      pDVar2 = HCAICJLDDJO__PEENAMDLAKO(IKKAMAMLIKA,(MethodInfo *)0x0);
      if (pDVar2 != (DDMHMABAHHD_o *)0x0) {
        local_24 = (pDVar2->fields)._HFPMLGFDOKC_k__BackingField;
        pSVar4 = (pDVar2->fields)._COIPKAKHDFP_k__BackingField;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pJVar3 = JMDPBFOCHHP__FPPDGOEOJCH(__this,pSVar4,(MethodInfo *)0x0);
      if ((pJVar3 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) &&
         (bVar1 = System_String__op_Equality
                            ((pJVar3->fields).BGHFADDGPAD,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0),
         bVar1)) {
        pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        str0 = System_String__Concat
                         (str0,StringLiteral_22230/*"{"*/,pSVar4,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
      }
    }
  }
  return str0;
}


// ===== private static HOOAAGABMBL OCKKDMEHADL()  [RVA 0x336D628]
// IEHDDOIHPNI$$OCKKDMEHADL @ RVA 0x336D628

HOOAAGABMBL_o * IEHDDOIHPNI__OCKKDMEHADL(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  IEHDDOIHPNI_c *pIVar5;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar6;
  HOOAAGABMBL_o *pHVar7;
  System_String_o *pSVar8;
  ACHLOMELAJE_o *__this;
  System_Collections_Generic_List_string__o *pSVar9;
  System_String_array *pSVar10;
  HOOAAGABMBL_o *pHVar11;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567afa & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16063/*"_Zone7"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    DAT_04567afa = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar5 = IEHDDOIHPNI_TypeInfo;
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    pIVar5 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
  }
  pSVar6 = IEHDDOIHPNI__EIJGGJGKJBF((MethodInfo *)pIVar5);
  if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar7 = (HOOAAGABMBL_o *)0x0;
  }
  else {
    pHVar7 = (HOOAAGABMBL_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar6,0,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = System_String__op_Inequality
                      ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    if (bVar4) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      do {
        do {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                              );
            pIVar3 = local_80.fields._current;
            pHVar11 = pHVar7;
            if (!bVar4) goto LAB_0346d8ac;
            if ((HOOAAGABMBL_o *)local_80.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar4 = System_String__op_Equality
                              (((HOOAAGABMBL_Fields *)((long)local_80.fields._current + 0x10))->
                               _GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,(MethodInfo *)0x0);
          } while (bVar4);
          a = ((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->_COIPKAKHDFP_k__BackingField;
          pSVar8 = System_String__Concat
                             ((pHVar7->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_16063/*"_Zone7"*/,
                              (MethodInfo *)0x0);
          bVar4 = System_String__op_Inequality(a,pSVar8,(MethodInfo *)0x0);
        } while (bVar4);
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
        pHVar11 = (HOOAAGABMBL_o *)pIVar3;
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField ==
            (ACHLOMELAJE_o *)0x0) break;
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
        __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = ACHLOMELAJE__NIEKNLDMABC
                          (__this,((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->
                                  _ILMMODKJGFK_k__BackingField,(MethodInfo *)0x0);
      } while (bVar4);
LAB_0346d8ac:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      pHVar7 = pHVar11;
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                             ), pIVar3 = local_80.fields._current, bVar4) {
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((HOOAAGABMBL_o *)pIVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
      if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)pSVar9,
                         (Il2CppObject *)
                         ((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->_COIPKAKHDFP_k__BackingField
                         ,Method_System_Collections_Generic_List<string>_Contains__);
      if (!bVar4) {
        if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar9 = IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
        if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = ((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->_COIPKAKHDFP_k__BackingField;
        pSVar10 = (pSVar9->fields)._items;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar9->fields)._size;
        if (uVar1 < (uint)pSVar10->max_length) {
          (pSVar9->fields)._size = uVar1 + 1;
          pSVar10->m_Items[(int)uVar1] = pSVar8;
          thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar8,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
      if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar6,pIVar3,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)
                       IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE,
                       Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
    if (bVar4) {
      pIVar5 = IEHDDOIHPNI_TypeInfo;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        pIVar5 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
      }
      IEHDDOIHPNI__NDNPGAKJLHM((MethodInfo *)pIVar5);
    }
  }
  return pHVar7;
}


// ===== public static void EDNBFMMPAHG(HOOAAGABMBL HFJDDNBBENI)  [RVA 0x336CFF4]
// IEHDDOIHPNI$$EDNBFMMPAHG @ RVA 0x336CFF4

void IEHDDOIHPNI__EDNBFMMPAHG(HOOAAGABMBL_o *HFJDDNBBENI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  ulong uVar4;
  System_Collections_Generic_List_string__o *__this;
  IEHDDOIHPNI_c *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_array *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 0346d000 to 0356d007 has its CatchHandler @ 0346d178 */
  if ((DAT_04567afb & 1) == 0) {
                    /* try { // try from 0346d01c to 0356d023 has its CatchHandler @ 0346d170 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
                    /* try { // try from 0346d02c to 0356d033 has its CatchHandler @ 0346d168 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
                    /* try { // try from 0346d040 to 0356d0a3 has its CatchHandler @ 0346d184 */
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    DAT_04567afb = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((HFJDDNBBENI == (HOOAAGABMBL_o *)0x0) ||
     (uVar4 = (*(HFJDDNBBENI->klass->vtable)._4_OIEONLNFHKC.methodPtr)
                        (HFJDDNBBENI,(HFJDDNBBENI->klass->vtable)._4_OIEONLNFHKC.method),
     (uVar4 & 1) == 0)) {
    return;
  }
                    /* try { // try from 0346d0a4 to 0356d137 has its CatchHandler @ 0346cc94 */
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this,
                       (Il2CppObject *)(HFJDDNBBENI->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_List<string>_Contains__);
    if (bVar3) {
      return;
    }
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (IEHDDOIHPNI_TypeInfo->static_fields->NMFCCFJDDNN == false) {
      method_00 = IEHDDOIHPNI_TypeInfo;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
      }
      IEHDDOIHPNI__GIENGNEGHPJ((MethodInfo *)method_00);
    }
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
    if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 0346d138 to 0356d13f has its CatchHandler @ 0346d194 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
                    /* try { // try from 0346d140 to 0356d143 has its CatchHandler @ 0346d180 */
                    /* try { // try from 0346d144 to 0356d147 has its CatchHandler @ 0346d17c */
                    /* try { // try from 0346d148 to 0356d14b has its CatchHandler @ 0346d16c */
                    /* try { // try from 0346d14c to 0356d153 has its CatchHandler @ 0346d188 */
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
                    /* try { // try from 0346d154 to 0356d157 has its CatchHandler @ 0346cc94 */
      do {
                    /* try { // try from 0346d158 to 0356d15b has its CatchHandler @ 0346d164 */
                    /* try { // try from 0346d15c to 0356d1a3 has its CatchHandler @ 0346cc94 */
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        item = local_50.fields._current;
                    /* catch() { ... } // from try @ 0346d158 with catch @ 0346d164 */
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          goto LAB_0346d1e4;
        }
                    /* catch() { ... } // from try @ 0346d02c with catch @ 0346d168 */
                    /* catch() { ... } // from try @ 0346d148 with catch @ 0346d16c */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 0346d01c with catch @ 0346d170 */
                    /* catch() { ... } // from try @ 0346cff0 with catch @ 0346d174 */
                    /* catch() { ... } // from try @ 0346d000 with catch @ 0346d178 */
                    /* catch() { ... } // from try @ 0346d144 with catch @ 0346d17c */
        bVar3 = System_String__op_Equality
                          (local_50.fields._current[1].monitor,
                           (HFJDDNBBENI->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0346d140 with catch @ 0346d180 */
      } while (!bVar3);
                    /* catch() { ... } // from try @ 0346d040 with catch @ 0346d184 */
                    /* catch() { ... } // from try @ 0346d14c with catch @ 0346d188 */
                    /* catch() { ... } // from try @ 0346cf84 with catch @ 0346d18c */
                    /* catch() { ... } // from try @ 0346cf28 with catch @ 0346d190 */
                    /* catch() { ... } // from try @ 0346d138 with catch @ 0346d194 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0346d1a4 to 0356d1a7 has its CatchHandler @ 0346d1b8 */
        thunk_FUN_01ba7564();
      }
      pSVar5 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
      if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* catch() { ... } // from try @ 0346d1a4 with catch @ 0346d1b8 */
                    /* try { // try from 0346d1c0 to 0356d227 has its CatchHandler @ 0346d23c */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar5,item,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
LAB_0346d1e4:
        if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
        pSVar5 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
        if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          pHVar6 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pHVar6 != (HOOAAGABMBL_array *)0x0) {
            uVar1 = (pSVar5->fields)._size;
                    /* try { // try from 0346d228 to 0356d233 has its CatchHandler @ 0346cc94 */
            if (uVar1 < (uint)pHVar6->max_length) {
                    /* try { // try from 0346d234 to 0356d23b has its CatchHandler @ 0346d23c */
                    /* catch() { ... } // from try @ 0346d1c0 with catch @ 0346d23c
                       catch() { ... } // from try @ 0346d234 with catch @ 0346d23c */
              (pSVar5->fields)._size = uVar1 + 1;
              pHVar6->m_Items[(int)uVar1] = HFJDDNBBENI;
              thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,HFJDDNBBENI);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,
                       (Il2CppObject *)HFJDDNBBENI,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static LBMOOFGGPEB DMFPHHLKEPI(string DGMHNKGDAIL)  [RVA 0x336C8C4]
// IEHDDOIHPNI$$DMFPHHLKEPI @ RVA 0x336C8C4

LBMOOFGGPEB_o * IEHDDOIHPNI__DMFPHHLKEPI(System_String_o *DGMHNKGDAIL,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  LBMOOFGGPEB_o *__this;
  System_Action_object__o *pSVar4;
  System_Action_object__o **ppSVar5;
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar6;
  
  if ((DAT_04567afc & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&LBMOOFGGPEB_TypeInfo);
    FUN_01bab630(&Method_NLPJLHOEAOE_JDHFCFGBAIO__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567afc = 1;
    method = extraout_x1;
  }
  __this = (LBMOOFGGPEB_o *)thunk_FUN_01bda818(LBMOOFGGPEB_TypeInfo,method);
  LBMOOFGGPEB___ctor(__this,(System_Action_object__o *)0x0,(MethodInfo *)0x0);
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
  fVar1 = (pBVar6->ODGAJIBDACC).fields.a;
  fVar2 = (pBVar6->ODGAJIBDACC).fields.r;
  fVar3 = (pBVar6->ODGAJIBDACC).fields.g;
  if (__this != (LBMOOFGGPEB_o *)0x0) {
    (__this->fields).BANIDGFENDE.fields.b = (pBVar6->ODGAJIBDACC).fields.b;
    (__this->fields).BANIDGFENDE.fields.a = fVar1;
    (__this->fields).BANIDGFENDE.fields.r = fVar2;
    (__this->fields).BANIDGFENDE.fields.g = fVar3;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar4 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar5 = &(__this->fields).FBKGGPDECHB;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    LBMOOFGGPEB__IIKPNGJAJIH(__this,(Il2CppObject *)DGMHNKGDAIL,(MethodInfo *)0x0);
    LBMOOFGGPEB__JBGIAEJIKCA(__this,(Nekki_SF2_GUI_TimerLabel_o *)0x0,(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

