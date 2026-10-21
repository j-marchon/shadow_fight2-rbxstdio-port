// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ONFELBEANOD @ RVA 0x33104EC

HOOAAGABMBL_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ONFELBEANOD
          (System_String_o *DKIFPHNBBBG,MethodInfo *method)

{
  Il2CppObject *IOOJAJAPMBM;
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar3;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  Il2CppObject *pIVar4;
  FAIJGJCCKJC_o *__this_01;
  ulong uVar5;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar6;
  FAIJGJCCKJC_o *pFVar7;
  int iVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045677b9 & 1) == 0) {
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
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    DAT_045677b9 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
    if ((pJVar2->fields).OFMMMBIIDAE == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
      pFVar7 = (FAIJGJCCKJC_o *)0x0;
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar2 == (JMDPBFOCHHP_o *)0x0) ||
          (pJVar6 = (pJVar2->fields).OFMMMBIIDAE, pJVar6 == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) ||
         (__this = (pJVar6->fields).NPGALOBDIHL,
         __this == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0))
      goto LAB_03410740;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
      iVar8 = -1;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      pFVar7 = (FAIJGJCCKJC_o *)0x0;
LAB_03410620:
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                        );
      IOOJAJAPMBM = local_80.fields._current;
      if (bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((JMDPBFOCHHP_ENBCJNLAHAC_o *)IOOJAJAPMBM == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pJVar2 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pJVar3 = JMDPBFOCHHP__OJOIAONADNG
                           (pJVar2,((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)((long)IOOJAJAPMBM + 0x10))->
                                   LEJBNEIJJIF,(MethodInfo *)0x0);
        if ((pJVar3 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) && ((pJVar3->fields).HNGIBIJJKAP != false))
        {
          __this_00 = (pJVar3->fields).GFBNJPMOEKD;
          if (__this_00 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = System_String__op_Inequality
                            ((System_String_o *)pIVar4[1].klass,DKIFPHNBBBG,(MethodInfo *)0x0);
          if ((!bVar1) && ((iVar8 < 0 || (*(int *)&pIVar4[1].monitor < iVar8)))) {
            __this_01 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
            FAIJGJCCKJC___ctor(__this_01,(JMDPBFOCHHP_ENBCJNLAHAC_o *)IOOJAJAPMBM,(MethodInfo *)0x0)
            ;
            if (__this_01 == (FAIJGJCCKJC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = FAIJGJCCKJC__KDBOPDDCNID(__this_01,(MethodInfo *)0x0);
            if (bVar1) {
              uVar5 = (*(__this_01->klass->vtable)._4_OIEONLNFHKC.methodPtr)
                                (__this_01,(__this_01->klass->vtable)._4_OIEONLNFHKC.method);
              if ((uVar5 & 1) == 0) goto LAB_03410620;
            }
            iVar8 = *(int *)&pIVar4[1].monitor;
            pFVar7 = __this_01;
          }
        }
        goto LAB_03410620;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    }
    return (HOOAAGABMBL_o *)pFVar7;
  }
LAB_03410740:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

