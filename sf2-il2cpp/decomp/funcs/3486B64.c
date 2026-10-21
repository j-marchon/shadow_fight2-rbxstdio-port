// Nekki.SF2.GUI.Shop.ParametersPanel$$FKKKDIGNEFO @ RVA 0x3486B64

void Nekki_SF2_GUI_Shop_ParametersPanel__FKKKDIGNEFO
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,
               HOOAAGABMBL_o *PNBCDJEDGAP,bool ABJGMLMMJJA,MethodInfo *method)

{
  Il2CppObject *BHOLKPLJMNI;
  bool bVar1;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_00;
  FPLCEOJCPOD_o *pFVar2;
  MethodInfo *method_00;
  ABCMPMHNMAP_o *pAVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  int32_t local_48;
  int32_t local_44;
  
                    /* try { // try from 03586b70 to 03686b77 has its CatchHandler @ 03587004 */
                    /* try { // try from 03586b88 to 03686b8f has its CatchHandler @ 03587010 */
  if ((DAT_045683b6 & 1) == 0) {
                    /* try { // try from 03586b9c to 03686ba3 has its CatchHandler @ 03587074 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
                    /* try { // try from 03586bb4 to 03686bbb has its CatchHandler @ 03586ff8 */
                    /* try { // try from 03586bbc to 03686bcf has its CatchHandler @ 0358706c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
                    /* try { // try from 03586bd4 to 03686bdf has its CatchHandler @ 03587058 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045683b6 = 1;
  }
  local_60.fields._current = (Il2CppObject *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03586bf4 to 03686bfb has its CatchHandler @ 0358704c */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03586c00 to 03686c0f has its CatchHandler @ 03587070 */
  pAVar3 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
  if ((pAVar3 != (ABCMPMHNMAP_o *)0x0) &&
     (__this_00 = (pAVar3->fields).ACHJNNOKEDK,
     __this_00 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
                    /* try { // try from 03586c1c to 03686c2f has its CatchHandler @ 035870d4 */
                    /* try { // try from 03586c30 to 03686c3b has its CatchHandler @ 03587028 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      do {
                    /* try { // try from 03586c54 to 03686c57 has its CatchHandler @ 03586fe8 */
                    /* try { // try from 03586c58 to 03686c67 has its CatchHandler @ 03586ff4 */
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                          );
        BHOLKPLJMNI = local_60.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
                    /* try { // try from 03586cec to 03686cf3 has its CatchHandler @ 03586ffc */
          return;
        }
        local_44 = 0;
      } while (ANMFBABEMFD == (HOOAAGABMBL_o *)0x0);
      if ((IHDFIJGDCBL_o *)local_60.fields._current == (IHDFIJGDCBL_o *)0x0) break;
      pFVar2 = (ANMFBABEMFD->fields)._EBHBCMICHKA_k__BackingField;
      if (pFVar2 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03586c80 to 03686c83 has its CatchHandler @ 03586fe4 */
                    /* try { // try from 03586c84 to 03686c93 has its CatchHandler @ 03586fec */
      method_00 = (MethodInfo *)0x0;
      bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                        (pFVar2,((IHDFIJGDCBL_Fields *)((long)local_60.fields._current + 0x10))->
                                NPFMOEOIEKM,&local_44,true,false,(MethodInfo *)0x0);
      if ((bVar1) && (((IHDFIJGDCBL_Fields *)((long)BHOLKPLJMNI + 0x10))->CHLMHEGKKNH == false)) {
                    /* try { // try from 03586ca4 to 03686cab has its CatchHandler @ 03586ff0 */
        local_48 = local_44;
        if (PNBCDJEDGAP != (HOOAAGABMBL_o *)0x0 && ABJGMLMMJJA) {
          pFVar2 = (PNBCDJEDGAP->fields)._EBHBCMICHKA_k__BackingField;
          if (pFVar2 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method_00 = (MethodInfo *)0x0;
          FPLCEOJCPOD__KNMENIBLFGF
                    (pFVar2,((IHDFIJGDCBL_Fields *)((long)BHOLKPLJMNI + 0x10))->NPFMOEOIEKM,
                     &local_48,true,false,(MethodInfo *)0x0);
        }
                    /* try { // try from 03586cd4 to 03686cdf has its CatchHandler @ 0358705c */
        Nekki_SF2_GUI_Shop_ParametersPanel__PFFPCAEKIDC
                  (__this,(IHDFIJGDCBL_o *)BHOLKPLJMNI,local_44,local_48,method_00);
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03586d04 to 03686d0b has its CatchHandler @ 03587044 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

