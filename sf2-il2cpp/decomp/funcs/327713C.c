// OCMLPCKBHPN$$EGJMBCFCADF @ RVA 0x327713C

void OCMLPCKBHPN__EGJMBCFCADF
               (KJFHBENFBBO_o *KCOPADNICAH,System_String_o *CNPLLCACLNO,System_String_o *AGCCAIHMFHC
               ,int32_t DJFJIEDMAMJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o *__this;
  MGNDHCBAPEN_T1__T2__o *__this_00;
  MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string___o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string___array *pMVar3;
  
                    /* try { // try from 0337713c to 03477177 has its CatchHandler @ 03376b8c */
                    /* catch() { ... } // from try @ 03377138 with catch @ 03377168 */
  method_00 = (MethodInfo *)CNPLLCACLNO;
  if ((DAT_04567252 & 1) == 0) {
                    /* try { // try from 03377178 to 0347717f has its CatchHandler @ 03377194 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Add__
                );
                    /* try { // try from 03377180 to 0347718b has its CatchHandler @ 03376b8c */
    FUN_01bab630(&Method_MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>__ctor__);
                    /* try { // try from 0337718c to 03477193 has its CatchHandler @ 03377194 */
                    /* catch() { ... } // from try @ 033770d8 with catch @ 03377194
                       catch() { ... } // from try @ 03377178 with catch @ 03377194
                       catch() { ... } // from try @ 0337718c with catch @ 03377194 */
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>_TypeInfo);
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04567252 = 1;
    method_00 = extraout_x1;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  __this = OCMLPCKBHPN__EFMLMIDOPCL(DJFJIEDMAMJ,method_00);
  __this_00 = (MGNDHCBAPEN_T1__T2__o *)thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            (__this_00,(Il2CppObject *)CNPLLCACLNO,(Il2CppObject *)AGCCAIHMFHC,
             Method_MGNDHCBAPEN<string,_string>__ctor__);
  __this_01 = (MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string___o *)
              thunk_FUN_01bda818(MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)__this_01,(Il2CppObject *)KCOPADNICAH,
             (Il2CppObject *)__this_00,
             Method_MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>__ctor__);
  lVar2 = 
  Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Add__
  ;
  if (__this != (System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o
                 *)0x0) {
    pMVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pMVar3 != (MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string___array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pMVar3->m_Items[(int)uVar1] = __this_01;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,__this_01);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_01,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

