// Nekki.SF2.GUI.Shop.ShopTableViewCell$$HGNBJGOJLLN @ RVA 0x3191988

void Nekki_SF2_GUI_Shop_ShopTableViewCell__HGNBJGOJLLN
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  HOOAAGABMBL_o *pHVar3;
  float fVar4;
  
                    /* try { // try from 03291988 to 0339198b has its CatchHandler @ 03291c24 */
  if ((DAT_04566a44 & 1) == 0) {
                    /* try { // try from 032919a0 to 033919a3 has its CatchHandler @ 03291c20 */
    FUN_01bab630(&StringLiteral_10876);
    DAT_04566a44 = 1;
  }
  if ((__this->fields).IHKJJFAEEHM == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._discountLabel;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)
                  (*(pNVar2->klass->vtable)._74_get_text.methodPtr)
                            (pNVar2,(pNVar2->klass->vtable)._74_get_text.method);
                    /* try { // try from 032919d8 to 033919e3 has its CatchHandler @ 03291c40 */
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pHVar3 = (__this->fields).IHKJJFAEEHM;
    if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 032919ec to 033919ff has its CatchHandler @ 03291c2c */
      bVar1 = System_String__op_Inequality
                        ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      __this_00 = (__this->fields)._discountRootImage;
      if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 03291a1c to 03391a2b has its CatchHandler @ 03291c50 */
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        fVar4 = (float)(*(__this->klass->vtable)._11_get_Opacity.methodPtr)
                                 (__this,(__this->klass->vtable)._11_get_Opacity.method);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 03291a50 to 03391a53 has its CatchHandler @ 03291c48 */
          UnityEngine_GameObject__SetActive(__this_01,1.0 <= fVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03291a58 to 03391a6f has its CatchHandler @ 03291c54 */
  FUN_01bab8c8();
}

