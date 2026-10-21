// TypeDefIndex 1368
// Namespace: 
// public class NFGLEDADCGL
// Fields:
//   private XmlNode HJKLIDCAEOE; // 0x10
//   private XmlNode EOOGFNAAAHJ; // 0x18
//   private XmlNode LIIKBPHKNNG; // 0x20
//   private List<HNFFPPPDKDK> PEJIOCBFEEE; // 0x28
//   public KJBGNIGNECD GMHDPMNODMF; // 0x30
//   protected ModelParameters MFLNIMCFPDK; // 0x38

// ===== public void MIDDOHLPNMM(HNFFPPPDKDK CJNHFNHJHPE, bool KJDBEMABBEG = False, bool AFBFJKELDIJ = True)  [RVA 0x316AAD8]
// NFGLEDADCGL$$MIDDOHLPNMM @ RVA 0x316AAD8

void NFGLEDADCGL__MIDDOHLPNMM
               (NFGLEDADCGL_o *__this,HNFFPPPDKDK_o *CJNHFNHJHPE,bool KJDBEMABBEG,bool AFBFJKELDIJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar6;
  FOKJBDHLIMG_o *pFVar7;
  Il2CppClass *pIVar8;
  Il2CppType *pIVar9;
  HNFFPPPDKDK_array *pHVar10;
  Il2CppClass *method_00;
  System_Collections_Generic_List_HNFFPPPDKDK__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045668f1 & 1) == 0) {
    FUN_01bab630(&Method_NFGLEDADCGL_DOFIGFOJIMM_MLGONBOLIBP__);
    FUN_01bab630(&NFGLEDADCGL_DOFIGFOJIMM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Remove__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Predicate<HNFFPPPDKDK>_TypeInfo);
    DAT_045668f1 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(NFGLEDADCGL_DOFIGFOJIMM_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar4,CJNHFNHJHPE);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar7 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
    if ((pFVar7 != (FOKJBDHLIMG_o *)0x0) &&
       (pSVar5 = (pFVar7->fields).ODLBEHFGJJE,
       pSVar5 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                               ), pIVar6 = local_80.fields._current, bVar3) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_80.fields._current[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__Equals
                          ((System_String_o *)local_80.fields._current[4].klass,
                           (System_String_o *)(pIVar4->klass->_1).namespaze,(MethodInfo *)0x0);
        pIVar8 = pIVar4->klass;
        if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (bVar3 && *(int *)&pIVar6[7].monitor == *(int *)((long)&(pIVar8->_1).name + 4)) {
          pIVar9 = &(pIVar8->_1).byval_arg;
          pIVar9->data = pIVar6;
          thunk_FUN_01c20e04(pIVar9,pIVar6);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__)
      ;
      if (pIVar4->klass != (Il2CppClass *)0x0) {
        if ((pIVar4->klass->_1).byval_arg.data == (void *)0x0) {
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pFVar7 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
          if ((pFVar7 == (FOKJBDHLIMG_o *)0x0) ||
             (pSVar5 = (pFVar7->fields).CNLHOAHDHCF,
             pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_0326afa4;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                     Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_80,
                                    Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                                   ), pIVar6 = local_80.fields._current, bVar3) {
            if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (local_80.fields._current[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = System_String__Equals
                              ((System_String_o *)local_80.fields._current[4].klass,
                               (System_String_o *)(pIVar4->klass->_1).namespaze,(MethodInfo *)0x0);
            pIVar8 = pIVar4->klass;
            if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (bVar3 && *(int *)&pIVar6[7].monitor == *(int *)((long)&(pIVar8->_1).name + 4)) {
              pIVar9 = &(pIVar8->_1).byval_arg;
              pIVar9->data = pIVar6;
              thunk_FUN_01c20e04(pIVar9,pIVar6);
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
        }
        if (pIVar4->klass != (Il2CppClass *)0x0) {
          if (((pIVar4->klass->_1).byval_arg.data == (void *)0x0) && (AFBFJKELDIJ)) {
            if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0326adb8 to 0336b123 has its CatchHandler @ 0326adb8
                       catch() { ... } // from try @ 0326adb8 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b1a8 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b4f0 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b4f8 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b59c with catch @ 0326adb8 */
            pFVar7 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
            if ((pFVar7 == (FOKJBDHLIMG_o *)0x0) ||
               (pSVar5 = (pFVar7->fields).FLADBMFBNIH,
               pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_0326afa4;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                       Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
            local_80.fields._index = local_98.fields._index;
            local_80.fields._version = local_98.fields._version;
            local_80.fields._list = local_98.fields._list;
            local_80.fields._current = local_98.fields._current;
            while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_80,
                                      Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                                     ), pIVar6 = local_80.fields._current, bVar3) {
              if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (local_80.fields._current[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar3 = System_String__Equals
                                ((System_String_o *)local_80.fields._current[4].klass,
                                 (System_String_o *)(pIVar4->klass->_1).namespaze,(MethodInfo *)0x0)
              ;
              if (bVar3) {
                if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar9 = &(pIVar4->klass->_1).byval_arg;
                pIVar9->data = pIVar6;
                thunk_FUN_01c20e04(pIVar9,pIVar6);
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
          }
          if (pIVar4->klass != (Il2CppClass *)0x0) {
            if ((pIVar4->klass->_1).byval_arg.data == (void *)0x0) {
              return;
            }
            pSVar11 = (__this->fields).PEJIOCBFEEE;
            match = (System_Predicate_T__o *)
                    thunk_FUN_01bda818(System_Predicate<HNFFPPPDKDK>_TypeInfo);
            System_Predicate<object>___ctor();
            if (pSVar11 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
              pIVar6 = System_Collections_Generic_List<object>__Find
                                 ((System_Collections_Generic_List_object__o *)pSVar11,match,
                                  Method_System_Collections_Generic_List<HNFFPPPDKDK>_Find__);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pSVar11 = (__this->fields).PEJIOCBFEEE;
                if (pSVar11 == (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0)
                goto LAB_0326afa4;
                System_Collections_Generic_List<object>__Remove
                          ((System_Collections_Generic_List_object__o *)pSVar11,pIVar6,
                           Method_System_Collections_Generic_List<HNFFPPPDKDK>_Remove__);
              }
              lVar2 = Method_System_Collections_Generic_List<HNFFPPPDKDK>_Add__;
              pSVar11 = (__this->fields).PEJIOCBFEEE;
              if (pSVar11 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
                pIVar8 = pIVar4->klass;
                if (KJDBEMABBEG) {
                  System_Collections_Generic_List<object>__Insert
                            ((System_Collections_Generic_List_object__o *)pSVar11,0,
                             (Il2CppObject *)pIVar8,
                             Method_System_Collections_Generic_List<HNFFPPPDKDK>_Insert__);
                  method_00 = pIVar8;
                }
                else {
                  pHVar10 = (pSVar11->fields)._items;
                  (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                  if (pHVar10 == (HNFFPPPDKDK_array *)0x0) goto LAB_0326afa4;
                  uVar1 = (pSVar11->fields)._size;
                  if (uVar1 < (uint)pHVar10->max_length) {
                    (pSVar11->fields)._size = uVar1 + 1;
                    pHVar10->m_Items[(int)uVar1] = (HNFFPPPDKDK_o *)pIVar8;
                    thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar1,pIVar8);
                    method_00 = pIVar8;
                  }
                  else {
                    method_00 = *(Il2CppClass **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar11,
                               (Il2CppObject *)pIVar8,(MethodInfo_26E4DAC *)method_00);
                  }
                }
                if (pIVar4->klass != (Il2CppClass *)0x0) {
                  NFGLEDADCGL__BJPAKLCFKPK
                            (__this,(pIVar4->klass->_1).byval_arg.data,(MethodInfo *)method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0326afa4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HNFFPPPDKDK MCGJLCLKDNP(string KGLJICLJHEL)  [RVA 0x316B1C8]
// NFGLEDADCGL$$MCGJLCLKDNP @ RVA 0x316B1C8

HNFFPPPDKDK_o *
NFGLEDADCGL__MCGJLCLKDNP(NFGLEDADCGL_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  HNFFPPPDKDK_o *pHVar2;
  int index;
  
  if ((DAT_045668f2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_get_Item__);
    DAT_045668f2 = 1;
  }
  __this_00 = (__this->fields).PEJIOCBFEEE;
  if (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (HNFFPPPDKDK_o *)0x0;
      }
      pHVar2 = (HNFFPPPDKDK_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<HNFFPPPDKDK>_get_Item__);
      if (pHVar2 == (HNFFPPPDKDK_o *)0x0) break;
      bVar1 = System_String__op_Equality((pHVar2->fields).DEKCPPOJFEH,KGLJICLJHEL,(MethodInfo *)0x0)
      ;
      if (bVar1) {
        return pHVar2;
      }
      __this_00 = (__this->fields).PEJIOCBFEEE;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BJPAKLCFKPK(PerkInfoItem CJNHFNHJHPE)  [RVA 0x316B108]
// NFGLEDADCGL$$BJPAKLCFKPK @ RVA 0x316B108

void NFGLEDADCGL__BJPAKLCFKPK(NFGLEDADCGL_o *__this,PerkInfoItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  ModelParameters_o *pPVar3;
  PerkInfoItem_array *pHVar4;
  
  if ((DAT_045668f3 & 1) == 0) {
                    /* try { // try from 0326b124 to 0336b14b has its CatchHandler @ 0326b510 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    DAT_045668f3 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
  pPVar3 = (__this->fields).MFLNIMCFPDK;
  if (pPVar3 != (ModelParameters_o *)0x0) {
    __this_00 = (pPVar3->fields).EHDILMGPDDN;
    if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      pHVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pHVar4 != (PerkInfoItem_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pHVar4->max_length) {
                    /* try { // try from 0326b180 to 0336b1a7 has its CatchHandler @ 0326b50c */
          (__this_00->fields)._size = uVar1 + 1;
          pHVar4->m_Items[(int)uVar1] = CJNHFNHJHPE;
          thunk_FUN_01c20e04(pHVar4->m_Items + (int)uVar1,CJNHFNHJHPE);
          return;
        }
                    /* try { // try from 0326b1a8 to 0336b4eb has its CatchHandler @ 0326adb8 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)CJNHFNHJHPE,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public List<HNFFPPPDKDK> HJPPLCKHIKK()  [RVA 0x316B278]
// NFGLEDADCGL$$HJPPLCKHIKK @ RVA 0x316B278

System_Collections_Generic_List_HNFFPPPDKDK__o *
NFGLEDADCGL__HJPPLCKHIKK(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  return (__this->fields).PEJIOCBFEEE;
}


// ===== public int DBOOGGKPPIP()  [RVA 0x316B280]
// NFGLEDADCGL$$DBOOGGKPPIP @ RVA 0x316B280

int32_t NFGLEDADCGL__DBOOGGKPPIP(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *__this_00;
  EPFMFHDGMCE_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  KJBGNIGNECD_o *pKVar2;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *pSVar3;
  
  if ((DAT_045668f4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668f4 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  iVar1 = 0;
  if (__this_00 != (Roster_o *)0x0) {
    iVar1 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    pKVar2 = (__this->fields).GMHDPMNODMF;
    if (((pKVar2 != (KJBGNIGNECD_o *)0x0) &&
        ((pKVar2->fields).GJBLBEALOBO !=
         (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0)) &&
       (__this_01 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0), iVar1 = 0,
       __this_01 != (EPFMFHDGMCE_o *)0x0)) {
      iVar1 = EPFMFHDGMCE__KHPKOIMEPBK(__this_01,(MethodInfo *)0x0);
      pKVar2 = (__this->fields).GMHDPMNODMF;
      if ((pKVar2 != (KJBGNIGNECD_o *)0x0) &&
         (pSVar3 = (pKVar2->fields).GJBLBEALOBO,
         pSVar3 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0)) {
        return iVar1 - (pSVar3->fields)._size;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar1);
}


// ===== private void FIGJPOMPAON(PerkInfoItem CJNHFNHJHPE)  [RVA 0x316B364]
// NFGLEDADCGL$$FIGJPOMPAON @ RVA 0x316B364

void NFGLEDADCGL__FIGJPOMPAON(NFGLEDADCGL_o *__this,PerkInfoItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  ModelParameters_o *pPVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar3;
  
  if ((DAT_045668f5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
    FUN_01bab630(&Method_NFGLEDADCGL_NDBMHJDBGEB_LEKDAOFBGHP__);
    FUN_01bab630(&NFGLEDADCGL_NDBMHJDBGEB_TypeInfo);
    FUN_01bab630(&System_Predicate<PerkInfoItem>_TypeInfo);
    DAT_045668f5 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(NFGLEDADCGL_NDBMHJDBGEB_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = (Il2CppClass *)CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar1,CJNHFNHJHPE);
    pPVar2 = (__this->fields).MFLNIMCFPDK;
    if ((pPVar2 == (ModelParameters_o *)0x0) || (pIVar1->klass == (Il2CppClass *)0x0)) {
      return;
    }
    pSVar3 = (pPVar2->fields).EHDILMGPDDN;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<PerkInfoItem>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar3,match,
                          Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
      if (pIVar1 == (Il2CppObject *)0x0) {
        return;
      }
      pPVar2 = (__this->fields).MFLNIMCFPDK;
      if ((pPVar2 != (ModelParameters_o *)0x0) &&
         (pSVar3 = (pPVar2->fields).EHDILMGPDDN,
         pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar3,pIVar1,
                   Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int PHLAMLIGMHG()  [RVA 0x316B4A8]
// NFGLEDADCGL$$PHLAMLIGMHG @ RVA 0x316B4A8

int32_t NFGLEDADCGL__PHLAMLIGMHG(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar2;
  
  if ((DAT_045668f6 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10237/*"Perk_Reset"*/);
    DAT_045668f6 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0326b4ec to 0336b4ef has its CatchHandler @ 0326b508 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0326b4f0 to 0336b4f3 has its CatchHandler @ 0326adb8 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 0326b4f4 to 0336b4f7 has its CatchHandler @ 0326b500 */
                    /* try { // try from 0326b4f8 to 0336b51f has its CatchHandler @ 0326adb8 */
  if (DAT_04565b7d == '\0') {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b4f4 with catch @ 0326b500
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b4ec with catch @ 0326b508
                        */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b180 with catch @ 0326b50c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b124 with catch @ 0326b510
                        */
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0326b520 to 0336b523 has its CatchHandler @ 0326b53c */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar2 != (Roster_o *)0x0) &&
     (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
                    /* catch() { ... } // from try @ 0326b520 with catch @ 0326b53c */
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,StringLiteral_10237/*"Perk_Reset"*/,(MethodInfo *)0x0);
    if (__this_01 != (IGFGDDANEPE_o *)0x0) {
      iVar1 = IGFGDDANEPE__LDJLMEFOMLG(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HNFFPPPDKDK DMCFMJJKIDN(JLGNBOILFLN EIKFGOCCOIE)  [RVA 0x316B574]
// NFGLEDADCGL$$DMCFMJJKIDN @ RVA 0x316B574

HNFFPPPDKDK_o *
NFGLEDADCGL__DMCFMJJKIDN(NFGLEDADCGL_o *__this,JLGNBOILFLN_o *EIKFGOCCOIE,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_01;
  System_String_o *pSVar5;
  System_Xml_XmlNode_o *pSVar6;
  long lVar7;
  System_Xml_XmlElement_o *pSVar8;
  PerkInfoItem_o **ppHVar9;
  HNFFPPPDKDK_o *__this_02;
  MethodInfo *in_x3;
  System_String_o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 0326b574 to 0336b59b has its CatchHandler @ 0326b5b0 */
                    /* try { // try from 0326b59c to 0336b5a7 has its CatchHandler @ 0326adb8 */
  if ((DAT_045668f7 & 1) == 0) {
                    /* try { // try from 0326b5a8 to 0336b5af has its CatchHandler @ 0326b5b0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326b574 with catch @ 0326b5b0
                       catch(type#2 @ 00000000) { ... } // from try @ 0326b5a8 with catch @ 0326b5b0
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&HNFFPPPDKDK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045668f7 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEJIOCBFEEE;
  if (__this_01 == (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
LAB_0326b85c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    __this_00 = local_70.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      pSVar10 = StringLiteral_10239/*"Perks"*/;
      pSVar5 = StringLiteral_10213/*"Perk"*/;
      pSVar6 = (__this->fields).HJKLIDCAEOE;
      if (pSVar6 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326b85c;
      lVar7 = (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar6,StringLiteral_10239/*"Perks"*/,(pSVar6->klass->vtable)._51_get_Item.method);
      pSVar6 = (__this->fields).HJKLIDCAEOE;
      if (lVar7 == 0) {
        pSVar8 = EIABCPKDEBD__BHPIHHJHELJ(pSVar6,pSVar10,(MethodInfo *)0x0);
      }
      else {
        if (pSVar6 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326b85c;
        pSVar8 = (System_Xml_XmlElement_o *)
                 (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar6,pSVar10,(pSVar6->klass->vtable)._51_get_Item.method);
      }
      pSVar8 = EIABCPKDEBD__BHPIHHJHELJ((System_Xml_XmlNode_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
      __this_02 = (HNFFPPPDKDK_o *)thunk_FUN_01bda818(HNFFPPPDKDK_TypeInfo);
      HNFFPPPDKDK___ctor(__this_02,(System_Xml_XmlNode_o *)pSVar8,(MethodInfo *)0x0);
      if ((EIKFGOCCOIE != (JLGNBOILFLN_o *)0x0) && (__this_02 != (HNFFPPPDKDK_o *)0x0)) {
        HNFFPPPDKDK__AKJBHHAHMPG(__this_02,(EIKFGOCCOIE->fields).GHPHFGBIPCI,(MethodInfo *)0x0);
        pSVar5 = JLGNBOILFLN__GKMAFGODLLG(EIKFGOCCOIE,(MethodInfo *)0x0);
        HNFFPPPDKDK__HCOCAAIGNNL(__this_02,pSVar5,(MethodInfo *)0x0);
        iVar4 = JLGNBOILFLN__BCLMIPIBLLB(EIKFGOCCOIE,(MethodInfo *)0x0);
        if (0 < iVar4) {
          HNFFPPPDKDK__DJJHOOKLHHL(__this_02,iVar4,(MethodInfo *)0x0);
        }
        NFGLEDADCGL__NHAIEGLJKMK(__this,__this_02,EIKFGOCCOIE,in_x3);
        return __this_02;
      }
      goto LAB_0326b85c;
    }
    if ((HNFFPPPDKDK_o *)local_70.fields._current == (HNFFPPPDKDK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (EIKFGOCCOIE == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = ((HNFFPPPDKDK_Fields *)((long)local_70.fields._current + 0x10))->DEKCPPOJFEH;
    pSVar5 = JLGNBOILFLN__GKMAFGODLLG(EIKFGOCCOIE,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar10,pSVar5,(MethodInfo *)0x0);
    iVar1 = (EIKFGOCCOIE->fields).JDNKKGPNHPB;
    pSVar5 = JLGNBOILFLN__GKMAFGODLLG(EIKFGOCCOIE,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (bVar2 && iVar1 == 2) break;
    if (bVar2 || bVar3) {
LAB_0326b778:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      return (HNFFPPPDKDK_o *)__this_00;
    }
  }
  iVar4 = JLGNBOILFLN__BCLMIPIBLLB(EIKFGOCCOIE,(MethodInfo *)0x0);
  if (0 < iVar4) {
    HNFFPPPDKDK__DJJHOOKLHHL((HNFFPPPDKDK_o *)__this_00,iVar4,(MethodInfo *)0x0);
  }
  ppHVar9 = &((HNFFPPPDKDK_Fields *)((long)__this_00 + 0x10))->_CGEGGOPIPHH_k__BackingField;
  *ppHVar9 = (PerkInfoItem_o *)0x0;
  thunk_FUN_01c20e04(ppHVar9,0);
  NFGLEDADCGL__NHAIEGLJKMK(__this,(HNFFPPPDKDK_o *)__this_00,EIKFGOCCOIE,in_x3);
  goto LAB_0326b778;
}


// ===== public void .ctor(ModelParameters OKBIKHHKOEN)  [RVA 0x316B9C8]
// NFGLEDADCGL$$.ctor @ RVA 0x316B9C8

void NFGLEDADCGL___ctor(NFGLEDADCGL_o *__this,ModelParameters_o *OKBIKHHKOEN,MethodInfo *method)

{
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  System_Collections_Generic_List_HNFFPPPDKDK__o **ppSVar1;
  KJBGNIGNECD_o *__this_01;
  KJBGNIGNECD_o **ppKVar2;
  ModelParameters_o **ppPVar3;
  
  if ((DAT_045668f8 & 1) == 0) {
    FUN_01bab630(&KJBGNIGNECD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HNFFPPPDKDK>_TypeInfo);
    DAT_045668f8 = 1;
  }
  __this_00 = (System_Collections_Generic_List_HNFFPPPDKDK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HNFFPPPDKDK>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HNFFPPPDKDK>__ctor__);
  ppSVar1 = &(__this->fields).PEJIOCBFEEE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (KJBGNIGNECD_o *)thunk_FUN_01bda818(KJBGNIGNECD_TypeInfo);
  KJBGNIGNECD___ctor(__this_01,(MethodInfo *)0x0);
  ppKVar2 = &(__this->fields).GMHDPMNODMF;
  *ppKVar2 = __this_01;
  thunk_FUN_01c20e04(ppKVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppPVar3 = &(__this->fields).MFLNIMCFPDK;
  *ppPVar3 = OKBIKHHKOEN;
  thunk_FUN_01c20e04(ppPVar3,OKBIKHHKOEN);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x316BAA4]
// NFGLEDADCGL$$HNIHOIAMDPC @ RVA 0x316BAA4

/* WARNING: Removing unreachable block (ram,0x0326bf70) */
/* WARNING: Removing unreachable block (ram,0x0326bea4) */

void NFGLEDADCGL__HNIHOIAMDPC
               (NFGLEDADCGL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlNode_o *pSVar6;
  KJBGNIGNECD_o *__this_00;
  long *plVar7;
  undefined8 *puVar8;
  HNFFPPPDKDK_o *__this_01;
  MethodInfo *in_x4;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  System_Xml_XmlNode_o **ppSVar12;
  
  if ((DAT_045668f9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6499);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6500);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6501);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6502);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6503);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6504);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HNFFPPPDKDK_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045668f9 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  (__this->fields).HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(&__this->fields,AHDGNOJPPIB);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6499,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6500,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,pSVar5,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  ppSVar12 = &(__this->fields).LIIKBPHKNNG;
  *ppSVar12 = pSVar6;
  thunk_FUN_01c20e04(ppSVar12,pSVar6);
  __this_00 = (__this->fields).GMHDPMNODMF;
  if (__this_00 != (KJBGNIGNECD_o *)0x0) {
    KJBGNIGNECD__HNIHOIAMDPC(__this_00,(__this->fields).LIIKBPHKNNG,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6501,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6502,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar6 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,pSVar5,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    ppSVar12 = &(__this->fields).EOOGFNAAAHJ;
    *ppSVar12 = pSVar6;
    thunk_FUN_01c20e04(ppSVar12,pSVar6);
    pSVar6 = *ppSVar12;
    if (pSVar6 == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    plVar7 = (long *)(*(pSVar6->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (pSVar6,(pSVar6->klass->vtable)._13_get_ChildNodes.method);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = false;
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0326bd34;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326bd34:
        uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar10 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_0326be98;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_0326be70;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0326be58;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0326bd94;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326bd94:
        pSVar6 = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        __this_01 = (HNFFPPPDKDK_o *)thunk_FUN_01bda818(HNFFPPPDKDK_TypeInfo);
        if (pSVar6 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
             ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar6);
          }
        }
        HNFFPPPDKDK___ctor(__this_01,pSVar6,(MethodInfo *)0x0);
        NFGLEDADCGL__MIDDOHLPNMM(__this,__this_01,false,false,in_x4);
        if (__this_01 == (HNFFPPPDKDK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = (bool)(bVar2 | (__this_01->fields)._CGEGGOPIPHH_k__BackingField ==
                               (PerkInfoItem_o *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0326be58:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0326be8c;
    }
  }
LAB_0326be70:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0326be8c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0326be98:
  if (!bVar2) {
    return;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6503,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6504,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  return;
}


// ===== public void CBDBJOIFHPC(KJBGNIGNECD.AHICALNEICM EIKFGOCCOIE)  [RVA 0x316C054]
// NFGLEDADCGL$$CBDBJOIFHPC @ RVA 0x316C054

void NFGLEDADCGL__CBDBJOIFHPC
               (NFGLEDADCGL_o *__this,KJBGNIGNECD_AHICALNEICM_o *EIKFGOCCOIE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_String_o *pSVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  Roster_o *__this_00;
  
  if ((DAT_045668fa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11691/*"Save "*/);
    FUN_01bab630(&StringLiteral_10223/*"PerkHistory"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_045668fa = 1;
  }
  if (EIKFGOCCOIE == (KJBGNIGNECD_AHICALNEICM_o *)0x0) {
    return;
  }
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(pSVar1->klass->vtable)._8_unknown.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._8_unknown.method);
    pSVar2 = System_String__Concat(StringLiteral_11691/*"Save "*/,pSVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).HJKLIDCAEOE;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlElement_o *)
               (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                         (pSVar1,StringLiteral_10223/*"PerkHistory"*/,(pSVar1->klass->vtable)._51_get_Item.method);
      if (pSVar3 == (System_Xml_XmlElement_o *)0x0) {
        pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                           ((__this->fields).HJKLIDCAEOE,StringLiteral_10223/*"PerkHistory"*/,(MethodInfo *)0x0);
      }
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      pSVar2 = System_Int32__ToString((int)EIKFGOCCOIE + 0x18,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar2,(pSVar4->klass->vtable)._10_set_Value.method);
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                           ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
        if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar4,(EIKFGOCCOIE->fields).JIJLBFGKNJK,
                     (pSVar4->klass->vtable)._10_set_Value.method);
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
          if (__this_00 != (Roster_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NHAIEGLJKMK(HNFFPPPDKDK HPLHPPKHDHK, KINHGEBKOEG AOPFMKPGGNA)  [RVA 0x316C26C]
// NFGLEDADCGL$$NHAIEGLJKMK @ RVA 0x316C26C

void NFGLEDADCGL__NHAIEGLJKMK
               (NFGLEDADCGL_o *__this,HNFFPPPDKDK_o *HPLHPPKHDHK,KINHGEBKOEG_o *AOPFMKPGGNA,
               MethodInfo *method)

{
  Roster_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  method_00 = (MethodInfo *)AOPFMKPGGNA;
  if ((DAT_045668fb & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668fb = 1;
  }
  if (AOPFMKPGGNA != (KINHGEBKOEG_o *)0x0) {
    NFGLEDADCGL__FIGJPOMPAON(__this,(AOPFMKPGGNA->fields).ILEGAKGGJKI,method_00);
    if (HPLHPPKHDHK != (HNFFPPPDKDK_o *)0x0) {
      NFGLEDADCGL__MIDDOHLPNMM(__this,HPLHPPKHDHK,true,true,in_x4);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0326c2f0 to 0336c2f7 has its CatchHandler @ 0326c3f4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 0326c304 to 0336c30b has its CatchHandler @ 0326c3f0 */
                    /* try { // try from 0326c30c to 0336c40b has its CatchHandler @ 0326bf98 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NHAIEGLJKMK(HNFFPPPDKDK HPLHPPKHDHK, JLGNBOILFLN EIKFGOCCOIE)  [RVA 0x316B8EC]
// NFGLEDADCGL$$NHAIEGLJKMK @ RVA 0x316B8EC

void NFGLEDADCGL__NHAIEGLJKMK
               (NFGLEDADCGL_o *__this,HNFFPPPDKDK_o *HPLHPPKHDHK,JLGNBOILFLN_o *EIKFGOCCOIE,
               MethodInfo *method)

{
  Roster_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  method_00 = (MethodInfo *)EIKFGOCCOIE;
  if ((DAT_045668fc & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668fc = 1;
  }
  if (EIKFGOCCOIE != (JLGNBOILFLN_o *)0x0) {
    NFGLEDADCGL__FIGJPOMPAON(__this,(EIKFGOCCOIE->fields).LENFGEAJDMN,method_00);
    if (HPLHPPKHDHK != (HNFFPPPDKDK_o *)0x0) {
      NFGLEDADCGL__MIDDOHLPNMM(__this,HPLHPPKHDHK,false,true,in_x4);
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
    if (__this_00 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      EDFDANKEBGF__NDKALCOOGCK((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JHJPKAJCJHF()  [RVA 0x316C340]
// NFGLEDADCGL$$JHJPKAJCJHF @ RVA 0x316C340

void NFGLEDADCGL__JHJPKAJCJHF(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  long lVar3;
  Roster_o *__this_00;
  EPFMFHDGMCE_o *__this_01;
  System_Collections_Generic_List_HNFFPPPDKDK__o *pSVar4;
  KJBGNIGNECD_o *pKVar5;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *pSVar6;
  ModelParameters_o *pPVar7;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar8;
  FOKJBDHLIMG_o *pFVar9;
  
  if ((DAT_045668fd & 1) == 0) {
    FUN_01bab630(&GameSettings_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Clear__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10223/*"PerkHistory"*/);
    FUN_01bab630(&StringLiteral_9951/*"OpenTricks"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    DAT_045668fd = 1;
  }
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    lVar3 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                      (pSVar2,StringLiteral_10239/*"Perks"*/,(pSVar2->klass->vtable)._51_get_Item.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326c304 with catch @ 0326c3f0
                        */
    if (lVar3 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326c2f0 with catch @ 0326c3f4
                        */
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326c620;
                    /* try { // try from 0326c40c to 0336c40f has its CatchHandler @ 0326c430 */
      (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                (pSVar2,lVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
    }
                    /* try { // try from 0326c410 to 0336c437 has its CatchHandler @ 0326bf98 */
    pSVar2 = (__this->fields).HJKLIDCAEOE;
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 0326c40c with catch @ 0326c430 */
      lVar3 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar2,StringLiteral_10223/*"PerkHistory"*/,(pSVar2->klass->vtable)._51_get_Item.method);
      if (lVar3 != 0) {
                    /* try { // try from 0326c438 to 0336c43f has its CatchHandler @ 0326c454 */
        pSVar2 = (__this->fields).HJKLIDCAEOE;
                    /* try { // try from 0326c440 to 0336c44b has its CatchHandler @ 0326bf98 */
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326c620;
                    /* try { // try from 0326c44c to 0336c453 has its CatchHandler @ 0326c454 */
        (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                  (pSVar2,lVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326c438 with catch @ 0326c454
                       catch(type#2 @ 00000000) { ... } // from try @ 0326c44c with catch @ 0326c454
                        */
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        lVar3 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                          (pSVar2,StringLiteral_9951/*"OpenTricks"*/,(pSVar2->klass->vtable)._51_get_Item.method);
        if (lVar3 != 0) {
          pSVar2 = (__this->fields).HJKLIDCAEOE;
          if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326c620;
          (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                    (pSVar2,lVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
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
        if (__this_00 != (Roster_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).PEJIOCBFEEE;
          if (pSVar4 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
            iVar1 = (pSVar4->fields)._size;
            (pSVar4->fields)._size = 0;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
            }
            pKVar5 = (__this->fields).GMHDPMNODMF;
            if ((pKVar5 != (KJBGNIGNECD_o *)0x0) &&
               (pSVar6 = (pKVar5->fields).GJBLBEALOBO,
               pSVar6 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0)) {
              iVar1 = (pSVar6->fields)._size;
              (pSVar6->fields)._size = 0;
              (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              __this_01 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
              if (__this_01 != (EPFMFHDGMCE_o *)0x0) {
                EPFMFHDGMCE__IIAACPBHHOA(__this_01,(MethodInfo *)0x0);
                pPVar7 = (__this->fields).MFLNIMCFPDK;
                if ((pPVar7 != (ModelParameters_o *)0x0) &&
                   (pSVar8 = (pPVar7->fields).EHDILMGPDDN,
                   pSVar8 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
                  iVar1 = (pSVar8->fields)._size;
                  (pSVar8->fields)._size = 0;
                  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
                  }
                  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pFVar9 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
                  if ((pFVar9 != (FOKJBDHLIMG_o *)0x0) &&
                     (pSVar8 = (pFVar9->fields).ODLBEHFGJJE,
                     pSVar8 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
                    iVar1 = (pSVar8->fields)._size;
                    (pSVar8->fields)._size = 0;
                    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                    if (0 < iVar1) {
                      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
                    }
                    if ((GameSettings_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    GameSettings__LJMKLOBKBNH((MethodInfo *)0x0);
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
LAB_0326c620:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HNFFPPPDKDK DMCFMJJKIDN(PerkInfoItem EIKFGOCCOIE)  [RVA 0x316C624]
// NFGLEDADCGL$$DMCFMJJKIDN @ RVA 0x316C624

HNFFPPPDKDK_o *
NFGLEDADCGL__DMCFMJJKIDN(NFGLEDADCGL_o *__this,PerkInfoItem_o *EIKFGOCCOIE,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlElement_o *pSVar2;
  HNFFPPPDKDK_o *__this_00;
  
  if ((DAT_045668fe & 1) == 0) {
    FUN_01bab630(&HNFFPPPDKDK_TypeInfo);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_045668fe = 1;
  }
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlElement_o *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10239/*"Perks"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlElement_o *)0x0) {
      pSVar2 = EIABCPKDEBD__BHPIHHJHELJ
                         ((__this->fields).HJKLIDCAEOE,StringLiteral_10239/*"Perks"*/,(MethodInfo *)0x0);
    }
    pSVar2 = EIABCPKDEBD__BHPIHHJHELJ
                       ((System_Xml_XmlNode_o *)pSVar2,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
    __this_00 = (HNFFPPPDKDK_o *)thunk_FUN_01bda818(HNFFPPPDKDK_TypeInfo);
    HNFFPPPDKDK___ctor(__this_00,(System_Xml_XmlNode_o *)pSVar2,(MethodInfo *)0x0);
    if ((EIKFGOCCOIE != (PerkInfoItem_o *)0x0) && (__this_00 != (HNFFPPPDKDK_o *)0x0)) {
      HNFFPPPDKDK__HCOCAAIGNNL(__this_00,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (EIKFGOCCOIE->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
      HNFFPPPDKDK__AKJBHHAHMPG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      HNFFPPPDKDK__DJJHOOKLHHL(__this_00,(EIKFGOCCOIE->fields).AEIJFFBOBCP,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int BKPCFFPHHBJ()  [RVA 0x316C744]
// NFGLEDADCGL$$BKPCFFPHHBJ @ RVA 0x316C744

int32_t NFGLEDADCGL__BKPCFFPHHBJ(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045668ff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    DAT_045668ff = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PEJIOCBFEEE;
  if (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    iVar2 = 0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
        return iVar2;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      iVar2 = *(int *)((long)&local_38.fields._current[1].klass + 4) + iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public HNFFPPPDKDK DMCFMJJKIDN(KINHGEBKOEG EIKFGOCCOIE)  [RVA 0x316C894]
// NFGLEDADCGL$$DMCFMJJKIDN @ RVA 0x316C894

HNFFPPPDKDK_o *
NFGLEDADCGL__DMCFMJJKIDN(NFGLEDADCGL_o *__this,KINHGEBKOEG_o *EIKFGOCCOIE,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_01;
  System_String_o *pSVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlElement_o *pSVar5;
  long *plVar6;
  undefined8 uVar7;
  HNFFPPPDKDK_o *__this_02;
  PerkInfoItem_o **ppHVar8;
  MethodInfo *in_x3;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566900 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&HNFFPPPDKDK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_04566900 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEJIOCBFEEE;
  if (__this_01 == (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
LAB_0326cb54:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    __this_00 = local_50.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      pSVar3 = StringLiteral_10239/*"Perks"*/;
      uVar7 = StringLiteral_10213/*"Perk"*/;
      pSVar4 = (__this->fields).HJKLIDCAEOE;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlElement_o *)
                 (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar4,StringLiteral_10239/*"Perks"*/,(pSVar4->klass->vtable)._51_get_Item.method);
        if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
          pSVar5 = EIABCPKDEBD__BHPIHHJHELJ((__this->fields).HJKLIDCAEOE,pSVar3,(MethodInfo *)0x0);
        }
        pSVar4 = (__this->fields).HJKLIDCAEOE;
        if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
           (plVar6 = (long *)(*(pSVar4->klass->vtable)._17_get_OwnerDocument.methodPtr)
                                       (pSVar4,(pSVar4->klass->vtable)._17_get_OwnerDocument.method)
           , plVar6 != (long *)0x0)) {
          method_00 = (MethodInfo *)0x0;
          uVar7 = (**(code **)(*plVar6 + 0x678))(plVar6,1,uVar7,0,*(undefined8 *)(*plVar6 + 0x680));
          if (pSVar5 != (System_Xml_XmlElement_o *)0x0) {
            pSVar4 = (System_Xml_XmlNode_o *)
                     (*(pSVar5->klass->vtable)._26_PrependChild.methodPtr)
                               (pSVar5,uVar7,(pSVar5->klass->vtable)._26_PrependChild.method);
            __this_02 = (HNFFPPPDKDK_o *)thunk_FUN_01bda818(HNFFPPPDKDK_TypeInfo);
            HNFFPPPDKDK___ctor(__this_02,pSVar4,(MethodInfo *)0x0);
            if ((EIKFGOCCOIE != (KINHGEBKOEG_o *)0x0) && (__this_02 != (HNFFPPPDKDK_o *)0x0)) {
              HNFFPPPDKDK__AKJBHHAHMPG
                        (__this_02,(EIKFGOCCOIE->fields).NOPGBJNLFHM,(MethodInfo *)0x0);
              HNFFPPPDKDK__HCOCAAIGNNL
                        (__this_02,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
              iVar1 = (EIKFGOCCOIE->fields).AEIJFFBOBCP;
              if (0 < iVar1) {
                HNFFPPPDKDK__DJJHOOKLHHL(__this_02,iVar1,(MethodInfo *)0x0);
              }
              HNFFPPPDKDK__FAPGKEAKOKA
                        (__this_02,(EIKFGOCCOIE->fields).JPNMMLFPECM,(MethodInfo *)0x0);
              NFGLEDADCGL__NHAIEGLJKMK(__this,__this_02,EIKFGOCCOIE,method_00);
              return __this_02;
            }
          }
        }
      }
      goto LAB_0326cb54;
    }
    if ((HNFFPPPDKDK_o *)local_50.fields._current == (HNFFPPPDKDK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (EIKFGOCCOIE == (KINHGEBKOEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = ((HNFFPPPDKDK_Fields *)((long)local_50.fields._current + 0x10))->DEKCPPOJFEH;
    if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__Equals(pSVar3,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (bVar2) break;
    bVar2 = System_String__IsNullOrEmpty((EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (bVar2) {
LAB_0326cb24:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      return (HNFFPPPDKDK_o *)__this_00;
    }
  }
  iVar1 = (EIKFGOCCOIE->fields).AEIJFFBOBCP;
  if (0 < iVar1) {
    HNFFPPPDKDK__DJJHOOKLHHL((HNFFPPPDKDK_o *)__this_00,iVar1,(MethodInfo *)0x0);
  }
  HNFFPPPDKDK__FAPGKEAKOKA
            ((HNFFPPPDKDK_o *)__this_00,(EIKFGOCCOIE->fields).JPNMMLFPECM,(MethodInfo *)0x0);
  ppHVar8 = &((HNFFPPPDKDK_Fields *)((long)__this_00 + 0x10))->_CGEGGOPIPHH_k__BackingField;
  *ppHVar8 = (PerkInfoItem_o *)0x0;
  thunk_FUN_01c20e04(ppHVar8,0);
  NFGLEDADCGL__NHAIEGLJKMK(__this,(HNFFPPPDKDK_o *)__this_00,EIKFGOCCOIE,in_x3);
  goto LAB_0326cb24;
}

