// GBJGJEGPHKD$$POBIFAEFKHC @ RVA 0x342FD24

void GBJGJEGPHKD__POBIFAEFKHC(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  BCPODJMEKMJ_o *__this_00;
  IEFEBEDLHNN_o *ELHGBMHJKCC;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar6;
  System_Collections_Generic_List_BCPODJMEKMJ__o *pSVar7;
  int index;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o **ppSVar8;
  Il2CppClass *pIVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568166 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BCPODJMEKMJ>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCPODJMEKMJ>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9549);
    DAT_04568166 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pGVar6 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar6 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) &&
     (pSVar7 = (pGVar6->fields).NNBACGACIKH,
     pSVar7 != (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0)) {
    iVar1 = (pSVar7->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pSVar7 = (pGVar6->fields).NNBACGACIKH;
      if ((pSVar7 == (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0) ||
         (method_00 = Method_System_Collections_Generic_List<BCPODJMEKMJ>_get_Item__,
         __this_00 = (BCPODJMEKMJ_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<BCPODJMEKMJ>_get_Item__),
         __this_00 == (BCPODJMEKMJ_o *)0x0)) break;
      ppSVar8 = &(__this_00->fields).AGJPNDANDGC;
      if (*ppSVar8 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)*ppSVar8,
                   Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                  );
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                                 ), pIVar2 = local_80.fields._current, bVar3) {
          if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ELHGBMHJKCC = GBJGJEGPHKD__OCJAHBKIFNO
                                  (__this,(System_String_o *)local_80.fields._current[1].klass,
                                   method_00);
          if (ELHGBMHJKCC == (IEFEBEDLHNN_o *)0x0) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
            if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar9 = pIVar2[1].klass;
            if ((pIVar9 != (Il2CppClass *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(pIVar9,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) {
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = (Il2CppObject *)pIVar9;
            thunk_FUN_01c20e04(args->m_Items,pIVar9);
            pSVar10 = (__this_00->fields).super.NPFMOEOIEKM;
            if ((pSVar10 != (System_String_o *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) {
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
            if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[1] = (Il2CppObject *)pSVar10;
            thunk_FUN_01c20e04(args->m_Items + 1,pSVar10);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            method_00 = (MethodInfo *)0x0;
            UnityEngine_Debug__LogErrorFormat(StringLiteral_9549,args,(MethodInfo *)0x0);
          }
          else {
            method_00 = (MethodInfo *)0x0;
            BCPODJMEKMJ__BGFNHJFJOLL
                      (__this_00,ELHGBMHJKCC,*(float *)&pIVar2[1].monitor,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                  );
        *ppSVar8 = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0;
        thunk_FUN_01c20e04(ppSVar8,0);
      }
      index = index + 1;
      if (index == iVar1) {
        return;
      }
      pGVar6 = (__this->fields).EOIPAPCMGGF;
    } while (pGVar6 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

