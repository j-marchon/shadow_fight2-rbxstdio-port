// Nekki.SF2.GUI.Shop.ShopBottomPanel$$.ctor @ RVA 0x33004D4

void Nekki_SF2_GUI_Shop_ShopBottomPanel___ctor
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,MethodInfo *method)

{
  if ((DAT_04567715 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>__ctor__);
    DAT_04567715 = 1;
  }
                    /* try { // try from 0340050c to 03500527 has its CatchHandler @ 034005f0 */
  *(undefined4 *)&(__this->fields).super.field_0x64 = 0x43960000;
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>___ctor
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>__ctor__);
  return;
}

