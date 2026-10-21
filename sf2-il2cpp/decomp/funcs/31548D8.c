// OAFGMIGFHAD$$MAHFCKJGBPP @ RVA 0x31548D8

void OAFGMIGFHAD__MAHFCKJGBPP(OAFGMIGFHAD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_String_o *b;
  LCKCDEKNLOA_o *__this_00;
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *__this_01;
  System_String_o *pSVar3;
  Il2CppClass *OOGPLJBADCD;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566829 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04566829 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).JGFKHMMNJBA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
  __this_01 = (__this->fields).OBHHHJLOHOE;
  if (__this_01 != (System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                             ), pIVar1 = local_70.fields._current, bVar2) {
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      OOGPLJBADCD = local_70.fields._current[1].klass;
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      b = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(System_String_o *)OOGPLJBADCD,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar3,b,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar1[1].monitor != (LCKCDEKNLOA_o *)0x0) {
          LCKCDEKNLOA__MAHFCKJGBPP(pIVar1[1].monitor,AAJBIMFNMBB,(MethodInfo *)0x0);
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__
                    );
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__)
    ;
    __this_00 = (__this->fields).IPOMGFKGCFL;
    if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__MAHFCKJGBPP(__this_00,AAJBIMFNMBB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

