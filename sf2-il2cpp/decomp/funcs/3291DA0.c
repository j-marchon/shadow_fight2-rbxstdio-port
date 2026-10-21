// HIJGJNFACPG$$DGCODECJJCC @ RVA 0x3291DA0

bool HIJGJNFACPG__DGCODECJJCC(HIJGJNFACPG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456732c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    DAT_0456732c = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03391e60;
    }
    if ((LEGDPJHPEOB_o *)local_38.fields._current == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = LEGDPJHPEOB__DGCODECJJCC
                      ((LEGDPJHPEOB_o *)local_38.fields._current,AAJBIMFNMBB,(MethodInfo *)0x0);
  } while (bVar1);
  iVar2 = 4;
LAB_03391e60:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
  return iVar2 != 4;
}

