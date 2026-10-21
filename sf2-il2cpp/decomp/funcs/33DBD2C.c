// BHOHBAAKHOJ$$AILPAHLBOLD @ RVA 0x33DBD2C

void BHOHBAAKHOJ__AILPAHLBOLD(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  long lVar4;
  
  if ((DAT_04567e79 & 1) == 0) {
                    /* try { // try from 034dbd40 to 035dbd67 has its CatchHandler @ 034dbee4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04567e79 = 1;
  }
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if (iVar2 == 4) {
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                    /* try { // try from 034dbda0 to 035dbdc7 has its CatchHandler @ 034dbee0 */
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8) ==
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_034dbe64;
      Nekki_SF2_GUI_Shop_ShopScene__Refresh
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8),(MethodInfo *)0x0
                );
    }
    pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 034dbdd4 to 035dbddf has its CatchHandler @ 034dbed8 */
      if (iVar2 == 5) {
                    /* try { // try from 034dbde4 to 035dbdeb has its CatchHandler @ 034dbecc */
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 034dbdf0 to 035dbdff has its CatchHandler @ 034dbedc */
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                    /* try { // try from 034dbe00 to 035dbeaf has its CatchHandler @ 034dbc1c */
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8) ==
            (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_034dbe64;
        Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone
                  ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8),(MethodInfo *)0x0
                  );
      }
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
        if ((iVar2 != 3) || (bVar1 = KJFLIAMBKEB__HENGLKECBAC((MethodInfo *)0x0), !bVar1)) {
          return;
        }
        pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__ELJIPDIDPJD(pNVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034dbe64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

