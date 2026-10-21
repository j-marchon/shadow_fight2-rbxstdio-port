// LFOMNKEACBL$$DGLJCGNHLIG @ RVA 0x30FAD50

void LFOMNKEACBL__DGLJCGNHLIG
               (LFOMNKEACBL_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Object_array *args;
  long lVar3;
  PJKHAJKEHEL_o *pPVar4;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar5;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar6;
  OLKKAIFGGAK_OJHIDJPICJN_o *__this_00;
  OLKKAIFGGAK_AHFAALBHPHJ_o *__this_01;
  undefined8 uVar7;
  OLKKAIFGGAK_o *pOVar8;
  HOOAAGABMBL_o **ppHVar9;
  ECENNHNBAME_o **ppEVar10;
  ECENNHNBAME_o *pEVar11;
  System_String_o *pSVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar13;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456649a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_9509);
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
  if (pEVar11 == (ECENNHNBAME_o *)0x0) {
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
    UnityEngine_Debug__LogErrorFormat(StringLiteral_9509,args,(MethodInfo *)0x0);
  }
  else {
    CVar13 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       ((__this->fields).AENEIOGOIJP,(MethodInfo *)0x0);
    (pEVar11->fields).EAFPDFHFBOM.fields = CVar13;
    (__this->fields).AENEIOGOIJP = -1;
    (__this->fields).NHIDCPKCKHC = (ECENNHNBAME_o *)0x0;
    thunk_FUN_01c20e04(ppEVar10,0);
  }
  if (((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
      (pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI, pOVar8 != (OLKKAIFGGAK_o *)0x0)) &&
     (pPVar4 = (pOVar8->fields).FAPMJJBOFEF, pPVar4 != (PJKHAJKEHEL_o *)0x0)) {
    (*(pPVar4->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
              (pPVar4,StringLiteral_8772,(__this->fields).OFHEIFDJBLA,
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
        if (pOVar8 == (OLKKAIFGGAK_o *)0x0) {
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
                   Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                 ), bVar2) {
          pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
          if (pOVar8 == (OLKKAIFGGAK_o *)0x0) {
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
                     Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
        pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if ((pOVar8 != (OLKKAIFGGAK_o *)0x0) &&
           (__this_00 = (pOVar8->fields).MPJKOPNODDM, __this_00 != (OLKKAIFGGAK_OJHIDJPICJN_o *)0x0)
           ) {
          OLKKAIFGGAK_OJHIDJPICJN__BCKHIHGPFEF
                    (__this_00,(__this->fields).ONJPCPJPEIL,(MethodInfo *)0x0);
          pOVar8 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
          if ((pOVar8 != (OLKKAIFGGAK_o *)0x0) &&
             (__this_01 = (pOVar8->fields).NOJKHMOEAEO,
             __this_01 != (OLKKAIFGGAK_AHFAALBHPHJ_o *)0x0)) {
            OLKKAIFGGAK_AHFAALBHPHJ__JBPIDIFNGMB
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

