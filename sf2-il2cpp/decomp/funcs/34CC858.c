// IBKEPOJPLBG$$MAHFCKJGBPP @ RVA 0x34CC858

void IBKEPOJPLBG__MAHFCKJGBPP(IBKEPOJPLBG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  System_String_o *pSVar3;
  
  if ((DAT_0456867c & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035cc8a8 to 036cc8d3 has its CatchHandler @ 035cca2c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_0456867c = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).MLPKGJACOFA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
  bVar1 = IBKEPOJPLBG__ENGFHFALHNC(pSVar3,method_00);
  if (bVar1) {
    AMIINPEKKFB__NLJKKOINGGE(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 035cc910 to 036cc917 has its CatchHandler @ 035cca24 */
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                    /* try { // try from 035cc92c to 036cc933 has its CatchHandler @ 035cca14 */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
                    /* try { // try from 035cc938 to 036cc943 has its CatchHandler @ 035cca20 */
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
                    /* try { // try from 035cc948 to 036cc957 has its CatchHandler @ 035cca10 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 035cc958 to 036cc9e7 has its CatchHandler @ 035cc780 */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035cc92c with catch @ 035cca14 */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Shop_ShopScene__Refresh
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0
                );
    }
  }
  else {
    pSVar3 = (__this->fields).HIHHACDOFBF;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035cc9e8 to 036cc9ef has its CatchHandler @ 035cca34 */
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
                    /* try { // try from 035cc9f0 to 036cc9f3 has its CatchHandler @ 035cca28 */
                    /* try { // try from 035cc9f4 to 036cc9f7 has its CatchHandler @ 035cca1c */
                    /* try { // try from 035cc9f8 to 036cc9fb has its CatchHandler @ 035cca18 */
    MGNPHCAAEIO__NKJFPKDJKEN(pSVar3,(MethodInfo *)0x0);
  }
                    /* try { // try from 035cc9fc to 036cc9ff has its CatchHandler @ 035cc780 */
                    /* try { // try from 035cca00 to 036cca03 has its CatchHandler @ 035cca0c */
                    /* try { // try from 035cca04 to 036cca43 has its CatchHandler @ 035cc780 */
                    /* catch() { ... } // from try @ 035cca00 with catch @ 035cca0c */
                    /* catch() { ... } // from try @ 035cc948 with catch @ 035cca10 */
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

