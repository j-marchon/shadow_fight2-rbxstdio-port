// FEPPOONJCGI$$NDDNOOBENCN @ RVA 0x30B0FFC

bool FEPPOONJCGI__NDDNOOBENCN(FEPPOONJCGI_o *__this,System_String_o *GDGEELOAELH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  KAJIALENBGD_o *__this_00;
  KAJIALENBGD_array *pKVar5;
  System_Collections_Generic_List_KAJIALENBGD__o *__this_01;
  int index;
  System_Xml_XmlNode_o *GGDPPDFOEOH;
  
  if ((DAT_045661df & 1) == 0) {
    FUN_01bab630(&KAJIALENBGD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
    DAT_045661df = 1;
  }
  __this_01 = (__this->fields).GNGLHGOGCBO;
  if (__this_01 != (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        GGDPPDFOEOH = (__this->fields).EDIFMNKDBMF;
        __this_00 = (KAJIALENBGD_o *)thunk_FUN_01bda818(KAJIALENBGD_TypeInfo);
        KAJIALENBGD___ctor(__this_00,GGDPPDFOEOH,GDGEELOAELH,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<KAJIALENBGD>_Add__;
        pKVar5 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pKVar5 != (KAJIALENBGD_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pKVar5->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pKVar5->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          return true;
        }
        break;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) break;
      bVar3 = System_String__op_Equality(pIVar4[1].monitor,GDGEELOAELH,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
      __this_01 = (__this->fields).GNGLHGOGCBO;
      index = index + 1;
    } while (__this_01 != (System_Collections_Generic_List_KAJIALENBGD__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

