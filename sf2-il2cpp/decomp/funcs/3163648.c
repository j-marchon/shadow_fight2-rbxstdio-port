// MCEIBCKPIAD$$GIENGNEGHPJ @ RVA 0x3163648

void MCEIBCKPIAD__GIENGNEGHPJ
               (MCEIBCKPIAD_o *__this,JMDPBFOCHHP_NOPCEDPNNKO_o *GHAAKPDHIJJ,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *IOOJAJAPMBM;
  bool bVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  int64_t iVar3;
  FAIJGJCCKJC_o *__this_02;
  KKLFGJCMPDA_o *__this_03;
  System_Collections_Generic_List_KKLFGJCMPDA__o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  KKLFGJCMPDA_array *pKVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 0326364c to 03363653 has its CatchHandler @ 03263654 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03263638 with catch @ 03263654
                       catch(type#2 @ 00000000) { ... } // from try @ 0326364c with catch @ 03263654
                        */
  method_00 = (MethodInfo *)GHAAKPDHIJJ;
  if ((DAT_04566897 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&KKLFGJCMPDA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    DAT_04566897 = 1;
    method_00 = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  MCEIBCKPIAD__DGLJCGNHLIG(__this,method_00);
  if (GHAAKPDHIJJ != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
    __this_00 = (GHAAKPDHIJJ->fields).NPGALOBDIHL;
    if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                             ), IOOJAJAPMBM = local_70.fields._current, bVar2) {
      __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (__this_01 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = KKLJIDJBFEI__HEDLNKCNMCI(__this_01,(MethodInfo *)0x0);
      if ((JMDPBFOCHHP_ENBCJNLAHAC_o *)IOOJAJAPMBM == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((0 < ((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)((long)IOOJAJAPMBM + 0x10))->NFKHJPMMNLM) &&
          (lVar6 = ((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)((long)IOOJAJAPMBM + 0x10))->CEGNAMELGID,
          0 < lVar6)) && (iVar3 <= lVar6)) {
        __this_02 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(iVar3,FAIJGJCCKJC_TypeInfo);
        FAIJGJCCKJC___ctor(__this_02,(JMDPBFOCHHP_ENBCJNLAHAC_o *)IOOJAJAPMBM,method);
        __this_03 = (KKLFGJCMPDA_o *)thunk_FUN_01bda818(KKLFGJCMPDA_TypeInfo);
        KKLFGJCMPDA___ctor(__this_03,__this,__this_02,(MethodInfo *)0x0);
        if (__this_03 == (KKLFGJCMPDA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = KKLFGJCMPDA__AJDOCKPPMLK(__this_03,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
        if (bVar2) {
          bVar2 = KKLFGJCMPDA__HLLOKAJEBDE(__this_03,(MethodInfo *)0x0);
          lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
          if (bVar2) {
            pSVar4 = (__this->fields).FEOGLGJBJDE;
            if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pKVar5 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar4->fields)._size;
            if (uVar1 < (uint)pKVar5->max_length) {
              (pSVar4->fields)._size = uVar1 + 1;
              pKVar5->m_Items[(int)uVar1] = __this_03;
              thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
            }
            else {
              __this_02 = *(FAIJGJCCKJC_o **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         (Il2CppObject *)__this_03,(MethodInfo_26E4DAC *)__this_02);
            }
          }
          else {
            bVar2 = KKLFGJCMPDA__PLLLOINIKKH(__this_03,(MethodInfo *)0x0);
            lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
            if (bVar2) {
              pSVar4 = (__this->fields).HOIHAFALJIG;
              if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pKVar5 = (pSVar4->fields)._items;
              (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
              if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (pSVar4->fields)._size;
              if (uVar1 < (uint)pKVar5->max_length) {
                (pSVar4->fields)._size = uVar1 + 1;
                pKVar5->m_Items[(int)uVar1] = __this_03;
                thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
              }
              else {
                __this_02 = *(FAIJGJCCKJC_o **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)__this_03,(MethodInfo_26E4DAC *)__this_02);
              }
            }
          }
        }
        else {
          pSVar4 = (__this->fields).BDIHNIGKDLK;
          if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pKVar5 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar4->fields)._size;
          if (uVar1 < (uint)pKVar5->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pKVar5->m_Items[(int)uVar1] = __this_03;
            thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
          }
          else {
            __this_02 = *(FAIJGJCCKJC_o **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_03
                       ,(MethodInfo_26E4DAC *)__this_02);
          }
        }
        lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
        pSVar4 = (__this->fields).MNIGCKKBGOH;
        if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pKVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pKVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pKVar5->m_Items[(int)uVar1] = __this_03;
          thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
          method = (MethodInfo *)__this_02;
        }
        else {
          method = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_03,
                     (MethodInfo_26E4DAC *)method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__)
    ;
  }
  return;
}

