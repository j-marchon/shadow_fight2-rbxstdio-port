// MGNPHCAAEIO$$PHFFPADFANK @ RVA 0x340E798

AFFHKININGD_o * MGNPHCAAEIO__PHFFPADFANK(OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this;
  AFFHKININGD_o *pAVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568065 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<AFFHKININGD>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04568065 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pAVar2 = (AFFHKININGD_o *)0x0;
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    __this = (System_Collections_Generic_List_object__o *)
             (*(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                       (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.method);
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)__this,
                       Method_DJNBJHPDKDP_OBECCOPBADO<AFFHKININGD>__);
    if (bVar1) {
LAB_0350e8a0:
      pAVar2 = (AFFHKININGD_o *)0x0;
    }
    else {
      if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,__this,
                 Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                          );
        pAVar2 = (AFFHKININGD_o *)local_38.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
          goto LAB_0350e8a0;
        }
        if ((AFFHKININGD_o *)local_38.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (((AFFHKININGD_Fields *)((long)local_38.fields._current + 0x10))->HHJIJKJCEOF != 2);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
    }
  }
  return pAVar2;
}

