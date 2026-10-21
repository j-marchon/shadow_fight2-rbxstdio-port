// TypeDefIndex 1146
// Namespace: 
// public class LFOMNKEACBL : LMJFCEPILNI
// Fields:
//   private const string IECOBJJMFJG = "MagicPlayer";
//   public static readonly List<string> GMKOGIBMPFO; // 0x0
//   private HOOAAGABMBL OFHEIFDJBLA; // 0x60
//   private List<InfoAnimation> ONJPCPJPEIL; // 0x68
//   private List<ABNLGBHKOCE> KOJGEABELHH; // 0x70
//   private int AENEIOGOIJP; // 0x78
//   private InfoAnimation NHIDCPKCKHC; // 0x80

// ===== private void DGLJCGNHLIG(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x30FAD50]
// LFOMNKEACBL$$DGLJCGNHLIG @ RVA 0x30FAD50

void LFOMNKEACBL__DGLJCGNHLIG
               (LFOMNKEACBL_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Object_array *args;
  long lVar3;
  ModelParameters_o *pPVar4;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar5;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar6;
  Model_OJHIDJPICJN_o *__this_00;
  Model_AHFAALBHPHJ_o *__this_01;
  undefined8 uVar7;
  Model_o *pOVar8;
  HOOAAGABMBL_o **ppHVar9;
  InfoAnimation_o **ppEVar10;
  InfoAnimation_o *pEVar11;
  System_String_o *pSVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar13;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456649a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_9509/*"No start animation for item {0}"*/);
    DAT_0456649a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  ppHVar9 = &(__this->fields).OFHEIFDJBLA;
  if (*ppHVar9 == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  ppEVar10 = &(__this->fields).NHIDCPKCKHC;
  pEVar11 = *ppEVar10;
  if (pEVar11 == (InfoAnimation_o *)0x0) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if ((*ppHVar9 == (HOOAAGABMBL_o *)0x0) || (args == (System_Object_array *)0x0))
    goto LAB_031fb12c;
    pSVar12 = ((*ppHVar9)->fields)._COIPKAKHDFP_k__BackingField;
    if ((pSVar12 != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pSVar12,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar12;
    thunk_FUN_01c20e04(args->m_Items,pSVar12);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_9509/*"No start animation for item {0}"*/,args,(MethodInfo *)0x0);
  }
  else {
    CVar13 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       ((__this->fields).AENEIOGOIJP,(MethodInfo *)0x0);
    (pEVar11->fields).EAFPDFHFBOM.fields = CVar13;
    (__this->fields).AENEIOGOIJP = -1;
    (__this->fields).NHIDCPKCKHC = (InfoAnimation_o *)0x0;
    thunk_FUN_01c20e04(ppEVar10,0);
  }
  if (((CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) &&
      (pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI, pOVar8 != (Model_o *)0x0)) &&
     (pPVar4 = (pOVar8->fields).FAPMJJBOFEF, pPVar4 != (ModelParameters_o *)0x0)) {
    (*(pPVar4->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
              (pPVar4,StringLiteral_8772/*"Magic"*/,(__this->fields).OFHEIFDJBLA,
               (pPVar4->klass->vtable)._9_CGNPHPDFKJG.method);
    pSVar5 = (__this->fields).KOJGEABELHH;
    if (pSVar5 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__
                               ), bVar2) {
        pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if (pOVar8 == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (pOVar8->fields).MEECHCPNHMP;
        if (pSVar5 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar5,local_80.fields._current,
                   Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__)
      ;
      pSVar6 = (__this->fields).ONJPCPJPEIL;
      if (pSVar6 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)pSVar6,
                   Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                                 ), bVar2) {
          pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
          if (pOVar8 == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (pOVar8->fields).OOBBJEDHHKM;
          if (pSVar6 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar6,local_a0.fields._current,
                     Method_System_Collections_Generic_List<InfoAnimation>_Remove__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
        pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if ((pOVar8 != (Model_o *)0x0) &&
           (__this_00 = (pOVar8->fields).MPJKOPNODDM, __this_00 != (Model_OJHIDJPICJN_o *)0x0)
           ) {
          Model_OJHIDJPICJN__BCKHIHGPFEF
                    (__this_00,(__this->fields).ONJPCPJPEIL,(MethodInfo *)0x0);
          pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
          if ((pOVar8 != (Model_o *)0x0) &&
             (__this_01 = (pOVar8->fields).NOJKHMOEAEO,
             __this_01 != (Model_AHFAALBHPHJ_o *)0x0)) {
            Model_AHFAALBHPHJ__JBPIDIFNGMB
                      (__this_01,(__this->fields).KOJGEABELHH,(MethodInfo *)0x0);
            (__this->fields).OFHEIFDJBLA = (HOOAAGABMBL_o *)0x0;
            thunk_FUN_01c20e04(ppHVar9,0);
            pSVar6 = (__this->fields).ONJPCPJPEIL;
            if (pSVar6 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
              iVar1 = (pSVar6->fields)._size;
              (pSVar6->fields)._size = 0;
              (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              pSVar5 = (__this->fields).KOJGEABELHH;
              if (pSVar5 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                iVar1 = (pSVar5->fields)._size;
                (pSVar5->fields)._size = 0;
                (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                if (iVar1 < 1) {
                  return;
                }
                System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_031fb12c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PJOPMAHPBJM(Model GMIANEFANEC, Model ANGBPBINHBL)  [RVA 0x30FB220]
// LFOMNKEACBL$$PJOPMAHPBJM @ RVA 0x30FB220

void LFOMNKEACBL__PJOPMAHPBJM
               (LFOMNKEACBL_o *__this,Model_o *GMIANEFANEC,Model_o *ANGBPBINHBL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  InfoAnimation_o **ppEVar8;
  NJPBHDMCLIN_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar9;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar10;
  Fight_o *__this_02;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar11;
  ulong uVar12;
  Model_OJHIDJPICJN_o *__this_03;
  Model_AHFAALBHPHJ_o *__this_04;
  HOOAAGABMBL_o *pHVar13;
  ModelParameters_o *pPVar14;
  HOOAAGABMBL_array *pHVar15;
  InfoAnimation_HJPFANEPGJF_o *pEVar16;
  InfoAnimation_array *pEVar17;
  System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *pSVar18;
  ABNLGBHKOCE_array *pAVar19;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar20;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456649b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&LFOMNKEACBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    FUN_01bab630(&StringLiteral_8784/*"MagicPlayer"*/);
    DAT_0456649b = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((GMIANEFANEC != (Model_o *)0x0) &&
     (pSVar6 = (GMIANEFANEC->fields).OOBBJEDHHKM,
     pSVar6 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    do {
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                          );
        pIVar3 = local_80.fields._current;
        if (!bVar4) goto LAB_031fb464;
        if ((InfoAnimation_o *)local_80.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = ((InfoAnimation_Fields *)((long)local_80.fields._current + 0x10))->
                 _AHFPJJKEANI_k__BackingField;
        if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)pSVar7,StringLiteral_8784/*"MagicPlayer"*/,
                           Method_System_Collections_Generic_List<string>_Contains__);
      } while (!bVar4);
      pHVar13 = (__this->fields).OFHEIFDJBLA;
      if (pHVar13 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = ((InfoAnimation_Fields *)((long)pIVar3 + 0x10))->GMNNFJNKIAN;
      if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)pSVar7,
                         (Il2CppObject *)(pHVar13->fields)._DKODBGOHKGH_k__BackingField,
                         Method_System_Collections_Generic_List<string>_Contains__);
    } while (!bVar4);
    ppEVar8 = &(__this->fields).NHIDCPKCKHC;
    *ppEVar8 = (InfoAnimation_o *)pIVar3;
    thunk_FUN_01c20e04(ppEVar8,pIVar3);
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (((InfoAnimation_Fields *)((long)pIVar3 + 0x10))->EAFPDFHFBOM).fields,
                       (MethodInfo *)0x0);
    (__this->fields).AENEIOGOIJP = iVar5;
    CVar20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
    (((InfoAnimation_Fields *)((long)pIVar3 + 0x10))->EAFPDFHFBOM).fields = CVar20;
LAB_031fb464:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    __this_00 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
    NJPBHDMCLIN___ctor(__this_00,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
    pPVar14 = (GMIANEFANEC->fields).FAPMJJBOFEF;
    if ((pPVar14 != (ModelParameters_o *)0x0) &&
       (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
      pHVar13 = (pPVar14->fields).AIDDHEHFBEG;
      pHVar15 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pHVar15 != (HOOAAGABMBL_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pHVar15->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pHVar15->m_Items[(int)uVar1] = pHVar13;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pHVar13,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
        pPVar14 = (GMIANEFANEC->fields).FAPMJJBOFEF;
        if (pPVar14 != (ModelParameters_o *)0x0) {
          pHVar13 = (pPVar14->fields).HLAAFCIMBAP;
          pHVar15 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pHVar15 != (HOOAAGABMBL_array *)0x0) {
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pHVar15->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pHVar15->m_Items[(int)uVar1] = pHVar13;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)pHVar13,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (__this_00 != (NJPBHDMCLIN_o *)0x0) {
              ppSVar9 = &(__this_00->fields).GFBNJPMOEKD;
              *ppSVar9 = __this_01;
              thunk_FUN_01c20e04(ppSVar9,__this_01);
              (__this_00->fields).GGIGKNJPODI = GMIANEFANEC;
              thunk_FUN_01c20e04(&__this_00->fields,GMIANEFANEC);
              (__this_00->fields).ANOKHPAKKON = false;
              pPVar14 = (GMIANEFANEC->fields).FAPMJJBOFEF;
              if (pPVar14 != (ModelParameters_o *)0x0) {
                (__this_00->fields).HLPLAKCBINK = (pPVar14->fields).HLPLAKCBINK;
                pSVar10 = ModelParameters__BMDDFABHHCA(pPVar14,(MethodInfo *)0x0);
                (__this_00->fields).OOFILGKHDDI = pSVar10;
                thunk_FUN_01c20e04();
                if ((ANGBPBINHBL != (Model_o *)0x0) &&
                   (pPVar14 = (ANGBPBINHBL->fields).FAPMJJBOFEF, pPVar14 != (ModelParameters_o *)0x0)) {
                  pSVar10 = ModelParameters__BMDDFABHHCA(pPVar14,(MethodInfo *)0x0);
                  (__this_00->fields).GIIIBDMEPDK = pSVar10;
                  thunk_FUN_01c20e04(&(__this_00->fields).GIIIBDMEPDK);
                  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04565b7f == '\0') {
                    FUN_01bab630(&Fight_TypeInfo);
                    DAT_04565b7f = '\x01';
                  }
                  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  __this_02 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
                  if (__this_02 != (Fight_o *)0x0) {
                    iVar5 = Fight__IHMLDBDLJON(__this_02,(MethodInfo *)0x0);
                    (__this_00->fields).COALAGILPBO = iVar5;
                    pSVar6 = (ANGBPBINHBL->fields).OOBBJEDHHKM;
                    if (pSVar6 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                      System_Collections_Generic_List<object>__GetEnumerator
                                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar6,
                                 Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__
                                );
                      local_80.fields._index = local_b8.fields._index;
                      local_80.fields._version = local_b8.fields._version;
                      local_80.fields._list = local_b8.fields._list;
                      local_80.fields._current = local_b8.fields._current;
                      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                               (&local_80,
                                                Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                                               ), pIVar3 = local_80.fields._current, bVar4) {
                        if ((LFOMNKEACBL_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        if ((InfoAnimation_o *)pIVar3 == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        bVar4 = InfoAnimation__FINLPLHJDHN
                                          ((InfoAnimation_o *)pIVar3,
                                           LFOMNKEACBL_TypeInfo->static_fields->GMKOGIBMPFO,
                                           (MethodInfo *)0x0);
                        if (bVar4) {
                          pEVar16 = ((InfoAnimation_Fields *)((long)pIVar3 + 0x10))->DMGLMCBIAGL;
                          if (pEVar16 == (InfoAnimation_HJPFANEPGJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          bVar4 = InfoAnimation__PCPBHJGAOOH
                                            ((InfoAnimation_o *)pIVar3,__this_00,
                                             (pEVar16->fields).KFLHLLDPBIC,(EventAnimation_o *)0x0,
                                             (MethodInfo *)0x0);
                          if (bVar4) {
                            pPVar14 = (GMIANEFANEC->fields).FAPMJJBOFEF;
                            if (pPVar14 == (ModelParameters_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar7 = (pPVar14->fields).ODHIGGJOPEK;
                            if ((pSVar7 == (System_Collections_Generic_List_string__o *)0x0) ||
                               (bVar4 = InfoAnimation__FINLPLHJDHN
                                                  ((InfoAnimation_o *)pIVar3,pSVar7,(MethodInfo *)0x0)
                               , !bVar4)) {
                              pSVar6 = (GMIANEFANEC->fields).OOBBJEDHHKM;
                              if (pSVar6 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              bVar4 = System_Collections_Generic_List<object>__Contains
                                                ((System_Collections_Generic_List_object__o *)pSVar6
                                                 ,pIVar3,
                                                 Method_System_Collections_Generic_List<InfoAnimation>_Contains__
                                                );
                              lVar2 = Method_System_Collections_Generic_List<InfoAnimation>_Add__;
                              if (!bVar4) {
                                pSVar6 = (__this->fields).ONJPCPJPEIL;
                                if (pSVar6 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)
                                {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
                                pEVar17 = (pSVar6->fields)._items;
                                (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                                if (pEVar17 == (InfoAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
                                uVar1 = (pSVar6->fields)._size;
                                if (uVar1 < (uint)pEVar17->max_length) {
                                  (pSVar6->fields)._size = uVar1 + 1;
                                  pEVar17->m_Items[(int)uVar1] = (InfoAnimation_o *)pIVar3;
                                  thunk_FUN_01c20e04(pEVar17->m_Items + (int)uVar1,pIVar3);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSVar6,
                                             pIVar3,*(MethodInfo_26E4DAC **)
                                                     (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                     0x70));
                                }
                              }
                            }
                          }
                        }
                      }
                      System_Collections_Generic_List_Enumerator<object>__Dispose
                                (&local_80,
                                 Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__
                                );
                      pSVar11 = (ANGBPBINHBL->fields).MEECHCPNHMP;
                      if (pSVar11 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                        System_Collections_Generic_List<object>__GetEnumerator
                                  (&local_b8,(System_Collections_Generic_List_object__o *)pSVar11,
                                   Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__
                                  );
                        local_a0.fields._index = local_b8.fields._index;
                        local_a0.fields._version = local_b8.fields._version;
                        local_a0.fields._list = local_b8.fields._list;
                        local_a0.fields._current = local_b8.fields._current;
                        while( true ) {
                          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                            (&local_a0,
                                             Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__
                                            );
                          pIVar3 = local_a0.fields._current;
                          if (!bVar4) break;
                          if ((InfoAnimation_o *)local_a0.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar18 = ((InfoAnimation_Fields *)((long)local_a0.fields._current + 0x10))
                                    ->EADAGMIKLJN;
                          if (pSVar18 ==
                              (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o
                               *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          uVar12 = (*((InfoAnimation_c *)(local_a0.fields._current)->klass)[1]._1.
                                     image)(local_a0.fields._current,__this_00,
                                            (pSVar18->fields)._syncRoot,0,
                                            ((InfoAnimation_c *)(local_a0.fields._current)->klass)[1].
                                            _1.gc_desc);
                          if ((uVar12 & 1) != 0) {
                            pSVar11 = (GMIANEFANEC->fields).MEECHCPNHMP;
                            if (pSVar11 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            bVar4 = System_Collections_Generic_List<object>__Contains
                                              ((System_Collections_Generic_List_object__o *)pSVar11,
                                               pIVar3,
                                               Method_System_Collections_Generic_List<ABNLGBHKOCE>_Contains__
                                              );
                            lVar2 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
                            if (!bVar4) {
                              pSVar11 = (__this->fields).KOJGEABELHH;
                              if (pSVar11 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0)
                              {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pAVar19 = (pSVar11->fields)._items;
                              (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                              if (pAVar19 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              uVar1 = (pSVar11->fields)._size;
                              if (uVar1 < (uint)pAVar19->max_length) {
                                (pSVar11->fields)._size = uVar1 + 1;
                                pAVar19->m_Items[(int)uVar1] = (ABNLGBHKOCE_o *)pIVar3;
                                thunk_FUN_01c20e04(pAVar19->m_Items + (int)uVar1,pIVar3);
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar11,
                                           pIVar3,*(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70
                                                   ));
                              }
                            }
                          }
                        }
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (&local_a0,
                                   Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__
                                  );
                        pSVar11 = (GMIANEFANEC->fields).MEECHCPNHMP;
                        if (pSVar11 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                          System_Collections_Generic_List<object>__AddRange
                                    ((System_Collections_Generic_List_object__o *)pSVar11,
                                     (System_Collections_Generic_IEnumerable_T__o *)
                                     (__this->fields).KOJGEABELHH,
                                     Method_System_Collections_Generic_List<ABNLGBHKOCE>_AddRange__)
                          ;
                          pSVar6 = (GMIANEFANEC->fields).OOBBJEDHHKM;
                          if (pSVar6 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                            System_Collections_Generic_List<object>__AddRange
                                      ((System_Collections_Generic_List_object__o *)pSVar6,
                                       (System_Collections_Generic_IEnumerable_T__o *)
                                       (__this->fields).ONJPCPJPEIL,
                                       Method_System_Collections_Generic_List<InfoAnimation>_AddRange__
                                      );
                            __this_03 = (GMIANEFANEC->fields).MPJKOPNODDM;
                            if (__this_03 != (Model_OJHIDJPICJN_o *)0x0) {
                              Model_OJHIDJPICJN__PNKPICCCNEM
                                        (__this_03,(__this->fields).ONJPCPJPEIL,(MethodInfo *)0x0);
                              __this_04 = (GMIANEFANEC->fields).NOJKHMOEAEO;
                              if (__this_04 != (Model_AHFAALBHPHJ_o *)0x0) {
                                Model_AHFAALBHPHJ__DCHFLPJPPCH
                                          (__this_04,(__this->fields).KOJGEABELHH,(MethodInfo *)0x0)
                                ;
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30FBB28]
// LFOMNKEACBL$$.cctor @ RVA 0x30FBB28

void LFOMNKEACBL___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar4;
  
  if ((DAT_0456649c & 1) == 0) {
                    /* try { // try from 031fbb54 to 032fbc73 has its CatchHandler @ 031fbb54
                       catch() { ... } // from try @ 031fbb54 with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbc98 with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbdb0 with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbddc with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbe1c with catch @ 031fbb54 */
    FUN_01bab630(&LFOMNKEACBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_8782/*"MagicMissileFly"*/);
    FUN_01bab630(&StringLiteral_8781/*"MagicMissile"*/);
    FUN_01bab630(&StringLiteral_8783/*"MagicMissileStart"*/);
    FUN_01bab630(&StringLiteral_8784/*"MagicPlayer"*/);
    DAT_0456649c = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  pSVar3 = StringLiteral_8784/*"MagicPlayer"*/;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar4 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = pSVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar3 = StringLiteral_8781/*"MagicMissile"*/;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar4 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar4->max_length) {
                    /* try { // try from 031fbc74 to 032fbc7b has its CatchHandler @ 031fbdc0 */
          (__this->fields)._size = uVar1 + 1;
          pSVar4->m_Items[(int)uVar1] = pSVar3;
          thunk_FUN_01c20e04();
        }
        else {
                    /* try { // try from 031fbc94 to 032fbc97 has its CatchHandler @ 031fbdbc */
                    /* try { // try from 031fbc98 to 032fbda7 has its CatchHandler @ 031fbb54 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = StringLiteral_8783/*"MagicMissileStart"*/;
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar4 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar4->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar3 = StringLiteral_8782/*"MagicMissileFly"*/;
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar4 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar4 != (System_String_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar4->m_Items[(int)uVar1] = pSVar3;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            LFOMNKEACBL_TypeInfo->static_fields->GMKOGIBMPFO = __this;
            thunk_FUN_01c20e04(LFOMNKEACBL_TypeInfo->static_fields,__this);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BOEFGIBCIIL(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB, bool LOPENELMPML)  [RVA 0x30FBD84]
// LFOMNKEACBL$$BOEFGIBCIIL @ RVA 0x30FBD84

void LFOMNKEACBL__BOEFGIBCIIL
               (LFOMNKEACBL_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,bool LOPENELMPML,
               MethodInfo *method)

{
  if (LOPENELMPML) {
    LFOMNKEACBL__DGLJCGNHLIG(__this,CPECAEHDDDB,(MethodInfo *)0x1);
    return;
  }
  LFOMNKEACBL__PDIAFGHECLE(__this,CPECAEHDDDB,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(LFOMNKEACBL IBKIPBJJCPG)  [RVA 0x30FBEE8]
// LFOMNKEACBL$$.ctor @ RVA 0x30FBEE8

void LFOMNKEACBL___ctor(LFOMNKEACBL_o *__this,LFOMNKEACBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_01;
  System_Collections_Generic_List_ABNLGBHKOCE__o **ppSVar2;
  
  if ((DAT_0456649d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    DAT_0456649d = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
  ppSVar1 = &(__this->fields).ONJPCPJPEIL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_ABNLGBHKOCE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
  ppSVar2 = &(__this->fields).KOJGEABELHH;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).AENEIOGOIJP = -1;
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x30FBFD4]
// LFOMNKEACBL$$.ctor @ RVA 0x30FBFD4

void LFOMNKEACBL___ctor(LFOMNKEACBL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_01;
  System_Collections_Generic_List_ABNLGBHKOCE__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456649e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    DAT_0456649e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
  ppSVar1 = &(__this->fields).ONJPCPJPEIL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_ABNLGBHKOCE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
  ppSVar2 = &(__this->fields).KOJGEABELHH;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).AENEIOGOIJP = -1;
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void PDIAFGHECLE(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x30FBD90]
// LFOMNKEACBL$$PDIAFGHECLE @ RVA 0x30FBD90

void LFOMNKEACBL__PDIAFGHECLE
               (LFOMNKEACBL_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  ModelParameters_o *pPVar2;
  long *plVar3;
  HOOAAGABMBL_o *pHVar4;
  long lVar5;
  MethodInfo *method_00;
  Model_o *pOVar6;
  
                    /* try { // try from 031fbda8 to 032fbdab has its CatchHandler @ 031fbdb8 */
                    /* try { // try from 031fbdac to 032fbdaf has its CatchHandler @ 031fbdb4 */
  if ((DAT_0456649f & 1) == 0) {
                    /* try { // try from 031fbdb0 to 032fbdd7 has its CatchHandler @ 031fbb54 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbdac with catch @ 031fbdb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbda8 with catch @ 031fbdb8
                        */
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbc94 with catch @ 031fbdbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbc74 with catch @ 031fbdc0
                        */
    FUN_01bab630(&StringLiteral_9537/*"NoMagic"*/);
    DAT_0456649f = 1;
  }
                    /* try { // try from 031fbdd8 to 032fbddb has its CatchHandler @ 031fbe04 */
                    /* try { // try from 031fbddc to 032fbe13 has its CatchHandler @ 031fbb54 */
  if ((((CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) &&
       (pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI, pOVar6 != (Model_o *)0x0)) &&
      (pOVar6 = (pOVar6->fields).BPJMMBGIMNC, pOVar6 != (Model_o *)0x0)) &&
     (pPVar2 = (pOVar6->fields).FAPMJJBOFEF, pPVar2 != (ModelParameters_o *)0x0)) {
                    /* catch() { ... } // from try @ 031fbdd8 with catch @ 031fbe04 */
    plVar3 = (long *)(*(pPVar2->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                               (pPVar2,StringLiteral_8772/*"Magic"*/,0,
                                (pPVar2->klass->vtable)._4_CJPIJKJDHGI.method);
                    /* try { // try from 031fbe14 to 032fbe1b has its CatchHandler @ 031fbe30 */
                    /* try { // try from 031fbe1c to 032fbe27 has its CatchHandler @ 031fbb54 */
    if ((plVar3 != (long *)0x0) &&
       (bVar1 = System_String__op_Inequality
                          ((System_String_o *)plVar3[6],StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0),
       !bVar1)) {
                    /* try { // try from 031fbe28 to 032fbe2f has its CatchHandler @ 031fbe30 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031fbe14 with catch @ 031fbe30
                       catch(type#2 @ 00000000) { ... } // from try @ 031fbe28 with catch @ 031fbe30
                        */
      bVar1 = System_String__op_Equality
                        ((System_String_o *)plVar3[3],StringLiteral_9537/*"NoMagic"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if ((pOVar6 != (Model_o *)0x0) &&
           (pPVar2 = (pOVar6->fields).FAPMJJBOFEF, pPVar2 != (ModelParameters_o *)0x0)) {
          pHVar4 = (HOOAAGABMBL_o *)
                   (*(pPVar2->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                             (pPVar2,StringLiteral_8772/*"Magic"*/,0,
                              (pPVar2->klass->vtable)._4_CJPIJKJDHGI.method);
          (__this->fields).OFHEIFDJBLA = pHVar4;
          thunk_FUN_01c20e04();
          lVar5 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + 0x290) = 1;
            pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
            if ((pOVar6 != (Model_o *)0x0) &&
               (pPVar2 = (pOVar6->fields).FAPMJJBOFEF, pPVar2 != (ModelParameters_o *)0x0)) {
              method_00 = (pPVar2->klass->vtable)._9_CGNPHPDFKJG.method;
              (*(pPVar2->klass->vtable)._9_CGNPHPDFKJG.methodPtr)(pPVar2,StringLiteral_8772/*"Magic"*/,lVar5);
              pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
              if (pOVar6 != (Model_o *)0x0) {
                LFOMNKEACBL__PJOPMAHPBJM(__this,pOVar6,(pOVar6->fields).BPJMMBGIMNC,method_00);
                return;
              }
            }
          }
        }
        goto LAB_031fbee4;
      }
    }
    return;
  }
LAB_031fbee4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30FC0B8]
// LFOMNKEACBL$$HNIHOIAMDPC @ RVA 0x30FC0B8

void LFOMNKEACBL__HNIHOIAMDPC
               (LFOMNKEACBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1c,(MethodInfo *)0x0);
  return;
}

