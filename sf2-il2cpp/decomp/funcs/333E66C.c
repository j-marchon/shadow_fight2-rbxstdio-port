// AFFHKININGD$$DBLLCDJCJIJ @ RVA 0x333E66C

void AFFHKININGD__DBLLCDJCJIJ(AFFHKININGD_o *__this,MethodInfo *method)

{
  int32_t PKLFFPEBBDA;
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_AGCDKMOOJGI__o *pSVar2;
  PAMEPBLOLPB_o *pPVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567992 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGCDKMOOJGI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGCDKMOOJGI>_get_Count__);
    DAT_04567992 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).JDNKKGPNHPB == 7) {
    pSVar2 = (__this->fields).HFDOEONIBFA;
    if (pSVar2 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
LAB_0343e7ec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pSVar2->fields)._size != 0) {
      if ((__this->fields).GFCLPPPMGAK == false) {
        pPVar3 = (__this->fields).JPBIBBBMCCD;
        if (pPVar3 != (PAMEPBLOLPB_o *)0x0) {
          PKLFFPEBBDA = (pPVar3->fields).KOANEAEMOOP;
          if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
          }
          LIIFLGALGNK__DHPFKHMDEDG(PKLFFPEBBDA,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).HFDOEONIBFA;
          if (pSVar2 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
                       Method_System_Collections_Generic_List<AGCDKMOOJGI>_GetEnumerator__);
            while( true ) {
              bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_48,
                                 Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_MoveNext__
                                );
              if (!bVar1) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_Dispose__)
                ;
                if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                LIIFLGALGNK__DHPFKHMDEDG((MethodInfo *)0x0);
                AFFHKININGD__LFCMDLKDGHG(__this,method_00);
                (__this->fields).BLFDCHIPLMI = false;
                return;
              }
              if ((AGCDKMOOJGI_o *)local_48.fields._current == (AGCDKMOOJGI_o *)0x0) break;
              if (((AGCDKMOOJGI_Fields *)((long)local_48.fields._current + 0x10))->EIMDJHJAHKK == 1)
              {
                AGCDKMOOJGI__KACMDIEPEMF
                          ((AGCDKMOOJGI_o *)local_48.fields._current,(MethodInfo *)0x0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        goto LAB_0343e7ec;
      }
      (__this->fields).BLFDCHIPLMI = true;
    }
  }
  return;
}

