// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$get_IsFreePrice @ RVA 0x3151AA0

bool Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_IsFreePrice
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined1 local_40 [16];
  undefined8 local_30;
  
                    /* try { // try from 03251aa4 to 03351af7 has its CatchHandler @ 03251990 */
  if ((DAT_0456680f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    DAT_0456680f = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03251af8 to 03351b07 has its CatchHandler @ 03251b08 */
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_4_ = 0;
  local_40._12_4_ = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  __this_00 = Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_Prices(__this,method);
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03251a8c with catch @ 03251b08
                       catch() { ... } // from try @ 03251af8 with catch @ 03251b08 */
                    /* try { // try from 03251b0c to 03351b0f has its CatchHandler @ 03251b18 */
                    /* try { // try from 03251b10 to 03351b1b has its CatchHandler @ 03251990 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03251b0c with catch @ 03251b18
                        */
  System_Collections_Generic_List<int>__GetEnumerator
            (&local_58,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
  local_40._8_4_ = local_58.fields._index;
  local_40._12_4_ = local_58.fields._version;
  local_40._0_8_ = local_58.fields._list;
  local_30 = local_58.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                      ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
                       Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03251b60;
    }
  } while ((int32_t)local_30 == 0);
  iVar2 = 4;
LAB_03251b60:
  System_Collections_Generic_List_Enumerator<int>__Dispose
            ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
             Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
  return iVar2 != 4;
}

