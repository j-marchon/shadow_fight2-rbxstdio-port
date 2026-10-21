// GBJGJEGPHKD$$CJDPPIBNAAF @ RVA 0x3430094

void GBJGJEGPHKD__CJDPPIBNAAF(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  MethodInfo *extraout_x1;
  float fVar2;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568162 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04568162 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  (__this->fields).GNHFLFKFOIO = 0.0;
  __this_00 = GBJGJEGPHKD__IBNCHLIHECC(__this,method);
  if (__this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
        return;
      }
      if ((IEFEBEDLHNN_o *)local_48.fields._current == (IEFEBEDLHNN_o *)0x0) break;
      fVar3 = (__this->fields).GNHFLFKFOIO;
      fVar2 = IEFEBEDLHNN__NODBECJPBDC((IEFEBEDLHNN_o *)local_48.fields._current,(MethodInfo *)0x0);
      (__this->fields).GNHFLFKFOIO = fVar3 + fVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

