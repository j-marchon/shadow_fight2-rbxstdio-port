// Nekki.SF2.GUI.Shop.ShopScene$$BCDNLJLKOCC @ RVA 0x3436F18

void Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this_00;
  
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03536f3c to 03636f43 has its CatchHandler @ 03537148 */
    return;
  }
  __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_ParametersPanelContent
                        (__this,(MethodInfo *)CNDPGGAFHEA);
  if (__this_00 != (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *)0x0) {
                    /* try { // try from 03536f2c to 03636f33 has its CatchHandler @ 0353716c */
    Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToUpdateParameters
              (__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

