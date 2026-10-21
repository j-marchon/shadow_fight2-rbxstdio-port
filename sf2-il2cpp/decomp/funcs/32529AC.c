// LPGLKMNHELJ$$BAKANMGEDIG @ RVA 0x32529AC

void LPGLKMNHELJ__BAKANMGEDIG
               (LPGLKMNHELJ_o *__this,JMDPBFOCHHP_ENBCJNLAHAC_o *NPOAPJKIIOF,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_01;
  Il2CppObject *pIVar3;
  MFFKCPDBFPG_o *__this_02;
  JMDPBFOCHHP_ENBCJNLAHAC_o **ppJVar4;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456713d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                );
    FUN_01bab630(&MFFKCPDBFPG_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8670);
    FUN_01bab630(&StringLiteral_8671);
    DAT_0456713d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((NPOAPJKIIOF != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) && (__this_00 != (JMDPBFOCHHP_o *)0x0)) {
    pJVar2 = JMDPBFOCHHP__OJOIAONADNG(__this_00,(NPOAPJKIIOF->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
    ;
    if (pJVar2 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
                    /* try { // try from 03352bf0 to 03452bf7 has its CatchHandler @ 03352e50 */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
                    /* try { // try from 03352c04 to 03452c0f has its CatchHandler @ 03352e40 */
        pSVar9 = (NPOAPJKIIOF->fields).LEJBNEIJJIF;
                    /* try { // try from 03352c14 to 03452c1b has its CatchHandler @ 03352e48 */
        if ((pSVar9 != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
LAB_03352d04:
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
                    /* try { // try from 03352c24 to 03452c2f has its CatchHandler @ 03352e2c */
        if ((int)args->max_length == 0) {
LAB_03352d00:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar9;
                    /* try { // try from 03352c34 to 03452c3b has its CatchHandler @ 03352e30 */
        thunk_FUN_01c20e04(args->m_Items,pSVar9);
                    /* try { // try from 03352c40 to 03452c4b has its CatchHandler @ 03352e44 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03352c50 to 03452c57 has its CatchHandler @ 03352e4c */
          thunk_FUN_01ba7564();
        }
        puVar8 = &StringLiteral_8671;
LAB_03352cd0:
        UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar8,args,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_01 = (pJVar2->fields).BAPMMGFEIDM;
      if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0
         ) {
        if ((__this_01->fields)._size == 0) {
                    /* try { // try from 03352c60 to 03452c6b has its CatchHandler @ 03352e20 */
                    /* try { // try from 03352c70 to 03452c7b has its CatchHandler @ 03352e24 */
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          if (args != (System_Object_array *)0x0) {
            pSVar9 = (NPOAPJKIIOF->fields).LEJBNEIJJIF;
                    /* try { // try from 03352c7c to 03452e07 has its CatchHandler @ 03352918 */
            if ((pSVar9 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03352d04;
            if ((int)args->max_length == 0) goto LAB_03352d00;
            args->m_Items[0] = (Il2CppObject *)pSVar9;
            thunk_FUN_01c20e04(args->m_Items,pSVar9);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            puVar8 = &StringLiteral_8670;
            goto LAB_03352cd0;
          }
        }
        else {
          method_00 = 
          Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,0,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                             );
          __this_02 = (MFFKCPDBFPG_o *)thunk_FUN_01bda818(MFFKCPDBFPG_TypeInfo);
          MFFKCPDBFPG___ctor(__this_02,(MethodInfo *)0x0);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar3[3].monitor != (System_Collections_Generic_List_object__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_68,pIVar3[3].monitor,
                       Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                      );
            local_50.fields._index = local_68.fields._index;
            local_50.fields._version = local_68.fields._version;
            local_50.fields._list = local_68.fields._list;
            local_50.fields._current = local_68.fields._current;
            while( true ) {
              bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_50,
                                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                );
              pIVar3 = local_50.fields._current;
              if (!bVar1) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                          );
                ppJVar4 = &(__this->fields).FIJPJBGCODO;
                *ppJVar4 = NPOAPJKIIOF;
                thunk_FUN_01c20e04(ppJVar4,NPOAPJKIIOF);
                (__this->fields).FGCJFGHMIOL = __this_02;
                thunk_FUN_01c20e04(&__this->fields,__this_02);
                (__this->fields).BGHFADDGPAD = 1;
                return;
              }
              if ((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_50.fields._current ==
                  (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) break;
              pSVar7 = ((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                       ((long)local_50.fields._current + 0x10))->GFBNJPMOEKD;
              if (pSVar7 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((pSVar7->fields)._size != 0) {
                bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                  (((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                                   ((long)local_50.fields._current + 0x10))->JFDGLPNMELO,
                                   (MethodInfo *)0x0);
                if ((bVar1) &&
                   (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                      (((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                                       ((long)pIVar3 + 0x10))->CHDOCDMAJPI,(MethodInfo *)0x0), bVar1
                   )) {
                  LPGLKMNHELJ__DDIFBBGDKHD
                            ((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)pIVar3,__this_02,method_00);
                }
                else {
                  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                    (((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                                     ((long)pIVar3 + 0x10))->CHDOCDMAJPI,(MethodInfo *)0x0);
                  if (bVar1) {
                    LPGLKMNHELJ__MFJHNBOEHFN
                              ((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)pIVar3,__this_02,method_00);
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

