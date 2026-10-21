// KAHMAJKJMBK$$IHBHONOEBKF @ RVA 0x34C15A8

void KAHMAJKJMBK__IHBHONOEBKF(KAHMAJKJMBK_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_01;
  MethodInfo *method_00;
  FCJBEKHDLAF_o *pFVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568608 & 1) == 0) {
    FUN_01bab630(&BFDLCIGIKBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    DAT_04568608 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).OIJDFMHDHHK;
  if (__this_01 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
      __this_00 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
        KAHMAJKJMBK__ELANNLDAPMK(__this,3,method);
        KAHMAJKJMBK__IGKMMHADIAK(__this,method_00);
        return;
      }
      if ((AJNNHGGLGIF_o *)local_60.fields._current == (AJNNHGGLGIF_o *)0x0) break;
      if (((AJNNHGGLGIF_Fields *)((long)local_60.fields._current + 0x10))->
          _BDDBFNHFMBC_k__BackingField != false) {
        method = *(MethodInfo **)
                  &((AJNNHGGLGIF_c *)(local_60.fields._current)->klass)[1]._1.this_arg.bits;
        (*((AJNNHGGLGIF_c *)(local_60.fields._current)->klass)[1]._1.this_arg.data)
                  (local_60.fields._current,IMMNELPBGIF);
        iVar3 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x13) {
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method = (MethodInfo *)0x0;
          FCJBEKHDLAF__HOCANPAALBC
                    (pFVar4,*(int32_t *)&((AJNNHGGLGIF_o *)((long)__this_00 + 0x58))->klass,
                     (MethodInfo *)0x0);
        }
        else if (iVar3 == 0x1e) {
          bVar1 = (BFDLCIGIKBJ_TypeInfo->_2).naturalAligment;
          if (((((AJNNHGGLGIF_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((AJNNHGGLGIF_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)BFDLCIGIKBJ_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(__this_00);
          }
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method = (MethodInfo *)0x0;
          FCJBEKHDLAF__JLANOIEIDGO
                    (pFVar4,(System_String_o *)
                            (((AJNNHGGLGIF_o *)((long)__this_00 + 0x58))->fields).LKKBHIEHNAM,
                     (MethodInfo *)0x0);
        }
        else if (iVar3 == 0x1f) {
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (pFVar4->fields).EPKNDHOGELF = true;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

