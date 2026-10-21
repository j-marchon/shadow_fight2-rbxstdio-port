// Nekki.SF2.GUI.Profile.SubItem$$Init @ RVA 0x359C228

void Nekki_SF2_GUI_Profile_SubItem__Init(Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  FIPOABEGELK_StaticFields *pFVar1;
  GODDDLLLOLB_o *pGVar2;
  GODDDLLLOLB_Fields GVar3;
  undefined8 uVar4;
  
  if ((DAT_04568dd1 & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    DAT_04568dd1 = 1;
    method = extraout_x1;
  }
  if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FIPOABEGELK_TypeInfo,method);
  }
  pFVar1 = FIPOABEGELK_TypeInfo->static_fields;
  pGVar2 = pFVar1->PNKKLHDNAGP;
  if (pGVar2 != (GODDDLLLOLB_o *)0x0) {
    GVar3 = pGVar2->fields;
    __this_00 = (__this->fields)._backPicture;
    uVar4 = NEON_rev64(CONCAT44(GVar3.HFBHMJBLLOI / 255.0,GVar3.AKPNOPAEKEF / 255.0),4);
                    /* try { // try from 0369c294 to 0379c29f has its CatchHandler @ 0369c2f4 */
    (__this->fields).PJPFLFJCDCB = (float)(int)uVar4;
    (__this->fields).LNMOOOJEGMF = (float)(int)((ulong)uVar4 >> 0x20);
    (__this->fields).FBJAKHPAFNO = pFVar1->EBHMIOHJIJJ;
                    /* try { // try from 0369c2a0 to 0379c2c3 has its CatchHandler @ 0369bbe4 */
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0369c2c4 to 0379c2c7 has its CatchHandler @ 0369c374 */
  FUN_01bab8c8();
}

