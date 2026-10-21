// FKDLCJJOGIP$$JJAAFACCDCP @ RVA 0x3508A50

bool FKDLCJJOGIP__JJAAFACCDCP(FKDLCJJOGIP_o *__this,bool BLOGOHKEPHI,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  CHDGOFBHAFI_o *__this_00;
  long lVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_MapScene_o *__this_01;
  
  method_00 = (MethodInfo *)(ulong)BLOGOHKEPHI;
                    /* try { // try from 03608a54 to 03708a5f has its CatchHandler @ 03608b68 */
  if ((DAT_045688ca & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045688ca = 1;
    method_00 = extraout_x1;
  }
                    /* try { // try from 03608aa8 to 03708aab has its CatchHandler @ 03608b60 */
  bVar1 = FKDLCJJOGIP__PMINMFLPJCB(__this,method_00);
                    /* try { // try from 03608ab0 to 03708abb has its CatchHandler @ 03608b5c */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
    CHDGOFBHAFI__GJPOEDJOAAM(__this_00,bVar1 && BLOGOHKEPHI,(MethodInfo *)0x0);
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
                    /* try { // try from 03608b04 to 03708b07 has its CatchHandler @ 03608b50 */
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                    /* try { // try from 03608b08 to 03708b2f has its CatchHandler @ 03608620 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    __this_01 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03608b30 to 03708b33 has its CatchHandler @ 03608b70 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 03608b34 to 03708b3b has its CatchHandler @ 03608b6c */
                    /* try { // try from 03608b3c to 03708b3f has its CatchHandler @ 03608b64 */
                    /* try { // try from 03608b40 to 03708b47 has its CatchHandler @ 03608b58 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03608b48 to 03708b4b has its CatchHandler @ 03608b54 */
      if (__this_01 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03608b78;
                    /* try { // try from 03608b4c to 03708b8b has its CatchHandler @ 03608620 */
                    /* catch() { ... } // from try @ 03608b04 with catch @ 03608b50 */
                    /* catch() { ... } // from try @ 03608b48 with catch @ 03608b54 */
      if (bVar1 && BLOGOHKEPHI) {
                    /* catch() { ... } // from try @ 03608b40 with catch @ 03608b58 */
        Nekki_SF2_GUI_Map_MapScene__OpenRaids(__this_01,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03608ab0 with catch @ 03608b5c */
      }
      else {
                    /* catch() { ... } // from try @ 03608aa8 with catch @ 03608b60 */
        Nekki_SF2_GUI_Map_MapScene__CloseRaids(__this_01,(MethodInfo *)0x0);
      }
    }
                    /* catch() { ... } // from try @ 03608b3c with catch @ 03608b64 */
                    /* catch() { ... } // from try @ 03608a54 with catch @ 03608b68 */
                    /* catch() { ... } // from try @ 03608b34 with catch @ 03608b6c */
                    /* catch() { ... } // from try @ 03608b30 with catch @ 03608b70 */
                    /* catch() { ... } // from try @ 03608a40 with catch @ 03608b74 */
    return bVar1 && BLOGOHKEPHI;
  }
LAB_03608b78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

