// BCPODJMEKMJ$$BGFNHJFJOLL @ RVA 0x31BE804

void BCPODJMEKMJ__BGFNHJFJOLL
               (BCPODJMEKMJ_o *__this,IEFEBEDLHNN_o *ELHGBMHJKCC,float EEJDCAPLKON,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MGNDHCBAPEN_IEFEBEDLHNN__float__o *__this_00;
  MGNDHCBAPEN_IEFEBEDLHNN__float__array *pMVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *__this_01;
  
  if ((DAT_04566c05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_Add__);
    FUN_01bab630(&Method_MGNDHCBAPEN<IEFEBEDLHNN,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<IEFEBEDLHNN,_float>_TypeInfo);
    DAT_04566c05 = 1;
  }
  __this_01 = (__this->fields).PLMBJNAAGOI;
  __this_00 = (MGNDHCBAPEN_IEFEBEDLHNN__float__o *)
              thunk_FUN_01bda818(MGNDHCBAPEN<IEFEBEDLHNN,_float>_TypeInfo);
  MGNDHCBAPEN<object,_float>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)ELHGBMHJKCC,EEJDCAPLKON,
             Method_MGNDHCBAPEN<IEFEBEDLHNN,_float>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_Add__;
  if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)0x0) {
    pMVar3 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pMVar3 != (MGNDHCBAPEN_IEFEBEDLHNN__float__array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pMVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,__this_00);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

