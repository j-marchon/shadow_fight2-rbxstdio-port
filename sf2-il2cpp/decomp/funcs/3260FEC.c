// AAPGCAPGBLG.MHBKKIEKLLE$$OONMMIIICEP @ RVA 0x3260FEC

void AAPGCAPGBLG_MHBKKIEKLLE__OONMMIIICEP
               (AAPGCAPGBLG_MHBKKIEKLLE_o *__this,CCLKPGBIBOP_o *p_pack,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *item;
  System_String_array *pSVar3;
  
  if ((DAT_045671ad & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 03361014 to 0346101f has its CatchHandler @ 03361844 */
    DAT_045671ad = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if ((p_pack != (CCLKPGBIBOP_o *)0x0) && ((p_pack->fields)._BNIHGHLPOHB_k__BackingField != false))
  {
    __this_00 = (__this->fields).bundleNames;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                    /* try { // try from 03361030 to 0346103f has its CatchHandler @ 033618a4 */
      item = (p_pack->fields)._COIPKAKHDFP_k__BackingField;
      pSVar3 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 03361070 to 0346107b has its CatchHandler @ 033617fc */
          (__this_00->fields)._size = uVar1 + 1;
          pSVar3->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1);
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
                    /* try { // try from 0336108c to 0346109b has its CatchHandler @ 033617dc */
  return;
}

