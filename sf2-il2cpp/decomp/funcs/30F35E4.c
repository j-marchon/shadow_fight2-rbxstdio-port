// Nekki.SF2.GUI.Shop.ShopScrollItem$$set_Opacity @ RVA 0x30F35E4

void Nekki_SF2_GUI_Shop_ShopScrollItem__set_Opacity
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  float fVar1;
  
                    /* try { // try from 031f35e4 to 032f35f3 has its CatchHandler @ 031f3700 */
  fVar1 = (__this->fields).super.AEIJHOCAICH;
  (__this->fields).super.FHIIIPEBDLE = CJNHFNHJHPE;
  if (CJNHFNHJHPE < fVar1) {
                    /* try { // try from 031f35f8 to 032f3607 has its CatchHandler @ 031f36f8 */
    (__this->fields).super.FHIIIPEBDLE = fVar1;
    CJNHFNHJHPE = fVar1;
  }
  fVar1 = (__this->fields).super.PEFNNFJCCNG;
  if (fVar1 < CJNHFNHJHPE) {
                    /* try { // try from 031f3608 to 032f360f has its CatchHandler @ 031f36f4 */
    (__this->fields).super.FHIIIPEBDLE = fVar1;
  }
  Nekki_SF2_GUI_Shop_ShopScrollItem__PKENFJMKHKF(__this,method);
  return;
}

