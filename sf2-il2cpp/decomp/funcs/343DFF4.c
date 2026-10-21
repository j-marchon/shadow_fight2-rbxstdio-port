// DEMKOLGFNKK$$MAHFCKJGBPP @ RVA 0x343DFF4

void DEMKOLGFNKK__MAHFCKJGBPP(DEMKOLGFNKK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar4;
  Il2CppClass *KGLJICLJHEL;
  float fVar5;
  float fVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
  if ((DAT_045681fd & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_1);
    DAT_045681fd = 1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  KGLJICLJHEL = StringLiteral_1;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
      (pJVar4 = (pJVar3->fields).OFMMMBIIDAE, pJVar4 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) &&
     (__this_00 = (pJVar4->fields).GADHINPJDAF,
     __this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_GetEnumerator__);
    fVar6 = 3.4028235e+38;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_68,
                              Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_MoveNext__
                             ), pIVar1 = local_68.fields._current, bVar2) {
      if (local_68.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        (local_68.fields._current[4].monitor,StringLiteral_8722,(MethodInfo *)0x0);
      if ((bVar2) && (fVar5 = *(float *)&pIVar1[5].klass, fVar5 < fVar6)) {
        KGLJICLJHEL = pIVar1[1].klass;
        fVar6 = fVar5;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_68,
               Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_Dispose__)
    ;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__BNKOEFAHHIP(__this_01,(System_String_o *)KGLJICLJHEL,true,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

