// TypeDefIndex 1046
// Namespace: 
// public class MKIBNAAANPO : IDisposable
// Fields:
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x10

// ===== public void LEDDOEKOGHA(MEJIKMPNBNL BHHBEIACGPB, MKIBNAAANPO.AJLHACNHDHD JGHIJMJNJLE, bool GEOCJFAJLHD)  [RVA 0x30D28E8]
// MKIBNAAANPO$$LEDDOEKOGHA @ RVA 0x30D28E8

void MKIBNAAANPO__LEDDOEKOGHA
               (MKIBNAAANPO_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,int32_t JGHIJMJNJLE,
               bool GEOCJFAJLHD,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  long lVar2;
  Roster_o *pAVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x5;
  DNELIPCHKLK_o *local_38;
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_0456631a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_5623/*"EclipseModeReplayTutorialBattle"*/);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_15957/*"_EclipseModeReplayTutorialBattle"*/);
    DAT_0456631a = 1;
  }
  local_38 = (DNELIPCHKLK_o *)0x0;
  bVar1 = MKIBNAAANPO__BHNHPKAALOC(method_00);
  bVar1 = MKIBNAAANPO__FMELMDFPPHI(__this,BHHBEIACGPB,bVar1,&local_38,JGHIJMJNJLE,in_x5);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_031d2adc;
    Nekki_SF2_GUI_Map_MapScene__ReloadZones
              ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
  }
  if (local_38 == (DNELIPCHKLK_o *)0x0) {
    return;
  }
  if (!GEOCJFAJLHD) {
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 == (Roster_o *)0x0) goto LAB_031d2adc;
    pMVar4 = Roster__HKIEGNBOFCD(pAVar3,StringLiteral_15957/*"_EclipseModeReplayTutorialBattle"*/,0,(MethodInfo *)0x0);
    if ((pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) &&
       (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar4->fields).JAICMIMBIOA,(MethodInfo *)0x0), !bVar1)) {
      return;
    }
  }
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
  if (local_38 != (DNELIPCHKLK_o *)0x0) {
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    CJNHFNHJHPE = (System_String_o *)
                  (*(local_38->klass->vtable)._3_ToString.methodPtr)
                            (local_38,(local_38->klass->vtable)._3_ToString.method);
    if (pAVar3 != (Roster_o *)0x0) {
      Roster__LMJFPPDAPBF(pAVar3,StringLiteral_5623/*"EclipseModeReplayTutorialBattle"*/,CJNHFNHJHPE,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d2adc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x30D4274]
// MKIBNAAANPO$$Dispose @ RVA 0x30D4274

void MKIBNAAANPO__Dispose(MKIBNAAANPO_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FMELMDFPPHI(MEJIKMPNBNL BHHBEIACGPB, bool EKHLOHMFNDO, out DNELIPCHKLK EEGPOPMGFED, MKIBNAAANPO.AJLHACNHDHD AEDJMMHJIEH = 1)  [RVA 0x30D2BD0]
// MKIBNAAANPO$$FMELMDFPPHI @ RVA 0x30D2BD0

bool MKIBNAAANPO__FMELMDFPPHI
               (MKIBNAAANPO_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,bool EKHLOHMFNDO,
               DNELIPCHKLK_o **EEGPOPMGFED,int32_t AEDJMMHJIEH,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *__this_00;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int32_t iVar9;
  System_Lazy_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP___o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar12;
  System_String_o *pSVar13;
  DNELIPCHKLK_o *pDVar14;
  PAMEPBLOLPB_o *pPVar15;
  OLKPEJMEBPJ_o *pOVar16;
  DNELIPCHKLK_o *pDVar17;
  MKIBNAAANPO_o *__this_03;
  long lVar18;
  NLPJLHOEAOE_o *__this_04;
  MethodInfo *method_00;
  int iVar19;
  Roster_o *pAVar20;
  MEJIKMPNBNL_o *pMVar21;
  System_Object_array *pSVar22;
  int index;
  UnityEngine_Object_o *pUVar23;
  System_String_o *pSVar24;
  Nekki_SF2_GUI_Map_MapScene_o *__this_05;
  System_String_o *pSVar25;
  DNELIPCHKLK_o *local_e8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  uint16_t local_94 [2];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_0456631b & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<OOMHDDBCBJP,_OOMHDDBCBJP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<OOMHDDBCBJP,_OOMHDDBCBJP>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<OOMHDDBCBJP,_OOMHDDBCBJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<OOMHDDBCBJP,_OOMHDDBCBJP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<OOMHDDBCBJP,_OOMHDDBCBJP>_get_Value__
                );
    FUN_01bab630(&Method_System_Lazy<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DNELIPCHKLK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DNELIPCHKLK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DNELIPCHKLK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DNELIPCHKLK>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<DNELIPCHKLK>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_15956/*"_EclipseModeReplayTutorial"*/);
    DAT_0456631b = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_94[0] = 0;
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  *EEGPOPMGFED = (DNELIPCHKLK_o *)0x0;
  thunk_FUN_01c20e04(EEGPOPMGFED,0);
  if (((BHHBEIACGPB == (MEJIKMPNBNL_o *)0x0) ||
      (pSVar10 = (BHHBEIACGPB->fields).IDDMNAAIEMB,
      pSVar10 == (System_Lazy_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP___o *)0x0)) ||
     (pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Lazy<object>__get_Value
                          ((System_Lazy_object__o *)pSVar10,
                           Method_System_Lazy<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>_get_Value__),
     pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto LAB_031d3f0c;
  iVar9 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                    (pSVar11,
                     Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_get_Count__
                    );
  if (iVar9 == 0) {
    bVar3 = false;
  }
  else {
    __this_01 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_01,Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
    __this_02 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<DNELIPCHKLK>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_02,Method_System_Collections_Generic_List<DNELIPCHKLK>__ctor__);
    if (AEDJMMHJIEH == 2) {
      bVar5 = true;
    }
    else {
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
      pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar20 == (Roster_o *)0x0) goto LAB_031d3f0c;
      pMVar12 = Roster__HKIEGNBOFCD(pAVar20,StringLiteral_15956/*"_EclipseModeReplayTutorial"*/,0,(MethodInfo *)0x0);
      if (pMVar12 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        bVar5 = false;
      }
      else {
        iVar9 = PCOEHCPGBBG__JBGCINPPLAC((pMVar12->fields).JAICMIMBIOA,0,(MethodInfo *)0x0);
        bVar5 = 0 < iVar9;
      }
    }
    pSVar10 = (BHHBEIACGPB->fields).IDDMNAAIEMB;
    if ((pSVar10 == (System_Lazy_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP___o *)0x0) ||
       (pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Lazy<object>__get_Value
                            ((System_Lazy_object__o *)pSVar10,
                             Method_System_Lazy<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>_get_Value__),
       pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
    goto LAB_031d3f0c;
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_d8,pSVar11,
               Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_GetEnumerator__
              );
    bVar8 = false;
    local_e8 = (DNELIPCHKLK_o *)0x0;
    local_90.fields._version = local_d8.fields._version;
    local_90.fields._index = local_d8.fields._index;
    local_90.fields._dictionary = local_d8.fields._dictionary;
    local_90.fields._current.fields.value = local_d8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_d8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_d8.fields._36_4_;
    bVar3 = false;
LAB_031d2f14:
    bVar6 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                      (&local_90,
                       Method_System_Collections_Generic_Dictionary_Enumerator<OOMHDDBCBJP,_OOMHDDBCBJP>_MoveNext__
                      );
    __this_00 = local_90.fields._current.fields.value;
    pIVar4 = local_90.fields._current.fields.key;
    if (bVar6) {
      if (EKHLOHMFNDO) {
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
        pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((pAVar20->fields).IOHEOKOOJFA == false) {
          if ((OOMHDDBCBJP_o *)pIVar4 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar16 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG;
          if (pOVar16 != (OLKPEJMEBPJ_o *)0x0) {
            if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar9 = OLKPEJMEBPJ__LIIDJOLDBBF(pOVar16,(MethodInfo *)0x0);
            if (0 < iVar9) goto LAB_031d2f94;
          }
          iVar9 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)pIVar4,(MethodInfo *)0x0);
          if (iVar9 != 8 || AEDJMMHJIEH != 2) goto LAB_031d2f94;
          if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar16 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG;
          if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) goto LAB_031d2f94;
          OLKPEJMEBPJ__DPLIHJEANGE(pOVar16,true,(MethodInfo *)0x0);
          lVar18 = Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar22 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar22 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar22->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pSVar22->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pSVar22->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          if (((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG != (OLKPEJMEBPJ_o *)0x0) {
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
            pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pOVar16 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG;
            if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pDVar14 = (pAVar20->fields).DHDPPCNPAIE;
            if (pDVar14 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pDVar17 = (pOVar16->fields).BBELCDHPJIP;
            if (pDVar17 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar6 = System_String__op_Equality
                              ((pDVar14->fields).GDPFBDIJNHA,(pDVar17->fields).GDPFBDIJNHA,
                               (MethodInfo *)0x0);
            if ((bVar6) &&
               (bVar6 = System_String__op_Equality
                                  ((pDVar14->fields).GJFJPLHCBKJ,(pDVar17->fields).GJFJPLHCBKJ,
                                   (MethodInfo *)0x0), bVar6)) {
              pOVar16 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG;
              if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              local_e8 = (pOVar16->fields).BBELCDHPJIP;
            }
            else {
              pOVar16 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG;
              if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            }
            OLKPEJMEBPJ__DPLIHJEANGE(pOVar16,false,(MethodInfo *)0x0);
            lVar18 = Method_System_Collections_Generic_List<DNELIPCHKLK>_Add__;
            pOVar16 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG;
            if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pDVar14 = (pOVar16->fields).BBELCDHPJIP;
            pSVar22 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pSVar22 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_02->fields)._size;
            if (uVar2 < (uint)pSVar22->max_length) {
              (__this_02->fields)._size = uVar2 + 1;
              pSVar22->m_Items[(int)uVar2] = (Il2CppObject *)pDVar14;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_02,(Il2CppObject *)pDVar14,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
          goto LAB_031d2f14;
        }
LAB_031d2f94:
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
        pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((pAVar20->fields).IOHEOKOOJFA == false) goto LAB_031d3268;
        if ((OOMHDDBCBJP_o *)pIVar4 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG == (OLKPEJMEBPJ_o *)0x0) &&
           (iVar9 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)pIVar4,(MethodInfo *)0x0), iVar9 == 8)
           ) {
          if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar9 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)__this_00,(MethodInfo *)0x0);
          if (((AEDJMMHJIEH != 1) || (iVar9 != 10)) ||
             (((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG == (OLKPEJMEBPJ_o *)0x0)
             ) goto LAB_031d326c;
          pMVar21 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->IAJPHAAMKPC;
          if (pMVar21 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar25 = (pMVar21->fields).DEKCPPOJFEH;
          local_94[0] = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->KIHDFNGKPGN;
          pSVar24 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->DEKCPPOJFEH;
          pSVar13 = System_UInt16__ToString((uint16_t)local_94,(MethodInfo *)0x0);
          pDVar14 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
          DNELIPCHKLK___ctor(pDVar14,pSVar25,pSVar24,pSVar13,(MethodInfo *)0x0);
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
          pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar15 = Roster__EKOLJIPEEHA(pAVar20,pDVar14,(MethodInfo *)0x0);
          if ((pPVar15 != (PAMEPBLOLPB_o *)0x0) && ((pPVar15->fields).EMDEPINBPMF != 0)) {
            pOVar16 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG;
            if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            OLKPEJMEBPJ__DPLIHJEANGE(pOVar16,false,(MethodInfo *)0x0);
            pMVar21 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->IAJPHAAMKPC;
            if (pMVar21 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = (pMVar21->fields).DEKCPPOJFEH;
            pSVar24 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->DEKCPPOJFEH;
            pDVar14 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
            DNELIPCHKLK___ctor(pDVar14,pSVar13,pSVar24,(System_String_o *)0x0,(MethodInfo *)0x0);
            lVar18 = Method_System_Collections_Generic_List<DNELIPCHKLK>_Add__;
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar22 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pSVar22 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_02->fields)._size;
            if (uVar2 < (uint)pSVar22->max_length) {
              (__this_02->fields)._size = uVar2 + 1;
              pSVar22->m_Items[(int)uVar2] = (Il2CppObject *)pDVar14;
              thunk_FUN_01c20e04(pSVar22->m_Items + (int)uVar2,pDVar14);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_02,(Il2CppObject *)pDVar14,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
          goto LAB_031d2f14;
        }
      }
      else {
LAB_031d3268:
        if ((OOMHDDBCBJP_o *)pIVar4 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
LAB_031d326c:
      if (((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG != (OLKPEJMEBPJ_o *)0x0) {
        if (AEDJMMHJIEH != 0) {
          if (AEDJMMHJIEH == 1) {
            if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG ==
                (OLKPEJMEBPJ_o *)0x0) goto LAB_031d32ac;
          }
          if (AEDJMMHJIEH != 2) goto LAB_031d2f14;
          if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG == (OLKPEJMEBPJ_o *)0x0)
          goto LAB_031d2f14;
        }
LAB_031d32ac:
        iVar9 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)pIVar4,(MethodInfo *)0x0);
        if (((iVar9 != 2) || (!EKHLOHMFNDO)) &&
           ((iVar9 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)pIVar4,(MethodInfo *)0x0), iVar9 != 8
            || (EKHLOHMFNDO)))) {
          pMVar21 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->IAJPHAAMKPC;
          if (pMVar21 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar24 = (pMVar21->fields).DEKCPPOJFEH;
          local_94[0] = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->KIHDFNGKPGN;
          pSVar25 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->DEKCPPOJFEH;
          pSVar13 = System_UInt16__ToString((uint16_t)local_94,(MethodInfo *)0x0);
          pDVar14 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
          DNELIPCHKLK___ctor(pDVar14,pSVar24,pSVar25,pSVar13,(MethodInfo *)0x0);
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
          pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar15 = Roster__EKOLJIPEEHA(pAVar20,pDVar14,(MethodInfo *)0x0);
          if ((pPVar15 != (PAMEPBLOLPB_o *)0x0) && ((pPVar15->fields).AAECGBAMDEL != 0)) {
            pOVar16 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG;
            if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar6 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar16,(MethodInfo *)0x0);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
            }
            pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (bVar6 != ((pAVar20->fields).IOHEOKOOJFA != false)) {
              pOVar16 = ((OOMHDDBCBJP_Fields *)((long)pIVar4 + 0x10))->LFJPDELEIHG;
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
              pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              OLKPEJMEBPJ__DPLIHJEANGE(pOVar16,(pAVar20->fields).IOHEOKOOJFA,(MethodInfo *)0x0);
              lVar18 = Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__;
              if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar22 = (__this_01->fields)._items;
              (__this_01->fields)._version = (__this_01->fields)._version + 1;
              if (pSVar22 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (__this_01->fields)._size;
              if (uVar2 < (uint)pSVar22->max_length) {
                (__this_01->fields)._size = uVar2 + 1;
                pSVar22->m_Items[(int)uVar2] = pIVar4;
                thunk_FUN_01c20e04(pSVar22->m_Items + (int)uVar2,pIVar4);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_01,pIVar4,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (AEDJMMHJIEH == 2) {
              if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pOVar16 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG;
              if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar6 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar16,(MethodInfo *)0x0);
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
              }
              pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (bVar6 == ((pAVar20->fields).IOHEOKOOJFA != false)) {
                pOVar16 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->LFJPDELEIHG;
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
                pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                if (pOVar16 == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                OLKPEJMEBPJ__DPLIHJEANGE
                          (pOVar16,(pAVar20->fields).IOHEOKOOJFA == false,(MethodInfo *)0x0);
                lVar18 = Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__;
                if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar22 = (__this_01->fields)._items;
                (__this_01->fields)._version = (__this_01->fields)._version + 1;
                if (pSVar22 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pSVar22->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pSVar22->m_Items[(int)uVar2] = __this_00;
                  thunk_FUN_01c20e04(pSVar22->m_Items + (int)uVar2,__this_00);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (__this_01,__this_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else if ((AEDJMMHJIEH != 1 || !EKHLOHMFNDO) ||
                    ((iVar9 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)pIVar4,(MethodInfo *)0x0),
                     iVar9 != 8 &&
                     (iVar9 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)pIVar4,(MethodInfo *)0x0),
                     iVar9 != 0x15)))) {
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
              pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pMVar21 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->IAJPHAAMKPC;
              if (pMVar21 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (pAVar20->fields).IOHEOKOOJFA;
              pSVar13 = (pMVar21->fields).DEKCPPOJFEH;
              pSVar24 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->DEKCPPOJFEH;
              pDVar14 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
              DNELIPCHKLK___ctor(pDVar14,pSVar13,pSVar24,(System_String_o *)0x0,(MethodInfo *)0x0);
              if (bVar5 == false) {
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
                pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                if ((pAVar20->fields).IOHEOKOOJFA != false) {
                  *EEGPOPMGFED = pDVar14;
                  thunk_FUN_01c20e04();
                }
              }
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
              pMVar21 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->IAJPHAAMKPC;
              if (pMVar21 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar24 = (pMVar21->fields).DEKCPPOJFEH;
              local_94[0] = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->KIHDFNGKPGN;
              pSVar25 = ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->DEKCPPOJFEH;
              pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              pSVar13 = System_UInt16__ToString((uint16_t)local_94,(MethodInfo *)0x0);
              pDVar17 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
              DNELIPCHKLK___ctor(pDVar17,pSVar24,pSVar25,pSVar13,(MethodInfo *)0x0);
              if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pPVar15 = Roster__EKOLJIPEEHA(pAVar20,pDVar17,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                if (pPVar15 == (PAMEPBLOLPB_o *)0x0) goto LAB_031d39f8;
LAB_031d39c0:
                iVar9 = (pPVar15->fields).AAECGBAMDEL;
              }
              else {
                if (pPVar15 != (PAMEPBLOLPB_o *)0x0) goto LAB_031d39c0;
LAB_031d39f8:
                iVar9 = 0;
              }
              pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              method_00 = (MethodInfo *)0x1;
              Roster__OIMBEHKPFIC
                        (pAVar20,pDVar14,true,true,false,bVar1 == false,iVar9,(MethodInfo *)0x0);
              bVar6 = MKIBNAAANPO__ALPHLMLJFJJ(__this_03,BHHBEIACGPB,method_00);
              ((OOMHDDBCBJP_Fields *)((long)__this_00 + 0x10))->HHDBIGKBMEC = true;
              lVar18 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = FUN_01b81620();
              }
              lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = FUN_01b81620();
              }
              pUVar23 = (UnityEngine_Object_o *)**(undefined8 **)(lVar18 + 0xb8);
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar7 = UnityEngine_Object__op_Implicit(pUVar23,(MethodInfo *)0x0);
              bVar8 = true;
              if (bVar7) {
                bVar8 = true;
                bVar7 = !bVar3;
                bVar3 = true;
                if (bVar7) {
                  bVar7 = MKIBNAAANPO__ALPHLMLJFJJ((MKIBNAAANPO_o *)0x1,BHHBEIACGPB,method_00);
                  lVar18 = Method_System_Collections_Generic_List<DNELIPCHKLK>_Add__;
                  bVar8 = true;
                  bVar3 = true;
                  if (bVar6 == bVar7) {
                    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar22 = (__this_02->fields)._items;
                    (__this_02->fields)._version = (__this_02->fields)._version + 1;
                    if (pSVar22 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    uVar2 = (__this_02->fields)._size;
                    if (uVar2 < (uint)pSVar22->max_length) {
                      (__this_02->fields)._size = uVar2 + 1;
                      pSVar22->m_Items[(int)uVar2] = (Il2CppObject *)pDVar14;
                      bVar8 = true;
                      thunk_FUN_01c20e04(pSVar22->m_Items + (int)uVar2,pDVar14);
                      bVar3 = false;
                    }
                    else {
                      bVar8 = true;
                      System_Collections_Generic_List<object>__AddWithResize
                                (__this_02,(Il2CppObject *)pDVar14,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                      bVar3 = false;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_031d2f14;
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<OOMHDDBCBJP,_OOMHDDBCBJP>_Dispose__
              );
    if (bVar8) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_04 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_04 == (NLPJLHOEAOE_o *)0x0) goto LAB_031d3f0c;
      NLPJLHOEAOE__FDFHMHPOHKA(__this_04,(MethodInfo *)0x0);
    }
    lVar18 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_01b81620();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_01b81620();
    }
    pUVar23 = (UnityEngine_Object_o *)**(undefined8 **)(lVar18 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar8 = UnityEngine_Object__op_Implicit(pUVar23,(MethodInfo *)0x0);
    if (!bVar3 && ((bVar8 ^ 0xffU) & 1) == 0) {
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031d3f0c;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_d8,__this_01,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_b0.fields._index = local_d8.fields._version;
      local_b0.fields._version = local_d8.fields._index;
      local_b0.fields._list = (System_Collections_Generic_List_T__o *)local_d8.fields._dictionary;
      local_b0.fields._current = local_d8.fields._current.fields.key;
      while (bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_b0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), pIVar4 = local_b0.fields._current, bVar8) {
        lVar18 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01b81620();
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar18 + 0xb8) ==
            (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_Map_MapScene__UpdateBattleButtonHidden
                  ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar18 + 0xb8),
                   (OOMHDDBCBJP_o *)pIVar4,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_b0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
      if (AEDJMMHJIEH == 1) {
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
        pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar20 == (Roster_o *)0x0) goto LAB_031d3f0c;
        bVar5 = ((pAVar20->fields).IOHEOKOOJFA & bVar5) != 0;
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
        pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar20 == (Roster_o *)0x0) goto LAB_031d3f0c;
        bVar8 = (pAVar20->fields).IOHEOKOOJFA == false;
      }
      else {
        bVar5 = false;
        bVar8 = true;
      }
      if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031d3f0c;
      iVar19 = (__this_02->fields)._size;
      if (0 < iVar19) {
        index = 0;
        do {
          if ((bool)(bVar5 & index == iVar19 + -1)) {
            bVar6 = true;
          }
          else {
            pDVar14 = (DNELIPCHKLK_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_02,index,
                                 Method_System_Collections_Generic_List<DNELIPCHKLK>_get_Item__);
            bVar6 = local_e8 == pDVar14;
          }
          lVar18 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_01b81620();
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_01b81620();
          }
          __this_05 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar18 + 0xb8);
          pDVar14 = (DNELIPCHKLK_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (__this_02,index,
                               Method_System_Collections_Generic_List<DNELIPCHKLK>_get_Item__);
          if (__this_05 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_031d3f0c;
          Nekki_SF2_GUI_Map_MapScene__ActiveBattleByFightIDS
                    (__this_05,pDVar14,true,bVar6,bVar8,(MethodInfo *)0x0);
          iVar19 = (__this_02->fields)._size;
          index = index + 1;
        } while (index < iVar19);
      }
    }
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
    pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar20 == (Roster_o *)0x0) {
LAB_031d3f0c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar20,false,(MethodInfo *)0x0);
  }
  return bVar3;
}


// ===== public bool ALPHLMLJFJJ(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x30D4290]
// MKIBNAAANPO$$ALPHLMLJFJJ @ RVA 0x30D4290

bool MKIBNAAANPO__ALPHLMLJFJJ(MKIBNAAANPO_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  int index;
  
  if ((DAT_0456631c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    __this = (MKIBNAAANPO_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_0456631c = 1;
  }
  if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
    __this_00 = (BHHBEIACGPB->fields).BDCBJJGNPMC;
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      if ((__this_00->fields)._size < 1) {
        return false;
      }
      index = 0;
      while( true ) {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
        __this = (MKIBNAAANPO_o *)0x0;
        if (pIVar1 == (Il2CppObject *)0x0) break;
        if ((*(char *)&pIVar1[0xb].klass != '\0') ||
           (index = index + 1, (__this_00->fields)._size <= index)) {
          return *(char *)&pIVar1[0xb].klass != '\0';
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x30D4338]
// MKIBNAAANPO$$.ctor @ RVA 0x30D4338

void MKIBNAAANPO___ctor(MKIBNAAANPO_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456631d & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_0456631d = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).BNAIPPCOGPE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void CMHINFFLEDJ(MKIBNAAANPO.AJLHACNHDHD AEDJMMHJIEH, bool GEOCJFAJLHD)  [RVA 0x30D43A4]
// MKIBNAAANPO$$CMHINFFLEDJ @ RVA 0x30D43A4

void MKIBNAAANPO__CMHINFFLEDJ
               (MKIBNAAANPO_o *__this,int32_t AEDJMMHJIEH,bool GEOCJFAJLHD,MethodInfo *method)

{
  Il2CppObject *BHHBEIACGPB;
  bool bVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  Roster_o *pAVar2;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar3;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  DNELIPCHKLK_o *local_48;
  
  if ((DAT_0456631e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_5623/*"EclipseModeReplayTutorialBattle"*/);
    FUN_01bab630(&StringLiteral_15957/*"_EclipseModeReplayTutorialBattle"*/);
    DAT_0456631e = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_48 = (DNELIPCHKLK_o *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
      BHHBEIACGPB = local_70.fields._current;
      if (!bVar1) break;
      bVar1 = MKIBNAAANPO__BHNHPKAALOC((MethodInfo *)(ulong)bVar1);
      MKIBNAAANPO__FMELMDFPPHI
                (__this,(MEJIKMPNBNL_o *)BHHBEIACGPB,bVar1,&local_48,AEDJMMHJIEH,in_x5);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    if (local_48 == (DNELIPCHKLK_o *)0x0) {
      return;
    }
    if (!GEOCJFAJLHD) {
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
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar2 == (Roster_o *)0x0) goto LAB_031d4608;
      pMVar3 = Roster__HKIEGNBOFCD(pAVar2,StringLiteral_15957/*"_EclipseModeReplayTutorialBattle"*/,0,(MethodInfo *)0x0);
      if ((pMVar3 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) &&
         (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar3->fields).JAICMIMBIOA,(MethodInfo *)0x0), !bVar1))
      {
        return;
      }
    }
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
    if (local_48 != (DNELIPCHKLK_o *)0x0) {
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      CJNHFNHJHPE = (System_String_o *)
                    (*(local_48->klass->vtable)._3_ToString.methodPtr)
                              (local_48,(local_48->klass->vtable)._3_ToString.method);
      if (pAVar2 != (Roster_o *)0x0) {
        Roster__LMJFPPDAPBF(pAVar2,StringLiteral_5623/*"EclipseModeReplayTutorialBattle"*/,CJNHFNHJHPE,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_031d4608:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool BHNHPKAALOC()  [RVA 0x30D2AE0]
// MKIBNAAANPO$$BHNHPKAALOC @ RVA 0x30D2AE0

bool MKIBNAAANPO__BHNHPKAALOC(MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *__this;
  PAMEPBLOLPB_o *pPVar2;
  Roster_o *__this_00;
  
  if ((DAT_0456631f & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15251/*"ZONE_6|FINAL_BATTLE|1"*/);
    DAT_0456631f = 1;
  }
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  __this = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this,StringLiteral_15251/*"ZONE_6|FINAL_BATTLE|1"*/,(MethodInfo *)0x0);
  if (__this_00 != (Roster_o *)0x0) {
    pPVar2 = Roster__EKOLJIPEEHA(__this_00,__this,(MethodInfo *)0x0);
    bVar1 = false;
    if (pPVar2 != (PAMEPBLOLPB_o *)0x0) {
      bVar1 = 0 < (pPVar2->fields).AAECGBAMDEL;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

