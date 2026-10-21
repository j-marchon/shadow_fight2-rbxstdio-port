// Nekki.SF2.GUI.Shop.ShopBottomPanel$$GEFAAMGLMMC @ RVA 0x3300048

MGNDHCBAPEN_string__string__o *
Nekki_SF2_GUI_Shop_ShopBottomPanel__GEFAAMGLMMC
          (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method)

{
  MGNDHCBAPEN_string__string__o *__this_00;
  undefined8 *puVar1;
  
                    /* try { // try from 03400048 to 0350004b has its CatchHandler @ 03400074 */
                    /* try { // try from 0340004c to 03500083 has its CatchHandler @ 033ffb64 */
  if ((DAT_04567712 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
                    /* catch() { ... } // from try @ 03400048 with catch @ 03400074 */
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_12013);
                    /* try { // try from 03400084 to 0350008b has its CatchHandler @ 034000a0 */
                    /* try { // try from 0340008c to 03500097 has its CatchHandler @ 033ffb64 */
    FUN_01bab630(&StringLiteral_12017);
                    /* try { // try from 03400098 to 0350009f has its CatchHandler @ 034000a0 */
    FUN_01bab630(&StringLiteral_12019);
                    /* catch() { ... } // from try @ 033fffe0 with catch @ 034000a0
                       catch() { ... } // from try @ 03400084 with catch @ 034000a0
                       catch() { ... } // from try @ 03400098 with catch @ 034000a0 */
                    /* try { // try from 034000a4 to 0350028f has its CatchHandler @ 034000a4
                       catch() { ... } // from try @ 034000a4 with catch @ 034000a4
                       catch() { ... } // from try @ 034003bc with catch @ 034000a4
                       catch() { ... } // from try @ 03400564 with catch @ 034000a4
                       catch() { ... } // from try @ 034005d4 with catch @ 034000a4
                       catch() { ... } // from try @ 034005dc with catch @ 034000a4
                       catch() { ... } // from try @ 034006c8 with catch @ 034000a4
                       catch() { ... } // from try @ 034006dc with catch @ 034000a4
                       catch() { ... } // from try @ 03400710 with catch @ 034000a4 */
    FUN_01bab630(&StringLiteral_12007);
    FUN_01bab630(&StringLiteral_12015);
    FUN_01bab630(&StringLiteral_12009);
    FUN_01bab630(&StringLiteral_12011);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_12021);
    DAT_04567712 = 1;
  }
  if ((uint)HIIGJGLEOFH < 8) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_12015_03fc6630)[HIIGJGLEOFH];
    __this_00 = (MGNDHCBAPEN_string__string__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,StringLiteral_14092,(Il2CppObject *)*puVar1,
               Method_MGNDHCBAPEN<string,_string>__ctor__);
  }
  else {
    __this_00 = (MGNDHCBAPEN_string__string__o *)0x0;
  }
  return __this_00;
}

