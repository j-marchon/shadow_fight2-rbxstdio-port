// Nekki.SF2.GUI.MultiImageButton$$EECEGOFEKCC @ RVA 0x32514D0

void Nekki_SF2_GUI_MultiImageButton__EECEGOFEKCC
               (Nekki_SF2_GUI_MultiImageButton_o *__this,UnityEngine_Color_o HEEGPMBGMMC,
               bool BAAOJPPLJGA,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_UI_Graphic_array *pUVar3;
  MethodInfo *method_00;
  UnityEngine_UI_Graphic_o *pUVar4;
  uint uVar5;
  ulong uVar6;
  
                    /* try { // try from 0335150c to 03451513 has its CatchHandler @ 0335154c */
  if ((DAT_04567137 & 1) == 0) {
                    /* try { // try from 0335151c to 03451523 has its CatchHandler @ 03351548 */
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
                    /* try { // try from 03351524 to 03451563 has its CatchHandler @ 03351478 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567137 = 1;
  }
  pUVar4 = (__this->fields).super.super.m_TargetGraphic;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335151c with catch @ 03351548
                        */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335150c with catch @ 0335154c
                        */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
                    /* try { // try from 03351564 to 03451567 has its CatchHandler @ 03351588 */
    pUVar3 = Nekki_SF2_GUI_MultiImageButton__HGJPLFBAFOB(__this,method_00);
                    /* try { // try from 03351568 to 0345158f has its CatchHandler @ 03351478 */
    if (pUVar3 == (UnityEngine_UI_Graphic_array *)0x0) {
LAB_0335161c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (uint)pUVar3->max_length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
                    /* catch() { ... } // from try @ 03351564 with catch @ 03351588 */
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
                    /* try { // try from 03351590 to 03451597 has its CatchHandler @ 033515ac */
        pUVar4 = pUVar3->m_Items[(int)uVar5];
                    /* try { // try from 03351598 to 034515a3 has its CatchHandler @ 03351478 */
        uVar6 = 0;
        if (!BAAOJPPLJGA) {
                    /* try { // try from 033515a4 to 034515ab has its CatchHandler @ 033515ac */
          uVar6 = (ulong)(uint)(__this->fields).super.super.m_Colors.fields.m_FadeDuration;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03351590 with catch @ 033515ac
                       catch(type#2 @ 00000000) { ... } // from try @ 033515a4 with catch @ 033515ac
                        */
          if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033515b0 to 03451643 has its CatchHandler @ 033515b0
                       catch() { ... } // from try @ 033515b0 with catch @ 033515b0
                       catch() { ... } // from try @ 03351664 with catch @ 033515b0
                       catch() { ... } // from try @ 03351688 with catch @ 033515b0
                       catch() { ... } // from try @ 033516b0 with catch @ 033515b0
                       catch() { ... } // from try @ 033516f0 with catch @ 033515b0 */
            thunk_FUN_01ba7564();
          }
        }
        if (pUVar4 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_0335161c;
        (*(pUVar4->klass->vtable)._47_CrossFadeColor.methodPtr)
                  (CONCAT44((int)((ulong)HEEGPMBGMMC.fields._0_8_ >> 0x20),HEEGPMBGMMC.fields.r),
                   CONCAT44((int)((ulong)HEEGPMBGMMC.fields._4_8_ >> 0x20),HEEGPMBGMMC.fields.g),
                   CONCAT44((int)((ulong)HEEGPMBGMMC.fields._8_8_ >> 0x20),HEEGPMBGMMC.fields.b),
                   CONCAT44((int)((ulong)register0x00005060 >> 0x20),HEEGPMBGMMC.fields.a),uVar6,
                   pUVar4,1,1,(pUVar4->klass->vtable)._47_CrossFadeColor.method);
        uVar1 = (uint)pUVar3->max_length;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return;
}

