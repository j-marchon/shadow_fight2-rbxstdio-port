// Nekki.SF2.GUI.Shop.ShopTableViewCell$$RemoveDiscount @ RVA 0x3191C9C

void Nekki_SF2_GUI_Shop_ShopTableViewCell__RemoveDiscount
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._discountRootImage;
                    /* try { // try from 03291ca8 to 03391caf has its CatchHandler @ 03291cc4 */
                    /* try { // try from 03291cb0 to 03391cbb has its CatchHandler @ 0329172c */
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03291cbc to 03391cc3 has its CatchHandler @ 03291cc4 */
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03291ca8 with catch @ 03291cc4
                       catch() { ... } // from try @ 03291cbc with catch @ 03291cc4 */
  FUN_01bab8c8();
}

