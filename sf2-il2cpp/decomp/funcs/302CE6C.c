// Nekki.SF2.GUI.SimpleScroll$$MPBMFLMKNLC @ RVA 0x302CE6C

void Nekki_SF2_GUI_SimpleScroll__MPBMFLMKNLC
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *GEEJDFDHOFA,
               Nekki_SF2_GUI_BaseScrollItem_o *HIMELABOAHB,MethodInfo *method)

{
  uint index;
  int32_t index_00;
  UnityEngine_Transform_o *pUVar1;
  
                    /* try { // try from 0312ce78 to 0322ce7b has its CatchHandler @ 0312cee8 */
                    /* try { // try from 0312ce7c to 0322ce87 has its CatchHandler @ 0312ceec */
                    /* try { // try from 0312ce88 to 0322cf03 has its CatchHandler @ 0312ce30 */
  if ((GEEJDFDHOFA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)GEEJDFDHOFA,(MethodInfo *)0x0),
     __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0, pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    index = UnityEngine_Transform__GetSiblingIndex(pUVar1,(MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_SimpleScroll_o *)(ulong)index;
    if ((HIMELABOAHB != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)HIMELABOAHB,(MethodInfo *)0x0),
       __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0, pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      index_00 = UnityEngine_Transform__GetSiblingIndex(pUVar1,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)GEEJDFDHOFA,(MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetSiblingIndex(pUVar1,index_00,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)HIMELABOAHB,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312ce78 with catch @ 0312cee8
                        */
        __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312ce7c with catch @ 0312ceec
                        */
          UnityEngine_Transform__SetSiblingIndex(pUVar1,index,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0312cf04 to 0322cf1b has its CatchHandler @ 0312cf94 */
  FUN_01bab8c8(__this);
}

