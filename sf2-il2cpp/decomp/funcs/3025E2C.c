// PKKLIJLIKGF$$CJHLLKHEEHH @ RVA 0x3025E2C

void PKKLIJLIKGF__CJHLLKHEEHH(PKKLIJLIKGF_o *__this,System_String_o *KEFILECBPMF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_String_array *pSVar3;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04565c8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    DAT_04565c8f = 1;
  }
  __this_00 = (__this->fields).IIBDCLHFNCD;
  item = System_String__Copy(KEFILECBPMF,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04();
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

