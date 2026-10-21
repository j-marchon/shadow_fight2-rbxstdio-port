// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_CenterPosition @ RVA 0x30F3624

UnityEngine_Vector3_o
Nekki_SF2_GUI_Shop_ShopScrollItem__get_CenterPosition
          (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  float fVar4;
  
                    /* try { // try from 031f362c to 032f3633 has its CatchHandler @ 031f36e8 */
  if ((DAT_04566439 & 1) == 0) {
                    /* try { // try from 031f3648 to 032f3657 has its CatchHandler @ 031f36e0 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566439 = 1;
  }
                    /* try { // try from 031f3660 to 032f366f has its CatchHandler @ 031f36dc */
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 031f3670 to 032f3677 has its CatchHandler @ 031f36d8 */
    UVar5 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.y;
                    /* try { // try from 031f3678 to 032f367f has its CatchHandler @ 031f36d4 */
    pNVar3 = (__this->fields)._image;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031f3698 to 032f369b has its CatchHandler @ 031f36d0 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._image;
                    /* try { // try from 031f36b4 to 032f36b7 has its CatchHandler @ 031f36fc */
                    /* try { // try from 031f36b8 to 032f36bb has its CatchHandler @ 031f3708 */
                    /* try { // try from 031f36bc to 032f36c3 has its CatchHandler @ 031f3704 */
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_031f36ec;
                    /* try { // try from 031f36c4 to 032f36c7 has its CatchHandler @ 031f3700 */
      UVar6 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y;
                    /* try { // try from 031f36c8 to 032f36cb has its CatchHandler @ 031f36ec */
    }
                    /* try { // try from 031f36cc to 032f36cf has its CatchHandler @ 031f36e4 */
    UVar5.fields.y = fVar4;
                    /* catch() { ... } // from try @ 031f3698 with catch @ 031f36d0
                       try { // try from 031f36d0 to 032f371f has its CatchHandler @ 031f357c */
                    /* catch() { ... } // from try @ 031f3678 with catch @ 031f36d4 */
                    /* catch() { ... } // from try @ 031f3670 with catch @ 031f36d8 */
                    /* catch() { ... } // from try @ 031f3660 with catch @ 031f36dc */
                    /* catch() { ... } // from try @ 031f3648 with catch @ 031f36e0 */
                    /* catch() { ... } // from try @ 031f36cc with catch @ 031f36e4 */
                    /* catch() { ... } // from try @ 031f362c with catch @ 031f36e8 */
    return (UnityEngine_Vector3_o)UVar5.fields;
  }
LAB_031f36ec:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f36c8 with catch @ 031f36ec */
  FUN_01bab8c8();
}

