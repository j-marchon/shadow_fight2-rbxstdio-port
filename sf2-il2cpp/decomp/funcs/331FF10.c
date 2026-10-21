// FIBPEPMPJDI$$EPBENPDCBFE @ RVA 0x331FF10

bool FIBPEPMPJDI__EPBENPDCBFE
               (FIBPEPMPJDI_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567841 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_GetEnumerator__);
    DAT_04567841 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    bVar3 = 0;
  }
  else {
    __this_00 = (__this->fields).KPFGHBEKJIM;
    if (__this_00 == (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ILGLOCBJFEG>_GetEnumerator__);
    do {
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_MoveNext__);
      pIVar2 = local_48.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
        bVar3 = (__this->fields).OEMKHNGBKDA != 1;
        goto LAB_03420054;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar5 = (*(local_48.fields._current)->klass->vtable[6].methodPtr)
                        (local_48.fields._current,BCKBBGCOMJD,FPEHEJBLCAO,
                         (local_48.fields._current)->klass->vtable[6].method);
      iVar1 = (__this->fields).OEMKHNGBKDA;
      bVar5 = bVar5 ^ *(char *)&pIVar2[1].klass != '\0';
      bVar3 = iVar1 != 2 | bVar5;
    } while (((iVar1 == 1 & bVar5) == 0) && (iVar1 != 2 || (bVar5 & 1) != 0));
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
  }
LAB_03420054:
  return (bool)(bVar3 & 1);
}

