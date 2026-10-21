// FCJBEKHDLAF$$KAEFPBLBKJH @ RVA 0x33E4748

void FCJBEKHDLAF__KAEFPBLBKJH
               (FCJBEKHDLAF_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppClass *__this_01;
  CNDPAJOLKFN_o *pCVar2;
  BEPJMNAHCAD_o *__this_02;
  CNDPAJOLKFN_o *__this_03;
  OLKKAIFGGAK_o *__this_04;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04567ec0 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04567ec0 = 1;
  }
  __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(__this_00,(MethodInfo *)0x0);
  if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    if ((DDOAJGPFCNB->fields)._size < 1) {
      fVar4 = 0.0;
    }
    else {
      iVar3 = 0;
      fVar4 = 0.0;
      do {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)DDOAJGPFCNB,iVar3,
                            Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
        if ((pIVar1 == (Il2CppObject *)0x0) ||
           (__this_01 = pIVar1[0x25].klass, __this_01 == (Il2CppClass *)0x0)) goto LAB_034e4904;
        fVar5 = (float)(__this_01->_1).this_arg.bits;
        pCVar2 = GBJGJEGPHKD__PLEJOMOEFNE((GBJGJEGPHKD_o *)__this_01,(MethodInfo *)0x0);
        if ((pCVar2 == (CNDPAJOLKFN_o *)0x0) || (__this_00 == (CNDPAJOLKFN_o *)0x0))
        goto LAB_034e4904;
        CNDPAJOLKFN__LFENGGKOJDO
                  (__this_00,fVar5 * (pCVar2->fields).super.OHHDBINAJCB,
                   fVar5 * (pCVar2->fields).super.JOLEIODMLFL,fVar5 * (pCVar2->fields).PPOPAMHBMGG,
                   (MethodInfo *)0x0);
        iVar3 = iVar3 + 1;
        fVar4 = fVar4 + fVar5;
      } while (iVar3 < (DDOAJGPFCNB->fields)._size);
    }
    if (__this_00 != (CNDPAJOLKFN_o *)0x0) {
      CNDPAJOLKFN__PGLILPKGILI(__this_00,1.0 / fVar4,(MethodInfo *)0x0);
      __this_02 = (__this->fields).FAJCMHDLBEJ;
      if (__this_02 != (BEPJMNAHCAD_o *)0x0) {
        pCVar2 = BEPJMNAHCAD__ECOCBHDPPMO(__this_02,(MethodInfo *)0x0);
        __this_03 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
        CNDPAJOLKFN___ctor(__this_03,pCVar2,(MethodInfo *)0x0);
        if (__this_03 != (CNDPAJOLKFN_o *)0x0) {
          CNDPAJOLKFN__LOPALOLIHBH(__this_03,__this_00,(MethodInfo *)0x0);
          (__this_03->fields).super.JOLEIODMLFL = 0.0;
          (__this_03->fields).PPOPAMHBMGG = 0.0;
          if (0 < (DDOAJGPFCNB->fields)._size) {
            iVar3 = 0;
            do {
              __this_04 = (OLKKAIFGGAK_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)DDOAJGPFCNB,iVar3,
                                     Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__)
              ;
              if (__this_04 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e4904;
              OLKKAIFGGAK__LPIHJPHDPEE(__this_04,__this_03,true,(MethodInfo *)0x0);
              iVar3 = iVar3 + 1;
            } while (iVar3 < (DDOAJGPFCNB->fields)._size);
          }
          return;
        }
      }
    }
  }
LAB_034e4904:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

