// FCJBEKHDLAF$$HMDJFLDLPMN @ RVA 0x33EED5C

void FCJBEKHDLAF__HMDJFLDLPMN(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  OLKKAIFGGAK_o *__this_01;
  BEPJMNAHCAD_o *__this_02;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_03;
  MMDDDDFHOLG_o *__this_04;
  IPPEHAJADOO_o *__this_05;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567eee & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    FUN_01bab630(&OIGAJAKPPEO_TypeInfo);
    FUN_01bab630(&StringLiteral_6325);
    DAT_04567eee = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_6325,(MethodInfo *)0x0);
    return;
  }
  __this_01 = (BCKBBGCOMJD->fields).NFMBPIPEKGF;
  if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
    bVar1 = (OIGAJAKPPEO_TypeInfo->_2).naturalAligment;
    if (((BCKBBGCOMJD->klass->_2).naturalAligment < bVar1) ||
       ((BCKBBGCOMJD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)OIGAJAKPPEO_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(BCKBBGCOMJD);
    }
    OLKKAIFGGAK__JEPNJBEJCDK(__this_01,(OIGAJAKPPEO_o *)BCKBBGCOMJD,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields).FAJCMHDLBEJ;
  if (__this_02 != (BEPJMNAHCAD_o *)0x0) {
    BEPJMNAHCAD__KJGPPAJLLCP(__this_02,BCKBBGCOMJD,(MethodInfo *)0x0);
    __this_03 = (__this->fields).IILLHHPGGKA;
    if (__this_03 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_03,
                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                               ), __this_00 = local_48.fields._current, bVar2) {
        if ((OLKKAIFGGAK_o *)local_48.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OLKKAIFGGAK__AHFHEPFDOBO
                  ((OLKKAIFGGAK_o *)local_48.fields._current,BCKBBGCOMJD,(MethodInfo *)0x0);
        OLKKAIFGGAK__IKMPJAAFEEA((OLKKAIFGGAK_o *)__this_00,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__)
      ;
      __this_04 = (__this->fields).POEGCOJFMDB;
      if (__this_04 != (MMDDDDFHOLG_o *)0x0) {
        MMDDDDFHOLG__HMDJFLDLPMN(__this_04,BCKBBGCOMJD,(MethodInfo *)0x0);
        __this_05 = (__this->fields).JJPMCDACBFG;
        if (__this_05 != (IPPEHAJADOO_o *)0x0) {
          IPPEHAJADOO__HMDJFLDLPMN(__this_05,BCKBBGCOMJD,(MethodInfo *)0x0);
          OLKKAIFGGAK__BJJFFANJPAF(BCKBBGCOMJD,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

