// OLKKAIFGGAK$$CBGCMJCJJKP @ RVA 0x34F72F4

bool OLKKAIFGGAK__CBGCMJCJJKP
               (OLKKAIFGGAK_o *__this,System_String_o *KGLJICLJHEL,int32_t OAFGMHOFEKM,
               MethodInfo *method)

{
  bool bVar1;
  byte bVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045687ef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__,
                 KGLJICLJHEL,(ulong)(uint)OAFGMHOFEKM);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    DAT_045687ef = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OOBBJEDHHKM;
  if (__this_00 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    pIVar3 = local_58.fields._current;
    if (!bVar1) {
      pIVar3 = (Il2CppObject *)0x0;
      break;
    }
    if (local_58.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (local_58.fields._current[6].monitor,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
  bVar2 = (*(__this->klass->vtable)._8_CBGCMJCJJKP.methodPtr)
                    (__this,pIVar3,(ulong)(uint)OAFGMHOFEKM,0,0xffffffff,
                     (__this->klass->vtable)._8_CBGCMJCJJKP.method);
  return (bool)(bVar2 & 1);
}

