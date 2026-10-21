// LEGDPJHPEOB$$DGCODECJJCC @ RVA 0x354C264

bool LEGDPJHPEOB__DGCODECJJCC(LEGDPJHPEOB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568b24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    DAT_04568b24 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).ACCIHBHMFPN == 6) {
    __this_00 = (__this->fields).AHEFOIOKDOK;
    if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
        iVar1 = (__this->fields).HJBFKFHHAEO;
        if (iVar1 == 1) {
          return (__this->fields).CKPHGNCGNHK != false;
        }
        if (iVar1 == 2) {
          return (__this->fields).CKPHGNCGNHK == false;
        }
        bVar2 = false;
        goto LAB_0364c354;
      }
      if ((LEGDPJHPEOB_o *)local_38.fields._current == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = LEGDPJHPEOB__DGCODECJJCC((LEGDPJHPEOB_o *)local_38.fields._current,AAJBIMFNMBB,method)
      ;
      iVar1 = (__this->fields).HJBFKFHHAEO;
      if (!bVar2 && iVar1 == 2) {
        bVar2 = (__this->fields).CKPHGNCGNHK != false;
        goto LAB_0364c3ac;
      }
    } while (iVar1 != 1 || ((bVar2 ^ 0xffU) & 1) != 0);
    bVar2 = (__this->fields).CKPHGNCGNHK == false;
LAB_0364c3ac:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
  }
  else {
    bVar2 = LEGDPJHPEOB__IIPMBCPINCC(__this,AAJBIMFNMBB,method);
LAB_0364c354:
    bVar2 = (bool)(bVar2 ^ (__this->fields).CKPHGNCGNHK != false);
  }
  return bVar2;
}

