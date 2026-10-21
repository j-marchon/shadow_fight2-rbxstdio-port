// HOOAAGABMBL$$HHNNDCKCIJH @ RVA 0x30E9468

void HOOAAGABMBL__HHNNDCKCIJH(HOOAAGABMBL_o *__this,PONNKDFAMFM_o *MONGGBMMAAD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  PONNKDFAMFM_o *item;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  PONNKDFAMFM_array *pPVar3;
  
                    /* try { // try from 031e9470 to 032e947b has its CatchHandler @ 031e97b4 */
  if ((DAT_04566409 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__);
    DAT_04566409 = 1;
  }
  item = HOOAAGABMBL__AFEIDKHBMDG(__this,MONGGBMMAAD,method);
  lVar2 = Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__;
  __this_00 = (__this->fields)._PIKFJCELJID_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
    pPVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pPVar3 != (PONNKDFAMFM_array *)0x0) {
                    /* try { // try from 031e94cc to 032e94d7 has its CatchHandler @ 031e97bc */
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pPVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 031e94f0 to 032e94ff has its CatchHandler @ 031e97b8 */
        pPVar3->m_Items[(int)uVar1] = item;
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
                    /* try { // try from 031e9518 to 032e952b has its CatchHandler @ 031e97bc */
  FUN_01bab8c8();
}

