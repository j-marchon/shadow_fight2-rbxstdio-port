// OLKKAIFGGAK$$LCKIEKIOJFJ @ RVA 0x34F752C

OLKKAIFGGAK_o *
OLKKAIFGGAK__LCKIEKIOJFJ
          (OLKKAIFGGAK_o *__this,OLKKAIFGGAK_o *LMGFJDLAOOK,
          System_Collections_Generic_List_OIGAJAKPPEO__o *DDMCEGBDIAG,MethodInfo *method)

{
  Il2CppObject *BCKBBGCOMJD;
  bool bVar1;
  int32_t iVar2;
  NGKBNOEJLPH_o *pNVar3;
  GBJGJEGPHKD_o *pGVar4;
  IEFEBEDLHNN_o *pIVar5;
  IEFEBEDLHNN_o *pIVar6;
  CNDPAJOLKFN_o *pCVar7;
  CNDPAJOLKFN_o *pCVar8;
  OLKKAIFGGAK_o *pOVar9;
  float fVar10;
  float fVar11;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045687f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    DAT_045687f9 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (DDMCEGBDIAG == (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)DDMCEGBDIAG,
             Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  pOVar9 = (OLKKAIFGGAK_o *)0x0;
  fVar11 = 3.4028235e+38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    BCKBBGCOMJD = local_70.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__)
      ;
      return pOVar9;
    }
    pNVar3 = (__this->fields).ADGFKAPOIFN;
    if (pNVar3 == (NGKBNOEJLPH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NGKBNOEJLPH__NPFGMAOAAED
              (pNVar3,LMGFJDLAOOK,(OLKKAIFGGAK_o *)local_70.fields._current,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).ADGFKAPOIFN;
    if (pNVar3 == (NGKBNOEJLPH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = NGKBNOEJLPH__NPFGMAOAAED
                      (pNVar3,(OLKKAIFGGAK_o *)BCKBBGCOMJD,LMGFJDLAOOK,(MethodInfo *)0x0);
    if (LMGFJDLAOOK == (OLKKAIFGGAK_o *)0x0) break;
    pGVar4 = (LMGFJDLAOOK->fields).HMIAFJALFCJ;
    if (pGVar4 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = GBJGJEGPHKD__ILECMJOENMK(pGVar4,(MethodInfo *)0x0);
    if ((OLKKAIFGGAK_o *)BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar4 = ((OLKKAIFGGAK_Fields *)((long)BCKBBGCOMJD + 0x10))->HMIAFJALFCJ;
    if (pGVar4 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar6 = GBJGJEGPHKD__ILECMJOENMK(pGVar4,(MethodInfo *)0x0);
    if ((pIVar5 != (IEFEBEDLHNN_o *)0x0) && (pIVar6 != (IEFEBEDLHNN_o *)0x0)) {
      pCVar7 = (pIVar5->fields).CNMHHKAMGPI;
      if (pCVar7 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pCVar8 = (pIVar6->fields).CNMHHKAMGPI;
      if (pCVar8 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar10 = ABS((pCVar7->fields).super.OHHDBINAJCB - (pCVar8->fields).super.OHHDBINAJCB);
      if (fVar10 < fVar11) {
        pOVar9 = (OLKKAIFGGAK_o *)BCKBBGCOMJD;
        fVar11 = fVar10;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar2);
}

