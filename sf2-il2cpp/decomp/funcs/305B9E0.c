// ACHLOMELAJE$$IDFEGHDENFD @ RVA 0x305B9E0

MEMHEPBAJJA_o *
ACHLOMELAJE__IDFEGHDENFD(ACHLOMELAJE_o *__this,System_Xml_XmlNode_o *JOFLILPKFAO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MEMHEPBAJJA_o *__this_00;
  System_Collections_Generic_List_MEMHEPBAJJA__o *__this_01;
  MEMHEPBAJJA_array *pMVar3;
  
  if ((DAT_04565e8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA>_Add__);
    FUN_01bab630(&MEMHEPBAJJA_TypeInfo);
    DAT_04565e8a = 1;
  }
  __this_00 = (MEMHEPBAJJA_o *)thunk_FUN_01bda818(MEMHEPBAJJA_TypeInfo);
  MEMHEPBAJJA___ctor(__this_00,JOFLILPKFAO,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<MEMHEPBAJJA>_Add__;
  __this_01 = (__this->fields).ECEOENIJAPJ;
  if (__this_01 != (System_Collections_Generic_List_MEMHEPBAJJA__o *)0x0) {
    pMVar3 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pMVar3 != (MEMHEPBAJJA_array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pMVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

