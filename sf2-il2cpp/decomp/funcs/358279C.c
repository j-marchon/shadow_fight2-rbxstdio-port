// EIILGPAPGMJ$$.ctor @ RVA 0x358279C

void EIILGPAPGMJ___ctor(EIILGPAPGMJ_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
                       MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_04568cdc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Image>__);
                    /* try { // try from 036827c8 to 037827cf has its CatchHandler @ 03682888 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
                    /* try { // try from 036827d0 to 037827d3 has its CatchHandler @ 03682880 */
                    /* try { // try from 036827d4 to 037827d7 has its CatchHandler @ 0368287c */
    DAT_04568cdc = 1;
  }
                    /* try { // try from 036827d8 to 037827db has its CatchHandler @ 03682878 */
                    /* try { // try from 036827dc to 037827df has its CatchHandler @ 03682874 */
                    /* try { // try from 036827e0 to 037827e7 has its CatchHandler @ 03682898 */
  BMNKDDCJACM___ctor((BMNKDDCJACM_o *)__this,(MethodInfo *)0x0);
  if (CMMIJCJOBBF != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 036827e8 to 037827eb has its CatchHandler @ 03682844 */
                    /* try { // try from 036827ec to 037827ef has its CatchHandler @ 0368283c */
                    /* try { // try from 036827f0 to 037827f3 has its CatchHandler @ 03682838 */
                    /* try { // try from 036827f4 to 037827f7 has its CatchHandler @ 03682834 */
                    /* try { // try from 036827f8 to 037827fb has its CatchHandler @ 03682820 */
    pUVar1 = (UnityEngine_UI_Image_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (CMMIJCJOBBF,Method_UnityEngine_GameObject_AddComponent<Image>__);
                    /* try { // try from 036827fc to 037827ff has its CatchHandler @ 03682230 */
                    /* try { // try from 03682800 to 03782803 has its CatchHandler @ 0368280c */
                    /* try { // try from 03682804 to 037828c3 has its CatchHandler @ 03682230 */
    (__this->fields).IAKCIALILLN = pUVar1;
    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03682800 with catch @ 0368280c */
                    /* catch() { ... } // from try @ 0368257c with catch @ 03682810 */
                    /* catch() { ... } // from try @ 03682638 with catch @ 03682814 */
                    /* catch() { ... } // from try @ 036826b0 with catch @ 03682818 */
    EIILGPAPGMJ__ONDOJMALJDE(__this,(UnityEngine_Vector2_o)0x3f0000003f000000,method_00);
                    /* catch() { ... } // from try @ 03682704 with catch @ 0368281c */
                    /* catch() { ... } // from try @ 036827f8 with catch @ 03682820 */
                    /* catch() { ... } // from try @ 03682674 with catch @ 03682824 */
    __this_00 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036825b0 with catch @ 03682828 */
                    /* catch() { ... } // from try @ 03682598 with catch @ 0368282c */
                    /* catch() { ... } // from try @ 03682620 with catch @ 03682830 */
                    /* catch() { ... } // from try @ 036827f4 with catch @ 03682834 */
                    /* catch() { ... } // from try @ 036827f0 with catch @ 03682838 */
                    /* catch() { ... } // from try @ 036827ec with catch @ 0368283c */
                    /* catch() { ... } // from try @ 03682684 with catch @ 03682840 */
                    /* catch() { ... } // from try @ 036827e8 with catch @ 03682844 */
                    /* catch() { ... } // from try @ 0368266c with catch @ 03682848 */
                    /* catch() { ... } // from try @ 036825e0 with catch @ 0368284c */
    if (((__this_00 != (UnityEngine_Transform_o *)0x0) &&
        (__this_01 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0),
        __this_01 != (UnityEngine_RectTransform_o *)0x0)) &&
       (__this_01->klass == UnityEngine_RectTransform_TypeInfo)) {
                    /* catch() { ... } // from try @ 036826a0 with catch @ 03682850 */
                    /* catch() { ... } // from try @ 03682640 with catch @ 03682854 */
      UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036826bc with catch @ 03682858 */
                    /* catch() { ... } // from try @ 03682600 with catch @ 0368285c */
                    /* catch() { ... } // from try @ 0368265c with catch @ 03682860 */
                    /* catch() { ... } // from try @ 036825f8 with catch @ 03682864 */
                    /* catch() { ... } // from try @ 03682534 with catch @ 03682868 */
                    /* catch() { ... } // from try @ 0368254c with catch @ 0368286c */
                    /* catch() { ... } // from try @ 036824e8 with catch @ 03682870 */
                    /* WARNING: Could not recover jumptable at 0x03682874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 036827dc with catch @ 03682874 */
      (*(__this->klass->vtable)._7_AHEDIEFFBMC.methodPtr)
                (CONCAT44(in_register_00005044,UVar2.fields.m_Width),
                 CONCAT44(in_register_00005064,UVar2.fields.m_Height),__this,
                 (__this->klass->vtable)._7_AHEDIEFFBMC.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036827d8 with catch @ 03682878 */
  FUN_01bab8c8();
}

