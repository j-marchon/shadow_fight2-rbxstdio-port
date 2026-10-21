// Nekki.SF2.GUI.Shop.InfoPanelContent$$Update @ RVA 0x3008C98

void Nekki_SF2_GUI_Shop_InfoPanelContent__Update
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  int64_t NFBEBOIDJLL;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03108cac to 03208d2b has its CatchHandler @ 03108cac
                       catch() { ... } // from try @ 03108cac with catch @ 03108cac
                       catch() { ... } // from try @ 03108e74 with catch @ 03108cac
                       catch() { ... } // from try @ 03108ecc with catch @ 03108cac
                       catch() { ... } // from try @ 03108f2c with catch @ 03108cac
                       catch() { ... } // from try @ 03108f4c with catch @ 03108cac
                       catch() { ... } // from try @ 03108f90 with catch @ 03108cac */
  if ((DAT_04565b56 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565b56 = 1;
    method = extraout_x1;
  }
  NFBEBOIDJLL = Nekki_SF2_GUI_Shop_InfoPanelContent__GetItemTimer(__this,method);
  if (0 < NFBEBOIDJLL) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__GMOBPKAOMNA(__this,NFBEBOIDJLL,in_x2);
    Nekki_SF2_GUI_Shop_InfoPanelContent__HMDPBFDLELC(__this,NFBEBOIDJLL,in_x2);
    return;
  }
  pNVar1 = (__this->fields)._timerAlias;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,string_TypeInfo->static_fields->Empty,
               (pNVar1->klass->vtable)._75_set_text.method);
    pNVar1 = (__this->fields)._timerAlias;
                    /* try { // try from 03108d2c to 03208d3b has its CatchHandler @ 03108ed4 */
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03108d3c to 03208d5b has its CatchHandler @ 03108ee4 */
      UnityEngine_GameObject__SetActive(__this_00,(__this->fields).BGODGJNKGOE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

