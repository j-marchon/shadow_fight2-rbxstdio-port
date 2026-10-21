// HPEENDCCJND$$JEKKKDMPLEN @ RVA 0x3158280

void HPEENDCCJND__JEKKKDMPLEN(HPEENDCCJND_o *__this,Il2CppObject *MNODCIGLHEL,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  
  if ((DAT_04566851 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_Add__);
    DAT_04566851 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<object>_Add__;
  __this_00 = (__this->fields).EIHCMKCJPJO;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = MNODCIGLHEL;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,MNODCIGLHEL);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,MNODCIGLHEL,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

